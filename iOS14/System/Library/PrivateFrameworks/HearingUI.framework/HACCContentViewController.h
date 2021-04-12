/*
* Generated on Thursday, January 14, 2021 at 2:27:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HearingUI.framework/HearingUI
*/

#import <HearingUI/HearingUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/CCUIContentModuleContentViewController.h>

@protocol CCUIContentModuleContentViewController, HACCContentModule;
@class UIViewPropertyAnimator, CCUIContentModuleDetailTransitioningDelegate, UIViewController, UITapGestureRecognizer, UIView, NSString;

@interface HACCContentViewController : UIViewController <UIGestureRecognizerDelegate, CCUIContentModuleContentViewController> {

	unsigned long long _controlType;
	CCUIContentModuleDetailTransitioningDelegate* _detailTransitioningDelegate;
	UIViewController*<CCUIContentModuleContentViewController> _expandedViewController;
	UITapGestureRecognizer* _tapRecognizer;
	UIView*<HACCContentModule> _contentView;
	CGRect _collapsedFrame;

}

@property (nonatomic,retain) UITapGestureRecognizer * tapRecognizer;                                                        //@synthesize tapRecognizer=_tapRecognizer - In the implementation block
@property (nonatomic,retain) UIView*<HACCContentModule> contentView;                                                        //@synthesize contentView=_contentView - In the implementation block
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
@property (nonatomic,readonly) BOOL shouldPerformClickInteraction; 
-(void)updateViewConstraints;
-(void)updateWithValue:(id)arg1 ;
-(double)preferredExpandedContentHeight;
-(BOOL)_canShowWhileLocked;
-(void)setContentView:(UIView*<HACCContentModule>)arg1 ;
-(void)updateValue;
-(UIView*<HACCContentModule>)contentView;
-(UITapGestureRecognizer *)tapRecognizer;
-(void)_handleTapGestureRecognizer:(id)arg1 ;
-(id)value;
-(void)setTapRecognizer:(UITapGestureRecognizer *)arg1 ;
-(CGSize)collapsedContentSize;
-(void)setCollapsedFrame:(CGRect)arg1 ;
-(id)initWithContentModule:(unsigned long long)arg1 andDelegate:(id)arg2 ;
-(CGSize)collapsedContentUnitSize;
-(long long)layoutRequirement;
-(unsigned long long)controlTypeForModule:(unsigned long long)arg1 ;
-(void)_updatePresentedMenuViewControllerIfNecessary;
-(BOOL)supportsExpanding;
-(void)_updateMenuItemsForViewController:(id)arg1 ;
-(/*^block*/id)personalAudioToggleBlockForType:(unsigned long long)arg1 ;
-(id)menuModuleViewControllerForProgramModule:(unsigned long long)arg1 ;
-(id)viewControllerForExpandedView;
-(CGRect)collapsedFrame;
-(UIViewController*<CCUIContentModuleContentViewController>)expandedViewController;
-(void)setExpandedViewController:(UIViewController*<CCUIContentModuleContentViewController>)arg1 ;
@end

