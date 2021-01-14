/*
* Generated on Thursday, January 14, 2021 at 2:26:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
*/


@protocol _GCIPCConnection
@property (getter=isInvalid,nonatomic,readonly) BOOL invalid; 
@required
-(void)suspend;
-(BOOL)isInvalid;
-(void)scheduleSendBarrierBlock:(/*^block*/id)arg1;
-(id)addInterruptionHandler:(/*^block*/id)arg1;
-(void)invalidate;
-(void)resume;
-(id)addInvalidationHandler:(/*^block*/id)arg1;
-(id)remoteProxy;
-(id)remoteProxyWithErrorHandler:(/*^block*/id)arg1;
-(id)synchronousRemoteProxyWithErrorHandler:(/*^block*/id)arg1;

@end

