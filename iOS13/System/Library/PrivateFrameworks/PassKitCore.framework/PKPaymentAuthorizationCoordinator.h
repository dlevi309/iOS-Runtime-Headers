/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSXPCConnection, NSTimer, PKPaymentRequest, NSString, PKPaymentAuthorizationCoordinatorExportedObject, PKInAppPaymentService, NSXPCListener;

@interface PKPaymentAuthorizationCoordinator : NSObject <NSXPCListenerDelegate> {

	BOOL _didPresent;
	NSObject*<OS_dispatch_queue> _queue;
	NSXPCConnection* _connection;
	NSTimer* _timer;
	PKPaymentRequest* _paymentRequest;
	NSString* _hostIdentifier;
	PKPaymentAuthorizationCoordinatorExportedObject* _exportedObject;
	/*^block*/id _presentationCompletionBlock;
	PKInAppPaymentService* _inAppPaymentService;
	NSXPCListener* _listener;
	double _connectionTimeout;

}

@property (assign,nonatomic) BOOL didPresent;                                                                                                       //@synthesize didPresent=_didPresent - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                                                                    //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSXPCConnection * connection;                                                                                          //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSTimer * timer;                                                                                                       //@synthesize timer=_timer - In the implementation block
@property (nonatomic,retain) PKPaymentRequest * paymentRequest;                                                                                     //@synthesize paymentRequest=_paymentRequest - In the implementation block
@property (nonatomic,retain) NSString * hostIdentifier;                                                                                             //@synthesize hostIdentifier=_hostIdentifier - In the implementation block
@property (nonatomic,retain) PKPaymentAuthorizationCoordinatorExportedObject * exportedObject;                                                      //@synthesize exportedObject=_exportedObject - In the implementation block
@property (nonatomic,copy) id presentationCompletionBlock;                                                                                          //@synthesize presentationCompletionBlock=_presentationCompletionBlock - In the implementation block
@property (nonatomic,retain) PKInAppPaymentService * inAppPaymentService;                                                                           //@synthesize inAppPaymentService=_inAppPaymentService - In the implementation block
@property (nonatomic,retain) NSXPCListener * listener;                                                                                              //@synthesize listener=_listener - In the implementation block
@property (assign,nonatomic) double connectionTimeout;                                                                                              //@synthesize connectionTimeout=_connectionTimeout - In the implementation block
@property (assign,nonatomic,__weak) id<PKPaymentAuthorizationCoordinatorDelegate> delegate; 
@property (assign,setter=_setPrivateDelegate:,nonatomic,__weak) id<PKPaymentAuthorizationCoordinatorPrivateDelegate> _privateDelegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)canMakePayments;
+(BOOL)canMakePaymentsUsingNetworks:(id)arg1 capabilities:(unsigned long long)arg2 webDomain:(id)arg3 ;
+(BOOL)canMakePaymentsUsingNetworks:(id)arg1 webDomain:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id<PKPaymentAuthorizationCoordinatorDelegate>)delegate;
-(void)setDelegate:(id<PKPaymentAuthorizationCoordinatorDelegate>)arg1 ;
-(NSXPCListener *)listener;
-(void)setExportedObject:(PKPaymentAuthorizationCoordinatorExportedObject *)arg1 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(PKPaymentAuthorizationCoordinatorExportedObject *)exportedObject;
-(NSXPCConnection *)connection;
-(NSTimer *)timer;
-(void)setTimer:(NSTimer *)arg1 ;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)setListener:(NSXPCListener *)arg1 ;
-(NSString *)hostIdentifier;
-(id<PKPaymentAuthorizationCoordinatorPrivateDelegate>)_privateDelegate;
-(void)_setPrivateDelegate:(id)arg1 ;
-(id)initWithPaymentRequest:(id)arg1 ;
-(void)dismissWithCompletion:(/*^block*/id)arg1 ;
-(void)presentWithCompletion:(/*^block*/id)arg1 ;
-(void)setHostIdentifier:(NSString *)arg1 ;
-(id)_remoteObjectProxy;
-(BOOL)didPresent;
-(void)setDidPresent:(BOOL)arg1 ;
-(id)_remoteObjectProxyWithFailureHandler:(/*^block*/id)arg1 ;
-(PKPaymentRequest *)paymentRequest;
-(void)setPaymentRequest:(PKPaymentRequest *)arg1 ;
-(void)presentWithOrientation:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_invokeCallbackWithSuccess:(BOOL)arg1 ;
-(double)connectionTimeout;
-(void)_viewServiceTimerFired:(id)arg1 ;
-(PKInAppPaymentService *)inAppPaymentService;
-(id)presentationCompletionBlock;
-(void)setPresentationCompletionBlock:(id)arg1 ;
-(void)setInAppPaymentService:(PKInAppPaymentService *)arg1 ;
-(void)setConnectionTimeout:(double)arg1 ;
@end

