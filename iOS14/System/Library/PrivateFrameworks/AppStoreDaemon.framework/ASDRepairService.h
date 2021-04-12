/*
* Generated on Thursday, January 14, 2021 at 2:23:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
*/


@class ASDServiceBroker;

@interface ASDRepairService : NSObject {

	ASDServiceBroker* _serviceBroker;

}
+(id)interface;
+(id)defaultService;
-(id)initWithServiceBroker:(id)arg1 ;
-(id)_asynchronousRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(void)_remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)repairAppWithOptions:(id)arg1 replyHandler:(/*^block*/id)arg2 ;
-(void)refreshKeybagWithReplyHandler:(/*^block*/id)arg1 ;
-(void)_callRepairServiceWithOptions:(id)arg1 replyHandler:(/*^block*/id)arg2 ;
@end

