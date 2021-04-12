/*
* Generated on Thursday, January 14, 2021 at 2:20:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIInterfaceActionConcreteVisualStyleImplInternal.h>
#import <UIKit/UIInterfaceActionConcreteVisualStyleImpl.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol UIInterfaceActionConcreteVisualStyleImpl;
@class UIInterfaceActionGroupViewState, UIInterfaceActionConcreteVisualStyle, UIInterfaceActionOverrideVisualStyle, NSString;

@interface UIInterfaceActionVisualStyle : NSObject <UIInterfaceActionConcreteVisualStyleImplInternal, UIInterfaceActionConcreteVisualStyleImpl, NSCopying> {

	UIInterfaceActionGroupViewState* _groupViewState;
	UIInterfaceActionConcreteVisualStyle*<UIInterfaceActionConcreteVisualStyleImpl> _concreteVisualStyle;
	/*^block*/id _fontForViewStateBlock;
	UIInterfaceActionOverrideVisualStyle* _visualStyleOverride;

}

@property (nonatomic,retain) UIInterfaceActionConcreteVisualStyle*<UIInterfaceActionConcreteVisualStyleImpl> concreteVisualStyle;              //@synthesize concreteVisualStyle=_concreteVisualStyle - In the implementation block
@property (nonatomic,copy) id fontForViewStateBlock;                                                                                           //@synthesize fontForViewStateBlock=_fontForViewStateBlock - In the implementation block
@property (nonatomic,retain) UIInterfaceActionOverrideVisualStyle * visualStyleOverride;                                                       //@synthesize visualStyleOverride=_visualStyleOverride - In the implementation block
@property (nonatomic,readonly) UIInterfaceActionGroupViewState * groupViewState;                                                               //@synthesize groupViewState=_groupViewState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)idiomSpecificStyleForTraitCollection:(id)arg1 presentationStyle:(long long)arg2 ;
-(CGSize)minimumActionContentSize;
-(void)setVisualStyleOverride:(UIInterfaceActionOverrideVisualStyle *)arg1 ;
-(id)_styleForVisualProperties;
-(id)init;
-(void)configureForDismissingGroupView:(id)arg1 alongsideTransitionCoordinator:(id)arg2 ;
-(void)configureAttributesForActionRepresentationView:(id)arg1 actionViewState:(id)arg2 ;
-(id)defaultConcreteActionTitleLabelRegularFont;
-(id)actionGroupPropertiesAffectingActionsScrollViewStyling;
-(id)newActionSeparatorViewForGroupViewState:(id)arg1 ;
-(id)_base_actionPropertiesAffectingImageViewStyling;
-(BOOL)selectionFeedbackEnabled;
-(UIInterfaceActionConcreteVisualStyle*<UIInterfaceActionConcreteVisualStyleImpl>)concreteVisualStyle;
-(void)configureAttributesForActionScrollView:(id)arg1 groupViewState:(id)arg2 ;
-(id)actionPropertiesAffectingImageViewStyling;
-(BOOL)selectByPressGestureRequired;
-(id)newActionBackgroundViewForViewState:(id)arg1 ;
-(id)actionImageViewTintColorForImageProperty:(id)arg1 actionViewState:(id)arg2 ;
-(id)actionPropertiesAffectingActionRepresentationViewStyling;
-(NSString *)description;
-(void)setConcreteVisualStyle:(UIInterfaceActionConcreteVisualStyle*<UIInterfaceActionConcreteVisualStyleImpl>)arg1 ;
-(id)defaultConcreteActionTitleLabelPreferredFont;
-(id)initWithConcreteVisualStyle:(id)arg1 ;
-(id)actionTitleLabelColorForViewState:(id)arg1 ;
-(double)verticalImageContentSpacing;
-(id)actionClassificationLabelFontForViewState:(id)arg1 ;
-(UIEdgeInsets)actionSequenceEdgeInsets;
-(double)actionTitleLabelMinimumScaleFactor;
-(id)actionTitleLabelFontForViewState:(id)arg1 ;
-(id)actionViewStateForAttachingToActionRepresentationView:(id)arg1 ;
-(id)_base_actionPropertiesAffectingLabelStyling;
-(CGSize)maximumActionGroupContentSize;
-(void)configureAttributesForTitleLabel:(id)arg1 classificationLabel:(id)arg2 actionViewState:(id)arg3 ;
-(id)actionPropertiesAffectingLabelStyling;
-(id)newGroupBackgroundViewWithGroupViewState:(id)arg1 ;
-(void)configureForPresentingGroupView:(id)arg1 alongsideTransitionCoordinator:(id)arg2 ;
-(double)contentCornerRadius;
-(UIInterfaceActionOverrideVisualStyle *)visualStyleOverride;
-(id)newSectionSeparatorViewForGroupViewState:(id)arg1 ;
-(double)horizontalImageContentSpacing;
-(double)actionSectionSpacing;
-(BOOL)selectByIndirectPointerTouchRequired;
-(UIEdgeInsets)contentMargin;
-(void)_base_configureAttributesForImageView:(id)arg1 imageProperty:(id)arg2 actionViewState:(id)arg3 ;
-(id)actionClassificationLabelColorForViewState:(id)arg1 ;
-(UIInterfaceActionGroupViewState *)groupViewState;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)_base_configureAttributesForTitleLabel:(id)arg1 classificationLabel:(id)arg2 actionViewState:(id)arg3 ;
-(id)defaultScreen;
-(void)setFontForViewStateBlock:(id)arg1 ;
-(id)fontForViewStateBlock;
-(BOOL)isEqual:(id)arg1 ;
-(void)configureAttributesForImageView:(id)arg1 imageProperty:(id)arg2 actionViewState:(id)arg3 ;
-(id)copyWithGroupViewState:(id)arg1 ;
@end

