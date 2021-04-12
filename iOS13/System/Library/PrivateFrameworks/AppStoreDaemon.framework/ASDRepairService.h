/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
*/


@class ASDServiceBroker;

@interface ASDRepairService : NSObject {

	ASDServiceBroker* _serviceBroker;

}
+(id)defaultService;
+(id)interface;
-(id)initWithServiceBroker:(id)arg1 ;
-(void)_remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)repairAppWithOptions:(id)arg1 replyHandler:(/*^block*/id)arg2 ;
-(id)_asynchronousRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
@end

