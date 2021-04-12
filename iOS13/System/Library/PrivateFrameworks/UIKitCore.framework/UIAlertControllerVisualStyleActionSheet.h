/*
* Generated on Monday, March 1, 2021 at 2:30:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIAlertControllerVisualStyle.h>

@interface UIAlertControllerVisualStyleActionSheet : UIAlertControllerVisualStyle
+(void)positionContentsOfAlertController:(id)arg1 alertContentView:(id)arg2 availableSpaceView:(id)arg3 visualStyle:(id)arg4 updatableConstraints:(id)arg5 ;
+(long long)interfaceActionPresentationStyle;
-(UIEdgeInsets)contentInsetsForContainerView:(id)arg1 ;
-(double)transitionDurationForPresentation:(BOOL)arg1 ofAlertController:(id)arg2 ;
-(void)animateAlertControllerView:(id)arg1 ofAlertController:(id)arg2 forPresentation:(BOOL)arg3 inContainerView:(id)arg4 descendantOfContainerView:(id)arg5 duration:(double)arg6 completionBlock:(/*^block*/id)arg7 ;
-(BOOL)placementAvoidsKeyboard;
-(id)titleLabelFont;
-(double)marginBelowMessageLabelLastBaseline;
-(double)marginAboveTitleLabelFirstBaseline;
-(double)marginBelowTitleLabelLastBaseline;
-(id)vibrancyEffectForTitleAndMessageLabel;
-(id)titleLabelColor;
-(double)_spacingBetweenDismissButtonAndContent;
-(id)messageLabelFont;
-(id)messageLabelColor;
-(double)marginAboveMessageLabelFirstBaseline;
-(double)marginBelowLastLabelLastBaseline;
-(double)maximumWidth;
-(long long)permittedActionLayoutDirection;
-(BOOL)hideCancelAction:(id)arg1 inAlertController:(id)arg2 ;
@end

