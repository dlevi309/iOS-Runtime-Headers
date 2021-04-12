/*
* Generated on Thursday, January 14, 2021 at 2:20:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIInterfaceActionConcreteVisualStyleImplInternal.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface UIInterfaceActionConcreteVisualStyle : NSObject <UIInterfaceActionConcreteVisualStyleImplInternal, NSCopying>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGSize)minimumActionContentSize;
-(void)configureForDismissingGroupView:(id)arg1 alongsideTransitionCoordinator:(id)arg2 ;
-(void)configureAttributesForActionRepresentationView:(id)arg1 actionViewState:(id)arg2 ;
-(id)actionGroupPropertiesAffectingActionsScrollViewStyling;
-(id)newActionSeparatorViewForGroupViewState:(id)arg1 ;
-(BOOL)selectionFeedbackEnabled;
-(void)configureAttributesForActionScrollView:(id)arg1 groupViewState:(id)arg2 ;
-(id)actionPropertiesAffectingImageViewStyling;
-(BOOL)selectByPressGestureRequired;
-(id)newActionBackgroundViewForViewState:(id)arg1 ;
-(id)actionImageViewTintColorForImageProperty:(id)arg1 actionViewState:(id)arg2 ;
-(id)actionPropertiesAffectingActionRepresentationViewStyling;
-(id)newRepresentationViewForAction:(id)arg1 ;
-(id)actionTitleLabelColorForViewState:(id)arg1 ;
-(double)verticalImageContentSpacing;
-(id)actionClassificationLabelFontForViewState:(id)arg1 ;
-(UIEdgeInsets)actionSequenceEdgeInsets;
-(double)actionTitleLabelMinimumScaleFactor;
-(id)actionTitleLabelFontForViewState:(id)arg1 ;
-(id)actionViewStateForAttachingToActionRepresentationView:(id)arg1 ;
-(CGSize)maximumActionGroupContentSize;
-(void)configureAttributesForTitleLabel:(id)arg1 classificationLabel:(id)arg2 actionViewState:(id)arg3 ;
-(id)actionPropertiesAffectingLabelStyling;
-(id)newGroupBackgroundViewWithGroupViewState:(id)arg1 ;
-(void)configureForPresentingGroupView:(id)arg1 alongsideTransitionCoordinator:(id)arg2 ;
-(double)contentCornerRadius;
-(id)newSectionSeparatorViewForGroupViewState:(id)arg1 ;
-(double)horizontalImageContentSpacing;
-(double)actionSectionSpacing;
-(BOOL)selectByIndirectPointerTouchRequired;
-(UIEdgeInsets)contentMargin;
-(id)actionClassificationLabelColorForViewState:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)defaultScreen;
-(void)configureAttributesForImageView:(id)arg1 imageProperty:(id)arg2 actionViewState:(id)arg3 ;
@end

