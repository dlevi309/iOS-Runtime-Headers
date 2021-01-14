/*
* Generated on Thursday, January 14, 2021 at 2:25:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBRootFolderPageStateObserver
@required
-(void)rootFolderPageStateProvider:(id)arg1 didContinueTransitionToState:(long long)arg2 progress:(double)arg3;
-(void)rootFolderPageStateProvider:(id)arg1 willBeginTransitionToState:(long long)arg2 animated:(BOOL)arg3 interactive:(BOOL)arg4;
-(void)rootFolderPageStateProvider:(id)arg1 willEndTransitionToState:(long long)arg2 successfully:(BOOL)arg3;
-(void)rootFolderPageStateProvider:(id)arg1 didEndTransitionFromState:(long long)arg2 toState:(long long)arg3 successfully:(BOOL)arg4;

@end

