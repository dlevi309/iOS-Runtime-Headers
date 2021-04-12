/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBFloatingDockSuggestionsModelDelegate <NSObject>
@required
-(void)dockSuggestionsModel:(id)arg1 didInsertItem:(id)arg2 atIndex:(unsigned long long)arg3 involvesContinuity:(BOOL)arg4;
-(void)dockSuggestionsModel:(id)arg1 didRemoveItem:(id)arg2 atIndex:(unsigned long long)arg3 involvesContinuity:(BOOL)arg4;
-(void)dockSuggestionsModel:(id)arg1 didReplaceItem:(id)arg2 atIndex:(unsigned long long)arg3 withItem:(id)arg4 atIndex:(unsigned long long)arg5 involvesContinuity:(BOOL)arg6;
-(void)dockSuggestionsModel:(id)arg1 didReloadItems:(id)arg2 withItems:(id)arg3;

@end

