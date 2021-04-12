/*
* Generated on Thursday, January 14, 2021 at 2:22:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
*/


@protocol FBSServiceFacilityClientMessaging <NSObject>
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> calloutQueue; 
@required
-(void)sendMessage:(id)arg1 withType:(long long)arg2;
-(void)sendMessage:(id)arg1 withType:(long long)arg2 replyHandler:(/*^block*/id)arg3 waitForReply:(BOOL)arg4 timeout:(double)arg5;
-(NSObject*<OS_dispatch_queue>)calloutQueue;

@end

