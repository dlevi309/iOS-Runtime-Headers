/*
* Generated on Thursday, January 14, 2021 at 2:20:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class UIAlertControllerDescriptor, UIInterfaceActionVisualStyle, UITraitCollection;

@interface UIAlertControllerVisualStyle : NSObject {

	UIAlertControllerDescriptor* _descriptor;
	long long _forcedInterfaceIdiom;
	UIInterfaceActionVisualStyle* _interfaceActionVisualStyle;
	UITraitCollection* _traitCollection;

}

@property (assign,nonatomic) long long forcedInterfaceIdiom;                                           //@synthesize forcedInterfaceIdiom=_forcedInterfaceIdiom - In the implementation block
@property (nonatomic,readonly) UIInterfaceActionVisualStyle * interfaceActionVisualStyle;              //@synthesize interfaceActionVisualStyle=_interfaceActionVisualStyle - In the implementation block
@property (nonatomic,retain) UITraitCollection * traitCollection;                                      //@synthesize traitCollection=_traitCollection - In the implementation block
@property (nonatomic,retain) UIAlertControllerDescriptor * descriptor;                                 //@synthesize descriptor=_descriptor - In the implementation block
+(void)positionContentsOfAlertController:(id)arg1 alertContentView:(id)arg2 availableSpaceView:(id)arg3 visualStyle:(id)arg4 updatableConstraints:(id)arg5 ;
+(long long)interfaceActionPresentationStyle;
-(void)animateRevealOfAlertControllerView:(id)arg1 alertController:(id)arg2 inContainerView:(id)arg3 duration:(double)arg4 completionBlock:(/*^block*/id)arg5 ;
-(double)_marginAroundActionGroup;
-(double)maximumWidth;
-(CGSize)minimumActionContentSize;
-(UITraitCollection *)traitCollection;
-(double)minimumWidth;
-(double)_scaledMarginAboveTitleLabelFirstBaselineInAlertControllerView:(id)arg1 titleText:(id)arg2 ;
-(Class)interfaceActionVisualStyleClassForManagingConcreteVisualStyle;
-(BOOL)placementAvoidsKeyboard;
-(double)_scaledSafeBaselineHeightForLabelFont:(id)arg1 inAlertControllerView:(id)arg2 ;
-(void)setTraitCollection:(UITraitCollection *)arg1 ;
-(id)interactionProgressForTransitionOfType:(long long)arg1 forAlertController:(id)arg2 ;
-(BOOL)transitionOfType:(long long)arg1 shouldBeInteractiveForAlertController:(id)arg2 ;
-(double)transitionDurationForPresentation:(BOOL)arg1 ofAlertController:(id)arg2 ;
-(id)init;
-(double)_scaledTitleLabelSafeBaselineHeightInAlertControllerView:(id)arg1 ;
-(double)_scaledMessageSafeBaselineHeightInAlertControllerView:(id)arg1 ;
-(long long)permittedActionLayoutDirection;
-(UIEdgeInsets)textFieldContentInset;
-(double)_scaledMarginAboveDetailMessageFirstBaseline;
-(id)preferredActionForActions:(id)arg1 suggestedPreferredAction:(id)arg2 ;
-(UIEdgeInsets)contentInsetsForContainerView:(id)arg1 ;
-(double)_scaledMarginBelowTitleLabelLastBaseline;
-(double)_scaledMarginBelowMessageLabelLastBaseline;
-(double)_scaledMarginAboveMessageLabelFirstBaseline;
-(double)marginBelowMessageLabelLastBaseline;
-(double)_scaledMarginBelowLastLabelLastBaseline;
-(id)dimmingViewForAlertController:(id)arg1 ;
-(double)_spacingBetweenDismissButtonAndContent;
-(double)marginAboveMessageLabelFirstBaseline;
-(UIAlertControllerDescriptor *)descriptor;
-(id)_detailMessageFont;
-(BOOL)shouldPreserveRespondersAcrossWindows;
-(id)textFieldContainingViewWithTextField:(id)arg1 position:(long long)arg2 ;
-(double)actionWidthForMinimumActionWidth:(double)arg1 ;
-(id)vibrancyEffectForTitleAndMessageLabel;
-(double)maximumHeightForDisplayOnScreen:(id)arg1 ;
-(long long)maximumNumberOfLinesInMessageLabel;
-(double)marginBelowLastLabelLastBaseline;
-(void)_reloadInterfaceActionVisualStyle;
-(id)messageLabelFont;
-(double)marginBelowTitleLabelLastBaseline;
-(BOOL)shouldOccludeDuringPresentation;
-(void)setDescriptor:(UIAlertControllerDescriptor *)arg1 ;
-(UIEdgeInsets)actionSequenceEdgeInsets;
-(id)messageLabelColor;
-(BOOL)hideCancelAction:(id)arg1 inAlertController:(id)arg2 ;
-(void)animateAlertControllerView:(id)arg1 ofAlertController:(id)arg2 forPresentation:(BOOL)arg3 inContainerView:(id)arg4 descendantOfContainerView:(id)arg5 duration:(double)arg6 completionBlock:(/*^block*/id)arg7 ;
-(void)configureAttributesForTitleLabel:(id)arg1 classificationLabel:(id)arg2 actionViewState:(id)arg3 ;
-(double)_marginAboveDetailMessageFirstBaseline;
-(id)titleLabelColor;
-(double)maximumWidthForTitleAndMessageContentView;
-(UIInterfaceActionVisualStyle *)interfaceActionVisualStyle;
-(void)setForcedInterfaceIdiom:(long long)arg1 ;
-(BOOL)_shouldReverseActions;
-(CGSize)collectionViewOutsetSize;
-(id)tintColorForAlertController:(id)arg1 ;
-(long long)maximumNumberOfLinesInTitleLabel;
-(double)contentVerticalMargin;
-(id)titleLabelFont;
-(UIEdgeInsets)actionImageMarginForAction;
-(id)regularActionFont;
-(long long)forcedInterfaceIdiom;
-(id)_keyCommandInputForCancelAction;
-(id)defaultActionFont;
-(double)textFieldHorizontalMargin;
-(id)preferredActionFont;
-(BOOL)isEqual:(id)arg1 ;
-(double)contentHorizontalMargin;
-(void)configureAttributesForImageView:(id)arg1 imageProperty:(id)arg2 actionViewState:(id)arg3 ;
-(double)marginAboveTitleLabelFirstBaseline;
@end

