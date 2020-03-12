// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: kvstore.proto
#ifndef GRPC_kvstore_2eproto__INCLUDED
#define GRPC_kvstore_2eproto__INCLUDED

#include "kvstore.pb.h"

#include <functional>
#include <grpc/impl/codegen/port_platform.h>
#include <grpcpp/impl/codegen/async_generic_service.h>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/client_context.h>
#include <grpcpp/impl/codegen/completion_queue.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/proto_utils.h>
#include <grpcpp/impl/codegen/rpc_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/status.h>
#include <grpcpp/impl/codegen/stub_options.h>
#include <grpcpp/impl/codegen/sync_stream.h>

namespace kvstore {

class KeyValueStore final {
 public:
  static constexpr char const* service_full_name() {
    return "kvstore.KeyValueStore";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    virtual ::grpc::Status put(::grpc::ClientContext* context, const ::kvstore::PutRequest& request, ::kvstore::PutReply* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::kvstore::PutReply>> Asyncput(::grpc::ClientContext* context, const ::kvstore::PutRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::kvstore::PutReply>>(AsyncputRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::kvstore::PutReply>> PrepareAsyncput(::grpc::ClientContext* context, const ::kvstore::PutRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::kvstore::PutReply>>(PrepareAsyncputRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientReaderWriterInterface< ::kvstore::GetRequest, ::kvstore::GetReply>> get(::grpc::ClientContext* context) {
      return std::unique_ptr< ::grpc::ClientReaderWriterInterface< ::kvstore::GetRequest, ::kvstore::GetReply>>(getRaw(context));
    }
    std::unique_ptr< ::grpc::ClientAsyncReaderWriterInterface< ::kvstore::GetRequest, ::kvstore::GetReply>> Asyncget(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderWriterInterface< ::kvstore::GetRequest, ::kvstore::GetReply>>(AsyncgetRaw(context, cq, tag));
    }
    std::unique_ptr< ::grpc::ClientAsyncReaderWriterInterface< ::kvstore::GetRequest, ::kvstore::GetReply>> PrepareAsyncget(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderWriterInterface< ::kvstore::GetRequest, ::kvstore::GetReply>>(PrepareAsyncgetRaw(context, cq));
    }
    virtual ::grpc::Status remove(::grpc::ClientContext* context, const ::kvstore::RemoveRequest& request, ::kvstore::RemoveReply* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::kvstore::RemoveReply>> Asyncremove(::grpc::ClientContext* context, const ::kvstore::RemoveRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::kvstore::RemoveReply>>(AsyncremoveRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::kvstore::RemoveReply>> PrepareAsyncremove(::grpc::ClientContext* context, const ::kvstore::RemoveRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::kvstore::RemoveReply>>(PrepareAsyncremoveRaw(context, request, cq));
    }
    class experimental_async_interface {
     public:
      virtual ~experimental_async_interface() {}
      virtual void put(::grpc::ClientContext* context, const ::kvstore::PutRequest* request, ::kvstore::PutReply* response, std::function<void(::grpc::Status)>) = 0;
      virtual void put(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::kvstore::PutReply* response, std::function<void(::grpc::Status)>) = 0;
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      virtual void put(::grpc::ClientContext* context, const ::kvstore::PutRequest* request, ::kvstore::PutReply* response, ::grpc::ClientUnaryReactor* reactor) = 0;
      #else
      virtual void put(::grpc::ClientContext* context, const ::kvstore::PutRequest* request, ::kvstore::PutReply* response, ::grpc::experimental::ClientUnaryReactor* reactor) = 0;
      #endif
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      virtual void put(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::kvstore::PutReply* response, ::grpc::ClientUnaryReactor* reactor) = 0;
      #else
      virtual void put(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::kvstore::PutReply* response, ::grpc::experimental::ClientUnaryReactor* reactor) = 0;
      #endif
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      virtual void get(::grpc::ClientContext* context, ::grpc::ClientBidiReactor< ::kvstore::GetRequest,::kvstore::GetReply>* reactor) = 0;
      #else
      virtual void get(::grpc::ClientContext* context, ::grpc::experimental::ClientBidiReactor< ::kvstore::GetRequest,::kvstore::GetReply>* reactor) = 0;
      #endif
      virtual void remove(::grpc::ClientContext* context, const ::kvstore::RemoveRequest* request, ::kvstore::RemoveReply* response, std::function<void(::grpc::Status)>) = 0;
      virtual void remove(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::kvstore::RemoveReply* response, std::function<void(::grpc::Status)>) = 0;
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      virtual void remove(::grpc::ClientContext* context, const ::kvstore::RemoveRequest* request, ::kvstore::RemoveReply* response, ::grpc::ClientUnaryReactor* reactor) = 0;
      #else
      virtual void remove(::grpc::ClientContext* context, const ::kvstore::RemoveRequest* request, ::kvstore::RemoveReply* response, ::grpc::experimental::ClientUnaryReactor* reactor) = 0;
      #endif
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      virtual void remove(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::kvstore::RemoveReply* response, ::grpc::ClientUnaryReactor* reactor) = 0;
      #else
      virtual void remove(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::kvstore::RemoveReply* response, ::grpc::experimental::ClientUnaryReactor* reactor) = 0;
      #endif
    };
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    typedef class experimental_async_interface async_interface;
    #endif
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    async_interface* async() { return experimental_async(); }
    #endif
    virtual class experimental_async_interface* experimental_async() { return nullptr; }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::kvstore::PutReply>* AsyncputRaw(::grpc::ClientContext* context, const ::kvstore::PutRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::kvstore::PutReply>* PrepareAsyncputRaw(::grpc::ClientContext* context, const ::kvstore::PutRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientReaderWriterInterface< ::kvstore::GetRequest, ::kvstore::GetReply>* getRaw(::grpc::ClientContext* context) = 0;
    virtual ::grpc::ClientAsyncReaderWriterInterface< ::kvstore::GetRequest, ::kvstore::GetReply>* AsyncgetRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) = 0;
    virtual ::grpc::ClientAsyncReaderWriterInterface< ::kvstore::GetRequest, ::kvstore::GetReply>* PrepareAsyncgetRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::kvstore::RemoveReply>* AsyncremoveRaw(::grpc::ClientContext* context, const ::kvstore::RemoveRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::kvstore::RemoveReply>* PrepareAsyncremoveRaw(::grpc::ClientContext* context, const ::kvstore::RemoveRequest& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status put(::grpc::ClientContext* context, const ::kvstore::PutRequest& request, ::kvstore::PutReply* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::kvstore::PutReply>> Asyncput(::grpc::ClientContext* context, const ::kvstore::PutRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::kvstore::PutReply>>(AsyncputRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::kvstore::PutReply>> PrepareAsyncput(::grpc::ClientContext* context, const ::kvstore::PutRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::kvstore::PutReply>>(PrepareAsyncputRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientReaderWriter< ::kvstore::GetRequest, ::kvstore::GetReply>> get(::grpc::ClientContext* context) {
      return std::unique_ptr< ::grpc::ClientReaderWriter< ::kvstore::GetRequest, ::kvstore::GetReply>>(getRaw(context));
    }
    std::unique_ptr<  ::grpc::ClientAsyncReaderWriter< ::kvstore::GetRequest, ::kvstore::GetReply>> Asyncget(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderWriter< ::kvstore::GetRequest, ::kvstore::GetReply>>(AsyncgetRaw(context, cq, tag));
    }
    std::unique_ptr<  ::grpc::ClientAsyncReaderWriter< ::kvstore::GetRequest, ::kvstore::GetReply>> PrepareAsyncget(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderWriter< ::kvstore::GetRequest, ::kvstore::GetReply>>(PrepareAsyncgetRaw(context, cq));
    }
    ::grpc::Status remove(::grpc::ClientContext* context, const ::kvstore::RemoveRequest& request, ::kvstore::RemoveReply* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::kvstore::RemoveReply>> Asyncremove(::grpc::ClientContext* context, const ::kvstore::RemoveRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::kvstore::RemoveReply>>(AsyncremoveRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::kvstore::RemoveReply>> PrepareAsyncremove(::grpc::ClientContext* context, const ::kvstore::RemoveRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::kvstore::RemoveReply>>(PrepareAsyncremoveRaw(context, request, cq));
    }
    class experimental_async final :
      public StubInterface::experimental_async_interface {
     public:
      void put(::grpc::ClientContext* context, const ::kvstore::PutRequest* request, ::kvstore::PutReply* response, std::function<void(::grpc::Status)>) override;
      void put(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::kvstore::PutReply* response, std::function<void(::grpc::Status)>) override;
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      void put(::grpc::ClientContext* context, const ::kvstore::PutRequest* request, ::kvstore::PutReply* response, ::grpc::ClientUnaryReactor* reactor) override;
      #else
      void put(::grpc::ClientContext* context, const ::kvstore::PutRequest* request, ::kvstore::PutReply* response, ::grpc::experimental::ClientUnaryReactor* reactor) override;
      #endif
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      void put(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::kvstore::PutReply* response, ::grpc::ClientUnaryReactor* reactor) override;
      #else
      void put(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::kvstore::PutReply* response, ::grpc::experimental::ClientUnaryReactor* reactor) override;
      #endif
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      void get(::grpc::ClientContext* context, ::grpc::ClientBidiReactor< ::kvstore::GetRequest,::kvstore::GetReply>* reactor) override;
      #else
      void get(::grpc::ClientContext* context, ::grpc::experimental::ClientBidiReactor< ::kvstore::GetRequest,::kvstore::GetReply>* reactor) override;
      #endif
      void remove(::grpc::ClientContext* context, const ::kvstore::RemoveRequest* request, ::kvstore::RemoveReply* response, std::function<void(::grpc::Status)>) override;
      void remove(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::kvstore::RemoveReply* response, std::function<void(::grpc::Status)>) override;
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      void remove(::grpc::ClientContext* context, const ::kvstore::RemoveRequest* request, ::kvstore::RemoveReply* response, ::grpc::ClientUnaryReactor* reactor) override;
      #else
      void remove(::grpc::ClientContext* context, const ::kvstore::RemoveRequest* request, ::kvstore::RemoveReply* response, ::grpc::experimental::ClientUnaryReactor* reactor) override;
      #endif
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      void remove(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::kvstore::RemoveReply* response, ::grpc::ClientUnaryReactor* reactor) override;
      #else
      void remove(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::kvstore::RemoveReply* response, ::grpc::experimental::ClientUnaryReactor* reactor) override;
      #endif
     private:
      friend class Stub;
      explicit experimental_async(Stub* stub): stub_(stub) { }
      Stub* stub() { return stub_; }
      Stub* stub_;
    };
    class experimental_async_interface* experimental_async() override { return &async_stub_; }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    class experimental_async async_stub_{this};
    ::grpc::ClientAsyncResponseReader< ::kvstore::PutReply>* AsyncputRaw(::grpc::ClientContext* context, const ::kvstore::PutRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::kvstore::PutReply>* PrepareAsyncputRaw(::grpc::ClientContext* context, const ::kvstore::PutRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientReaderWriter< ::kvstore::GetRequest, ::kvstore::GetReply>* getRaw(::grpc::ClientContext* context) override;
    ::grpc::ClientAsyncReaderWriter< ::kvstore::GetRequest, ::kvstore::GetReply>* AsyncgetRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) override;
    ::grpc::ClientAsyncReaderWriter< ::kvstore::GetRequest, ::kvstore::GetReply>* PrepareAsyncgetRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::kvstore::RemoveReply>* AsyncremoveRaw(::grpc::ClientContext* context, const ::kvstore::RemoveRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::kvstore::RemoveReply>* PrepareAsyncremoveRaw(::grpc::ClientContext* context, const ::kvstore::RemoveRequest& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_put_;
    const ::grpc::internal::RpcMethod rpcmethod_get_;
    const ::grpc::internal::RpcMethod rpcmethod_remove_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status put(::grpc::ServerContext* context, const ::kvstore::PutRequest* request, ::kvstore::PutReply* response);
    virtual ::grpc::Status get(::grpc::ServerContext* context, ::grpc::ServerReaderWriter< ::kvstore::GetReply, ::kvstore::GetRequest>* stream);
    virtual ::grpc::Status remove(::grpc::ServerContext* context, const ::kvstore::RemoveRequest* request, ::kvstore::RemoveReply* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_put : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_put() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_put() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status put(::grpc::ServerContext* /*context*/, const ::kvstore::PutRequest* /*request*/, ::kvstore::PutReply* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void Requestput(::grpc::ServerContext* context, ::kvstore::PutRequest* request, ::grpc::ServerAsyncResponseWriter< ::kvstore::PutReply>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_get : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_get() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_get() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status get(::grpc::ServerContext* /*context*/, ::grpc::ServerReaderWriter< ::kvstore::GetReply, ::kvstore::GetRequest>* /*stream*/)  override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void Requestget(::grpc::ServerContext* context, ::grpc::ServerAsyncReaderWriter< ::kvstore::GetReply, ::kvstore::GetRequest>* stream, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncBidiStreaming(1, context, stream, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_remove : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_remove() {
      ::grpc::Service::MarkMethodAsync(2);
    }
    ~WithAsyncMethod_remove() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status remove(::grpc::ServerContext* /*context*/, const ::kvstore::RemoveRequest* /*request*/, ::kvstore::RemoveReply* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void Requestremove(::grpc::ServerContext* context, ::kvstore::RemoveRequest* request, ::grpc::ServerAsyncResponseWriter< ::kvstore::RemoveReply>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(2, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_put<WithAsyncMethod_get<WithAsyncMethod_remove<Service > > > AsyncService;
  template <class BaseClass>
  class ExperimentalWithCallbackMethod_put : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithCallbackMethod_put() {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::Service::
    #else
      ::grpc::Service::experimental().
    #endif
        MarkMethodCallback(0,
          new ::grpc_impl::internal::CallbackUnaryHandler< ::kvstore::PutRequest, ::kvstore::PutReply>(
            [this](
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
                   ::grpc::CallbackServerContext*
    #else
                   ::grpc::experimental::CallbackServerContext*
    #endif
                     context, const ::kvstore::PutRequest* request, ::kvstore::PutReply* response) { return this->put(context, request, response); }));}
    void SetMessageAllocatorFor_put(
        ::grpc::experimental::MessageAllocator< ::kvstore::PutRequest, ::kvstore::PutReply>* allocator) {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(0);
    #else
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::experimental().GetHandler(0);
    #endif
      static_cast<::grpc_impl::internal::CallbackUnaryHandler< ::kvstore::PutRequest, ::kvstore::PutReply>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~ExperimentalWithCallbackMethod_put() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status put(::grpc::ServerContext* /*context*/, const ::kvstore::PutRequest* /*request*/, ::kvstore::PutReply* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    virtual ::grpc::ServerUnaryReactor* put(
      ::grpc::CallbackServerContext* /*context*/, const ::kvstore::PutRequest* /*request*/, ::kvstore::PutReply* /*response*/)
    #else
    virtual ::grpc::experimental::ServerUnaryReactor* put(
      ::grpc::experimental::CallbackServerContext* /*context*/, const ::kvstore::PutRequest* /*request*/, ::kvstore::PutReply* /*response*/)
    #endif
      { return nullptr; }
  };
  template <class BaseClass>
  class ExperimentalWithCallbackMethod_get : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithCallbackMethod_get() {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::Service::
    #else
      ::grpc::Service::experimental().
    #endif
        MarkMethodCallback(1,
          new ::grpc_impl::internal::CallbackBidiHandler< ::kvstore::GetRequest, ::kvstore::GetReply>(
            [this](
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
                   ::grpc::CallbackServerContext*
    #else
                   ::grpc::experimental::CallbackServerContext*
    #endif
                     context) { return this->get(context); }));
    }
    ~ExperimentalWithCallbackMethod_get() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status get(::grpc::ServerContext* /*context*/, ::grpc::ServerReaderWriter< ::kvstore::GetReply, ::kvstore::GetRequest>* /*stream*/)  override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    virtual ::grpc::ServerBidiReactor< ::kvstore::GetRequest, ::kvstore::GetReply>* get(
      ::grpc::CallbackServerContext* /*context*/)
    #else
    virtual ::grpc::experimental::ServerBidiReactor< ::kvstore::GetRequest, ::kvstore::GetReply>* get(
      ::grpc::experimental::CallbackServerContext* /*context*/)
    #endif
      { return nullptr; }
  };
  template <class BaseClass>
  class ExperimentalWithCallbackMethod_remove : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithCallbackMethod_remove() {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::Service::
    #else
      ::grpc::Service::experimental().
    #endif
        MarkMethodCallback(2,
          new ::grpc_impl::internal::CallbackUnaryHandler< ::kvstore::RemoveRequest, ::kvstore::RemoveReply>(
            [this](
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
                   ::grpc::CallbackServerContext*
    #else
                   ::grpc::experimental::CallbackServerContext*
    #endif
                     context, const ::kvstore::RemoveRequest* request, ::kvstore::RemoveReply* response) { return this->remove(context, request, response); }));}
    void SetMessageAllocatorFor_remove(
        ::grpc::experimental::MessageAllocator< ::kvstore::RemoveRequest, ::kvstore::RemoveReply>* allocator) {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(2);
    #else
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::experimental().GetHandler(2);
    #endif
      static_cast<::grpc_impl::internal::CallbackUnaryHandler< ::kvstore::RemoveRequest, ::kvstore::RemoveReply>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~ExperimentalWithCallbackMethod_remove() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status remove(::grpc::ServerContext* /*context*/, const ::kvstore::RemoveRequest* /*request*/, ::kvstore::RemoveReply* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    virtual ::grpc::ServerUnaryReactor* remove(
      ::grpc::CallbackServerContext* /*context*/, const ::kvstore::RemoveRequest* /*request*/, ::kvstore::RemoveReply* /*response*/)
    #else
    virtual ::grpc::experimental::ServerUnaryReactor* remove(
      ::grpc::experimental::CallbackServerContext* /*context*/, const ::kvstore::RemoveRequest* /*request*/, ::kvstore::RemoveReply* /*response*/)
    #endif
      { return nullptr; }
  };
  #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
  typedef ExperimentalWithCallbackMethod_put<ExperimentalWithCallbackMethod_get<ExperimentalWithCallbackMethod_remove<Service > > > CallbackService;
  #endif

  typedef ExperimentalWithCallbackMethod_put<ExperimentalWithCallbackMethod_get<ExperimentalWithCallbackMethod_remove<Service > > > ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_put : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_put() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_put() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status put(::grpc::ServerContext* /*context*/, const ::kvstore::PutRequest* /*request*/, ::kvstore::PutReply* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_get : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_get() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_get() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status get(::grpc::ServerContext* /*context*/, ::grpc::ServerReaderWriter< ::kvstore::GetReply, ::kvstore::GetRequest>* /*stream*/)  override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_remove : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_remove() {
      ::grpc::Service::MarkMethodGeneric(2);
    }
    ~WithGenericMethod_remove() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status remove(::grpc::ServerContext* /*context*/, const ::kvstore::RemoveRequest* /*request*/, ::kvstore::RemoveReply* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_put : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_put() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_put() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status put(::grpc::ServerContext* /*context*/, const ::kvstore::PutRequest* /*request*/, ::kvstore::PutReply* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void Requestput(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawMethod_get : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_get() {
      ::grpc::Service::MarkMethodRaw(1);
    }
    ~WithRawMethod_get() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status get(::grpc::ServerContext* /*context*/, ::grpc::ServerReaderWriter< ::kvstore::GetReply, ::kvstore::GetRequest>* /*stream*/)  override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void Requestget(::grpc::ServerContext* context, ::grpc::ServerAsyncReaderWriter< ::grpc::ByteBuffer, ::grpc::ByteBuffer>* stream, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncBidiStreaming(1, context, stream, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawMethod_remove : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_remove() {
      ::grpc::Service::MarkMethodRaw(2);
    }
    ~WithRawMethod_remove() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status remove(::grpc::ServerContext* /*context*/, const ::kvstore::RemoveRequest* /*request*/, ::kvstore::RemoveReply* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void Requestremove(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(2, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class ExperimentalWithRawCallbackMethod_put : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithRawCallbackMethod_put() {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::Service::
    #else
      ::grpc::Service::experimental().
    #endif
        MarkMethodRawCallback(0,
          new ::grpc_impl::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
                   ::grpc::CallbackServerContext*
    #else
                   ::grpc::experimental::CallbackServerContext*
    #endif
                     context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->put(context, request, response); }));
    }
    ~ExperimentalWithRawCallbackMethod_put() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status put(::grpc::ServerContext* /*context*/, const ::kvstore::PutRequest* /*request*/, ::kvstore::PutReply* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    virtual ::grpc::ServerUnaryReactor* put(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)
    #else
    virtual ::grpc::experimental::ServerUnaryReactor* put(
      ::grpc::experimental::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)
    #endif
      { return nullptr; }
  };
  template <class BaseClass>
  class ExperimentalWithRawCallbackMethod_get : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithRawCallbackMethod_get() {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::Service::
    #else
      ::grpc::Service::experimental().
    #endif
        MarkMethodRawCallback(1,
          new ::grpc_impl::internal::CallbackBidiHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
                   ::grpc::CallbackServerContext*
    #else
                   ::grpc::experimental::CallbackServerContext*
    #endif
                     context) { return this->get(context); }));
    }
    ~ExperimentalWithRawCallbackMethod_get() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status get(::grpc::ServerContext* /*context*/, ::grpc::ServerReaderWriter< ::kvstore::GetReply, ::kvstore::GetRequest>* /*stream*/)  override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    virtual ::grpc::ServerBidiReactor< ::grpc::ByteBuffer, ::grpc::ByteBuffer>* get(
      ::grpc::CallbackServerContext* /*context*/)
    #else
    virtual ::grpc::experimental::ServerBidiReactor< ::grpc::ByteBuffer, ::grpc::ByteBuffer>* get(
      ::grpc::experimental::CallbackServerContext* /*context*/)
    #endif
      { return nullptr; }
  };
  template <class BaseClass>
  class ExperimentalWithRawCallbackMethod_remove : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithRawCallbackMethod_remove() {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::Service::
    #else
      ::grpc::Service::experimental().
    #endif
        MarkMethodRawCallback(2,
          new ::grpc_impl::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
                   ::grpc::CallbackServerContext*
    #else
                   ::grpc::experimental::CallbackServerContext*
    #endif
                     context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->remove(context, request, response); }));
    }
    ~ExperimentalWithRawCallbackMethod_remove() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status remove(::grpc::ServerContext* /*context*/, const ::kvstore::RemoveRequest* /*request*/, ::kvstore::RemoveReply* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    virtual ::grpc::ServerUnaryReactor* remove(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)
    #else
    virtual ::grpc::experimental::ServerUnaryReactor* remove(
      ::grpc::experimental::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)
    #endif
      { return nullptr; }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_put : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_put() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler< ::kvstore::PutRequest, ::kvstore::PutReply>(std::bind(&WithStreamedUnaryMethod_put<BaseClass>::Streamedput, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_put() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status put(::grpc::ServerContext* /*context*/, const ::kvstore::PutRequest* /*request*/, ::kvstore::PutReply* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status Streamedput(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::kvstore::PutRequest,::kvstore::PutReply>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_remove : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_remove() {
      ::grpc::Service::MarkMethodStreamed(2,
        new ::grpc::internal::StreamedUnaryHandler< ::kvstore::RemoveRequest, ::kvstore::RemoveReply>(std::bind(&WithStreamedUnaryMethod_remove<BaseClass>::Streamedremove, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_remove() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status remove(::grpc::ServerContext* /*context*/, const ::kvstore::RemoveRequest* /*request*/, ::kvstore::RemoveReply* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status Streamedremove(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::kvstore::RemoveRequest,::kvstore::RemoveReply>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_put<WithStreamedUnaryMethod_remove<Service > > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_put<WithStreamedUnaryMethod_remove<Service > > StreamedService;
};

}  // namespace kvstore


#endif  // GRPC_kvstore_2eproto__INCLUDED
