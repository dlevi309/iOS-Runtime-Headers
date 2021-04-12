/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HearingUI.framework/HearingUI
*/

#import <HearingUI/HearingUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/CCUIContentModuleContentViewController.h>

@protocol HACCContentModule, CCUIContentModuleContentViewController;
@class UIViewPropertyAnimator, UIView, CCUIContentModuleDetailTransitioningDelegate, UIViewController, UITapGestureRecognizer, NSString;

@interface HACCContentViewController : UIViewController <UIGestureRecognizerDelegate, CCUIContentModuleContentViewController> {

	unsigned long long _controlType;
	UIView*<HACCContentModule> _contentView;
	CCUIContentModuleDetailTransitioningDelegate* _detailTransitioningDelegate;
	UIViewController*<CCUIContentModuleContentViewController> _expandedViewController;
	UITapGestureRecognizer* _tapRecognizer;
	CGRect _collapsedFrame;

}

@property (nonatomic,retain) UITapGestureRecognizer * tapRecognizer;                                                        //@synthesize tapRecognizer=_tapRecognizer - In the implementation block
@property (nonatomic,retain) UIViewController*<CCUIContentModuleContentViewController> expandedViewController;              //@synthesize expandedViewController=_expandedViewController - In the implementation block
@property (assign,nonatomic) CGRect collapsedFrame;                                                                         //@synthesize collapsedFrame=_collapsedFrame - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double preferredExpandedContentHeight; 
@property (nonatomic,readonly) double preferredExpandedContentWidth; 
@property (nonatomic,readonly) double preferredExpandedContinuousCornerRadius; 
@property (nonatomic,readonly) BOOL providesOwnPlatter; 
@property (nonatomic,readonly) UIViewPropertyAnimator * customAnimator; 
@property (nonatomic,readonly) BOOL shouldPerformHoverInteraction; 
-(id)value;
-(BOOL)_canShowWhileLocked;
-(void)updateViewConstraints;
-(UITapGestureRecognizer *)tapRecognizer;
-(void)setTapRecognizer:(UITapGestureRecognizer *)arg1 ;
-(void)_handleTapGestureRecognizer:(id)arg1 ;
-(void)updateValue;
-(double)preferredExpandedContentHeight;
-(CGSize)collapsedContentSize;
-(void)setCollapsedFrame:(CGRect)arg1 ;
-(id)initWithContentModule:(unsigned long long)arg1 andDelegate:(id)arg2 ;
-(CGSize)collapsedContentUnitSize;
-(long long)layoutRequirement;
-(unsigned long long)controlTypeForModule:(unsigned long long)arg1 ;
-(BOOL)supportsExpanding;
-(void)_updateMenuItemsForViewController:(id)arg1 ;
-(void)_updatePresentedMenuViewControllerIfNecessary;
-(id)menuModuleViewControllerForProgramModule:(unsigned long long)arg1 ;
-(id)viewControllerForExpandedView;
-(CGRect)collapsedFrame;
-(UIViewController*<CCUIContentModuleContentViewController>)expandedViewController;
-(void)setExpandedViewController:(UIViewController*<CCUIContentModuleContentViewController>)arg1 ;
@end

