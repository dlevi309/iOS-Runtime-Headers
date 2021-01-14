/*
* Generated on Thursday, January 14, 2021 at 2:24:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSXPCConnection *)xpcConnection;
-(void)_invalidate;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(void)_activateWithCompletion:(/*^block*/id)arg1 ;
-(id)init;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setEndpoint:(RPEndpoint *)arg1 ;
-(RPEndpoint *)endpoint;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setInterruptionHandler:(id)arg1 ;
-(NSString *)serviceName;
-(void)_invalidated;
-(void)invalidate;
-(void)setInvalidationHandler:(id)arg1 ;
-(id)invalidationHandler;
-(id)interruptionHandler;
@end

