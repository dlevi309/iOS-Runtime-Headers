/*
* Generated on Thursday, January 14, 2021 at 2:20:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIAlertControllerVisualStyle.h>

@interface UIAlertControllerVisualStyleActionSheet : UIAlertControllerVisualStyle
+(void)positionContentsOfAlertController:(id)arg1 alertContentView:(id)arg2 availableSpaceView:(id)arg3 visualStyle:(id)arg4 updatableConstraints:(id)arg5 ;
+(long long)interfaceActionPresentationStyle;
-(double)maximumWidth;
-(BOOL)placementAvoidsKeyboard;
-(double)transitionDurationForPresentation:(BOOL)arg1 ofAlertController:(id)arg2 ;
-(long long)permittedActionLayoutDirection;
-(UIEdgeInsets)contentInsetsForContainerView:(id)arg1 ;
-(double)marginBelowMessageLabelLastBaseline;
-(double)_spacingBetweenDismissButtonAndContent;
-(double)marginAboveMessageLabelFirstBaseline;
-(id)vibrancyEffectForTitleAndMessageLabel;
-(double)marginBelowLastLabelLastBaseline;
-(id)messageLabelFont;
-(double)marginBelowTitleLabelLastBaseline;
-(id)messageLabelColor;
-(BOOL)hideCancelAction:(id)arg1 inAlertController:(id)arg2 ;
-(void)animateAlertControllerView:(id)arg1 ofAlertController:(id)arg2 forPresentation:(BOOL)arg3 inContainerView:(id)arg4 descendantOfContainerView:(id)arg5 duration:(double)arg6 completionBlock:(/*^block*/id)arg7 ;
-(id)titleLabelColor;
-(id)titleLabelFont;
-(double)marginAboveTitleLabelFirstBaseline;
@end

