/*
* Generated on Monday, March 1, 2021 at 2:30:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)actionTitleLabelColorForViewState:(id)arg1 ;
-(id)defaultScreen;
-(double)contentCornerRadius;
-(UIEdgeInsets)contentMargin;
-(double)horizontalImageContentSpacing;
-(double)verticalImageContentSpacing;
-(double)minimumImageGapWidth;
-(id)actionTitleLabelFontForViewState:(id)arg1 ;
-(id)newActionBackgroundViewForViewState:(id)arg1 ;
-(id)newGroupBackgroundViewWithGroupViewState:(id)arg1 ;
-(double)actionSectionSpacing;
-(UIEdgeInsets)actionSequenceEdgeInsets;
-(CGSize)minimumActionContentSize;
-(CGSize)maximumActionGroupContentSize;
-(BOOL)selectByPressGestureRequired;
-(BOOL)selectionFeedbackEnabled;
-(BOOL)selectByIndirectPointerTouchRequired;
-(id)actionViewStateForAttachingToActionRepresentationView:(id)arg1 ;
-(id)newActionSeparatorViewForGroupViewState:(id)arg1 ;
-(id)newSectionSeparatorViewForGroupViewState:(id)arg1 ;
-(id)actionClassificationLabelFontForViewState:(id)arg1 ;
-(id)actionClassificationLabelColorForViewState:(id)arg1 ;
-(id)actionImageViewTintColorForImageProperty:(id)arg1 actionViewState:(id)arg2 ;
-(void)configureAttributesForTitleLabel:(id)arg1 classificationLabel:(id)arg2 actionViewState:(id)arg3 ;
-(id)actionPropertiesAffectingLabelStyling;
-(void)configureAttributesForImageView:(id)arg1 imageProperty:(id)arg2 actionViewState:(id)arg3 ;
-(id)actionPropertiesAffectingImageViewStyling;
-(void)configureAttributesForActionRepresentationView:(id)arg1 actionViewState:(id)arg2 ;
-(id)actionPropertiesAffectingActionRepresentationViewStyling;
-(void)configureAttributesForActionScrollView:(id)arg1 groupViewState:(id)arg2 ;
-(id)actionGroupPropertiesAffectingActionsScrollViewStyling;
-(void)configureForPresentingGroupView:(id)arg1 alongsideTransitionCoordinator:(id)arg2 ;
-(void)configureForDismissingGroupView:(id)arg1 alongsideTransitionCoordinator:(id)arg2 ;
-(double)actionTitleLabelMinimumScaleFactor;
-(id)newRepresentationViewForAction:(id)arg1 ;
@end

