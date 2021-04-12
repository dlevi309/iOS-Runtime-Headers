/*
* Generated on Monday, March 1, 2021 at 2:30:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIAlertControllerVisualStyleAlert.h>

@interface UIAlertControllerVisualStyleAlertTV : UIAlertControllerVisualStyleAlert
-(UIEdgeInsets)textFieldContentInset;
-(double)textFieldHorizontalMargin;
-(UIEdgeInsets)contentInsetsForContainerView:(id)arg1 ;
-(id)dimmingViewForAlertController:(id)arg1 ;
-(double)transitionDurationForPresentation:(BOOL)arg1 ofAlertController:(id)arg2 ;
-(void)animateAlertControllerView:(id)arg1 ofAlertController:(id)arg2 forPresentation:(BOOL)arg3 inContainerView:(id)arg4 descendantOfContainerView:(id)arg5 duration:(double)arg6 completionBlock:(/*^block*/id)arg7 ;
-(id)_keyCommandInputForCancelAction;
-(id)textFieldContainingViewWithTextField:(id)arg1 position:(long long)arg2 ;
-(BOOL)placementAvoidsKeyboard;
-(id)preferredActionForActions:(id)arg1 suggestedPreferredAction:(id)arg2 ;
-(id)titleLabelFont;
-(double)marginBelowMessageLabelLastBaseline;
-(double)marginAboveTitleLabelFirstBaseline;
-(double)marginBelowTitleLabelLastBaseline;
-(id)titleLabelColor;
-(id)messageLabelFont;
-(id)messageLabelColor;
-(double)marginAboveMessageLabelFirstBaseline;
-(double)marginBelowLastLabelLastBaseline;
-(double)maximumWidth;
-(long long)permittedActionLayoutDirection;
-(BOOL)hideCancelAction:(id)arg1 inAlertController:(id)arg2 ;
-(long long)maximumNumberOfLinesInTitleLabel;
-(long long)maximumNumberOfLinesInMessageLabel;
-(double)_maximumContentWidth;
-(double)_minimumButtonWidth;
-(long long)_effectStyle;
-(id)_detailMessageFont;
-(double)_marginAboveDetailMessageFirstBaseline;
-(double)maximumWidthForTitleAndMessageContentView;
-(double)actionWidthForMinimumActionWidth:(double)arg1 ;
@end

