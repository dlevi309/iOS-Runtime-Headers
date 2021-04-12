/*
* Generated on Thursday, January 14, 2021 at 2:20:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIInterfaceActionConcreteVisualStyle.h>
#import <UIKit/UIInterfaceActionConcreteVisualStyleImpl.h>

@class NSString;

@interface UIInterfaceActionConcreteVisualStyle_AppleTV : UIInterfaceActionConcreteVisualStyle <UIInterfaceActionConcreteVisualStyleImpl>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGSize)minimumActionContentSize;
-(void)configureForDismissingGroupView:(id)arg1 alongsideTransitionCoordinator:(id)arg2 ;
-(void)configureAttributesForActionRepresentationView:(id)arg1 actionViewState:(id)arg2 ;
-(void)configureAttributesForActionScrollView:(id)arg1 groupViewState:(id)arg2 ;
-(BOOL)selectByPressGestureRequired;
-(id)newActionBackgroundViewForViewState:(id)arg1 ;
-(id)actionImageViewTintColorForImageProperty:(id)arg1 actionViewState:(id)arg2 ;
-(id)actionPropertiesAffectingActionRepresentationViewStyling;
-(id)actionTitleLabelColorForViewState:(id)arg1 ;
-(double)verticalImageContentSpacing;
-(UIEdgeInsets)actionSequenceEdgeInsets;
-(id)actionTitleLabelFontForViewState:(id)arg1 ;
-(id)actionViewStateForAttachingToActionRepresentationView:(id)arg1 ;
-(void)configureAttributesForTitleLabel:(id)arg1 classificationLabel:(id)arg2 actionViewState:(id)arg3 ;
-(id)actionPropertiesAffectingLabelStyling;
-(id)newGroupBackgroundViewWithGroupViewState:(id)arg1 ;
-(void)configureForPresentingGroupView:(id)arg1 alongsideTransitionCoordinator:(id)arg2 ;
-(double)contentCornerRadius;
-(double)horizontalImageContentSpacing;
-(double)actionSectionSpacing;
-(UIEdgeInsets)contentMargin;
-(id)defaultScreen;
@end

