/*
* Generated on Thursday, January 14, 2021 at 2:25:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol FBApplicationUpdateScenesTransactionObserver <BSTransactionObserver>
@optional
-(void)transaction:(id)arg1 willCommitSceneUpdate:(id)arg2;
-(void)transaction:(id)arg1 didCommitSceneUpdate:(id)arg2;
-(void)transaction:(id)arg1 didCreateScene:(id)arg2;
-(void)transaction:(id)arg1 willUpdateScene:(id)arg2;
-(void)transaction:(id)arg1 willLaunchProcess:(id)arg2;
-(void)transaction:(id)arg1 didLaunchProcess:(id)arg2;

@end

