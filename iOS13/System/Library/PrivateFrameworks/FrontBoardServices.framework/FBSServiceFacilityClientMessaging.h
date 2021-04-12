/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
*/


@protocol FBSServiceFacilityClientMessaging <NSObject>
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> calloutQueue; 
@required
-(void)sendMessage:(id)arg1 withType:(long long)arg2 replyHandler:(/*^block*/id)arg3 waitForReply:(BOOL)arg4 timeout:(double)arg5;
-(NSObject*<OS_dispatch_queue>)calloutQueue;
-(void)sendMessage:(id)arg1 withType:(long long)arg2;

@end

