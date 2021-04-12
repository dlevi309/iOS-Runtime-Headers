/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
*/


@protocol OS_dispatch_queue;
@class NSObject, BSServiceConnection;

@interface FBSOpenApplicationService : NSObject {

	NSObject*<OS_dispatch_queue> _callbackQueue;
	BSServiceConnection* _connection;

}
+(id)new;
+(id)serviceName;
+(id)serviceWithEndpoint:(id)arg1 ;
+(id)serviceWithDefaultShellEndpoint;
-(id)init;
-(void)dealloc;
-(void)openApplication:(id)arg1 withOptions:(id)arg2 clientHandle:(id)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)canOpenApplication:(id)arg1 reason:(long long*)arg2 ;
-(id)_initWithEndpoint:(id)arg1 ;
-(void)_openApplication:(id)arg1 withOptions:(id)arg2 clientHandle:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)_remoteTarget;
-(void)openApplication:(id)arg1 withOptions:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

