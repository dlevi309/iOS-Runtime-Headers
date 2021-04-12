/*
* Generated on Thursday, January 14, 2021 at 2:20:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIView.h>
#import <UIKit/UIInterfaceActionDisplayPropertyObserver.h>

@class NSLayoutConstraint, UILabel, NSArray, UIInterfaceAction, NSString;

@interface _UIInterfaceActionLabelsPropertyView : UIView <UIInterfaceActionDisplayPropertyObserver> {

	NSLayoutConstraint* _leadingLabelLeadingConstraint;
	NSLayoutConstraint* _leadingLabelVerticalPositionConstraint;
	NSLayoutConstraint* _trailingLabelTrailingConstraint;
	NSLayoutConstraint* _trailingLabelVerticalPositionConstraint;
	NSLayoutConstraint* _interLabelSpacingConstraint;
	UILabel* _classificationLabel;
	UILabel* _titleLabel;
	NSArray* _labelConstraints;
	UIInterfaceAction* _action;

}

@property (nonatomic,readonly) UIInterfaceAction * action;              //@synthesize action=_action - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(id)viewForLastBaselineLayout;
-(void)tintColorDidChange;
-(id)viewForFirstBaselineLayout;
-(void)_reloadContentClassificationLabelDisplayProperties;
-(void)_contentSizeCategoryDidChangeNotification:(id)arg1 ;
-(id)_visualStyle;
-(id)_newLabel;
-(id)initWithAction:(id)arg1 ;
-(void)_reloadContentForTitleDisplayProperties;
-(UIInterfaceAction *)action;
-(void)interfaceAction:(id)arg1 reloadDisplayedContentActionProperties:(id)arg2 ;
-(id)_classificationLabelIfVisible;
-(id)_interfaceActionViewState;
-(void)_applyVisualStyleToLabels;
-(void)interfaceAction:(id)arg1 reloadDisplayedContentVisualStyle:(id)arg2 ;
-(void)_applyVisualStyle;
-(void)dealloc;
@end

