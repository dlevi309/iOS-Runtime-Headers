/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
*/


@protocol OS_dispatch_queue;
@class NSObject, BSServiceConnection;

@interface FBSOpenApplicationService : NSObject {

	NSObject*<OS_dispatch_queue> _callbackQueue;
	BSServiceConnection* _connection;

}
+(id)new;
+(id)serviceWithDefaultShellEndpoint;
+(id)serviceWithEndpoint:(id)arg1 ;
+(BOOL)currentProcessServicesDefaultShellEndpoint;
+(id)serviceName;
-(id)init;
-(id)_remoteTarget;
-(BOOL)canOpenApplication:(id)arg1 reason:(long long*)arg2 ;
-(void)_openApplication:(id)arg1 withOptions:(id)arg2 clientHandle:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)_initWithEndpoint:(id)arg1 ;
-(void)openApplication:(id)arg1 withOptions:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)openApplication:(id)arg1 withOptions:(id)arg2 clientHandle:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)dealloc;
@end

