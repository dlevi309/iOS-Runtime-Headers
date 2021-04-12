/*
* Generated on Monday, March 1, 2021 at 2:32:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
*/


@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject, RPEndpoint, NSString;

@interface RPRemoteXPCConnection : NSObject {

	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	NSXPCConnection* _xpcConnection;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	RPEndpoint* _endpoint;
	/*^block*/id _interruptionHandler;
	/*^block*/id _invalidationHandler;
	NSString* _serviceName;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,retain) RPEndpoint * endpoint;                                   //@synthesize endpoint=_endpoint - In the implementation block
@property (nonatomic,copy) id interruptionHandler;                                    //@synthesize interruptionHandler=_interruptionHandler - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,copy,readonly) NSString * serviceName;                           //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,readonly) NSXPCConnection * xpcConnection; 
-(id)init;
-(void)invalidate;
-(void)_invalidate;
-(void)setInvalidationHandler:(id)arg1 ;
-(void)setInterruptionHandler:(id)arg1 ;
-(RPEndpoint *)endpoint;
-(id)interruptionHandler;
-(id)invalidationHandler;
-(NSString *)serviceName;
-(NSXPCConnection *)xpcConnection;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setEndpoint:(RPEndpoint *)arg1 ;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(void)_invalidated;
-(void)_activateWithCompletion:(/*^block*/id)arg1 ;
@end

