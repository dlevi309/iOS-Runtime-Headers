/*
* Generated on Thursday, January 14, 2021 at 2:20:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol UISwipeActionHost <NSObject>
@optional
-(void)swipeActionController:(id)arg1 didCompleteAnimationOfAction:(id)arg2 canceled:(BOOL)arg3 atIndexPath:(id)arg4;
-(BOOL)swipeActionController:(id)arg1 mayBeginSwipeForItemAtIndexPath:(id)arg2;
-(id)swipeActionController:(id)arg1 backgroundColorForItemAtIndexPath:(id)arg2;
-(void)swipeActionController:(id)arg1 didBeginSwipeForItemAtIndexPath:(id)arg2;
-(void)swipeActionController:(id)arg1 didPerformAction:(id)arg2 atIndexPath:(id)arg3;
-(UIEdgeInsets*)swipeActionController:(id)arg1 extraInsetsForItemAtIndexPath:(id)arg2;
-(void)swipeActionController:(id)arg1 willEndSwipeForItemAtIndexPath:(id)arg2;
-(void)swipeActionController:(id)arg1 didCompleteAction:(id)arg2 cancelled:(BOOL)arg3 atIndexPath:(id)arg4;
-(void)swipeActionController:(id)arg1 willPerformAction:(id)arg2 atIndexPath:(id)arg3;
-(void)swipeActionController:(id)arg1 willBeginSwipeForItemAtIndexPath:(id)arg2;
-(void)swipeActionController:(id)arg1 didEndSwipeForItemAtIndexPath:(id)arg2;
-(void)swipeActionController:(id)arg1 animateView:(id)arg2 actionsView:(id)arg3 forDestructiveAction:(id)arg4 atIndexPath:(id)arg5 withSwipeInfo:(SCD_Struct_UI41)arg6 completion:(/*^block*/id)arg7;

@required
-(id)itemContainerViewForSwipeActionController:(id)arg1;
-(id)gestureRecognizerViewForSwipeActionController:(id)arg1;
-(id)swipeActionController:(id)arg1 viewForItemAtIndexPath:(id)arg2;
-(id)swipeActionController:(id)arg1 leadingSwipeConfigurationForItemAtIndexPath:(id)arg2;
-(long long)layoutDirectionForSwipeActionController:(id)arg1;
-(id)swipeActionController:(id)arg1 indexPathForTouchLocation:(CGPoint)arg2;
-(id)swipeActionController:(id)arg1 trailingSwipeConfigurationForItemAtIndexPath:(id)arg2;

@end

