/**
 * This file is generated by jsonrpcstub, DO NOT CHANGE IT MANUALLY!
 */

#ifndef JSONRPC_CPP_STUB_DEV_RPC_DEBUGFACE_H_
#define JSONRPC_CPP_STUB_DEV_RPC_DEBUGFACE_H_

#include "ModularServer.h"

namespace dev {
    namespace rpc {
        class DebugFace : public ServerInterface<DebugFace>
        {
            public:
                DebugFace()
                {
                    this->bindAndAddMethod(jsonrpc::Procedure("debug_trace", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_OBJECT, "param1",jsonrpc::JSON_STRING,"param2",jsonrpc::JSON_INTEGER, NULL), &dev::rpc::DebugFace::debug_traceI);
                    this->bindAndAddMethod(jsonrpc::Procedure("debug_storageAt", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_OBJECT, "param1",jsonrpc::JSON_STRING,"param2",jsonrpc::JSON_INTEGER,"param3",jsonrpc::JSON_STRING, NULL), &dev::rpc::DebugFace::debug_storageAtI);
                }

                inline virtual void debug_traceI(const Json::Value &request, Json::Value &response)
                {
                    response = this->debug_trace(request[0u].asString(), request[1u].asInt());
                }
                inline virtual void debug_storageAtI(const Json::Value &request, Json::Value &response)
                {
                    response = this->debug_storageAt(request[0u].asString(), request[1u].asInt(), request[2u].asString());
                }
                virtual Json::Value debug_trace(const std::string& param1, int param2) = 0;
                virtual Json::Value debug_storageAt(const std::string& param1, int param2, const std::string& param3) = 0;
        };

    }
}
#endif //JSONRPC_CPP_STUB_DEV_RPC_DEBUGFACE_H_
