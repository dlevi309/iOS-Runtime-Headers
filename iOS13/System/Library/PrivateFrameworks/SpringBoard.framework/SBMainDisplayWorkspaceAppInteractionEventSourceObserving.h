/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBMainDisplayWorkspaceAppInteractionEventSourceObserving <NSObject>
@optional
-(void)eventSource:(id)arg1 applicationsBecameHidden:(id)arg2;
-(void)eventSource:(id)arg1 userRemovedSuggestions:(id)arg2;
-(void)eventSource:(id)arg1 userDeletedApplications:(id)arg2;
-(void)eventSource:(id)arg1 userQuitApplicationInSwitcher:(id)arg2;
-(void)eventSource:(id)arg1 applicationsBecameVisible:(id)arg2;
-(void)eventSource:(id)arg1 userTouchedApplication:(id)arg2;
-(void)eventSource:(id)arg1 keyboardFocusChangedToApplication:(id)arg2;
-(void)eventSource:(id)arg1 didBeginTransitionToMode:(long long)arg2 withLayoutState:(id)arg3 activatingElement:(id)arg4 triggeredBy:(long long)arg5;
-(void)eventSource:(id)arg1 didFinishTransitionToMode:(long long)arg2 withLayoutState:(id)arg3 activatingElement:(id)arg4 triggeredBy:(long long)arg5;

@end

