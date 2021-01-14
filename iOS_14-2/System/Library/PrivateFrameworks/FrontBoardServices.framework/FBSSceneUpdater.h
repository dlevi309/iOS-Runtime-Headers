/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
*/


@protocol FBSSceneUpdater <NSObject>
@required
-(void)scene:(id)arg1 didReceiveActions:(id)arg2;
-(id)hostProcess;
-(id)callOutQueue;
-(id)endpoint;
-(void)scene:(id)arg1 didUpdateClientSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4;
-(void)scene:(id)arg1 sendMessage:(id)arg2 withResponse:(/*^block*/id)arg3;

@end

