/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/


@protocol PKPassGroupStackViewDelegate <NSObject>
@optional
-(void)groupStackViewWantsPaymentPresentation:(id)arg1 fromButton:(BOOL)arg2;
-(BOOL)groupStackViewShouldAllowReordering:(id)arg1;
-(void)groupStackView:(id)arg1 wantsTopContentSeparatorWithVisibility:(double)arg2 animated:(BOOL)arg3;
-(void)groupStackView:(id)arg1 wantsBottomContentSeparatorWithVisibility:(double)arg2 animated:(BOOL)arg3;
-(void)groupStackView:(id)arg1 groupDidMoveFromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;
-(void)groupStackView:(id)arg1 transitioningToState:(long long)arg2 animated:(BOOL)arg3;
-(void)groupStackView:(id)arg1 didTransitionToState:(long long)arg2 animated:(BOOL)arg3;
-(void)groupStackViewDidChangeCoachingState:(id)arg1;

@required
-(unsigned long long)suppressedContent;
-(void)reloadGroupsForGroupStackView:(id)arg1;
-(void)groupStackView:(id)arg1 deleteConfirmedForPass:(id)arg2;
-(void)groupStackViewDidBeginReordering:(id)arg1;
-(void)groupStackViewDidEndReordering:(id)arg1;

@end

