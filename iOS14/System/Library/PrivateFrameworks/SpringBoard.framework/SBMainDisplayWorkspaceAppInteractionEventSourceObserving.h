/*
* Generated on Thursday, January 14, 2021 at 2:25:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBMainDisplayWorkspaceAppInteractionEventSourceObserving <NSObject>
@optional
-(void)eventSource:(id)arg1 userDeletedWebBookmark:(id)arg2;
-(void)eventSource:(id)arg1 userTouchedApplication:(id)arg2;
-(void)eventSource:(id)arg1 didBeginTransitionToMode:(long long)arg2 withLayoutState:(id)arg3 activatingElement:(id)arg4 triggeredBy:(long long)arg5;
-(void)eventSource:(id)arg1 applicationsBecameHidden:(id)arg2;
-(void)eventSource:(id)arg1 userRemovedSuggestions:(id)arg2;
-(void)eventSource:(id)arg1 userDeletedApplications:(id)arg2;
-(void)eventSource:(id)arg1 userQuitApplicationInSwitcher:(id)arg2;
-(void)eventSource:(id)arg1 applicationsBecameVisible:(id)arg2;
-(void)eventSource:(id)arg1 keyboardFocusChangedToApplication:(id)arg2;
-(void)eventSource:(id)arg1 didFinishTransitionToMode:(long long)arg2 withLayoutState:(id)arg3 activatingElement:(id)arg4 triggeredBy:(long long)arg5;

@end

