/*
* Generated on Thursday, January 14, 2021 at 2:28:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/WFCompactPlatterSizingDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <libobjc.A.dylib/WFCompactPlatterPresentation.h>

@protocol WFCompactPlatterContentContainer;
@class WFCompactPlatterView, UIViewController, WFCompactPlatterTransitioningDelegate, UIScrollView, NSString;

@interface WFCompactPlatterViewController : UIViewController <WFCompactPlatterSizingDelegate, UIScrollViewDelegate, WFCompactPlatterPresentation> {

	BOOL _platterHeightAnimationsDisabled;
	WFCompactPlatterView* _platterView;
	id<WFCompactPlatterContentContainer> _platterContentContainer;
	UIViewController* _contentViewController;
	WFCompactPlatterTransitioningDelegate* _wf_transitioningDelegate;
	UIScrollView* _scrollView;
	CGSize _minimumPlatterSize;

}

@property (nonatomic,retain) WFCompactPlatterTransitioningDelegate * wf_transitioningDelegate;                 //@synthesize wf_transitioningDelegate=_wf_transitioningDelegate - In the implementation block
@property (assign,nonatomic,__weak) UIScrollView * scrollView;                                                 //@synthesize scrollView=_scrollView - In the implementation block
@property (assign,nonatomic) CGSize minimumPlatterSize;                                                        //@synthesize minimumPlatterSize=_minimumPlatterSize - In the implementation block
@property (nonatomic,__weak,readonly) WFCompactPlatterView * platterView;                                      //@synthesize platterView=_platterView - In the implementation block
@property (nonatomic,retain) UIViewController * contentViewController;                                         //@synthesize contentViewController=_contentViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<WFCompactPlatterContentContainer> platterContentContainer;              //@synthesize platterContentContainer=_platterContentContainer - In the implementation block
@property (assign,nonatomic) BOOL platterHeightAnimationsDisabled;                                             //@synthesize platterHeightAnimationsDisabled=_platterHeightAnimationsDisabled - In the implementation block
-(WFCompactPlatterView *)platterView;
-(void)scrollToTopAnimated:(BOOL)arg1 ;
-(id)init;
-(void)setContentViewController:(UIViewController *)arg1 ;
-(UIViewController *)contentViewController;
-(void)systemLayoutFittingSizeDidChangeForChildContentContainer:(id)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)setTransitioningDelegate:(id)arg1 ;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)loadView;
-(UIScrollView *)scrollView;
-(void)viewDidLayoutSubviews;
-(double)contentHeightForWidth:(double)arg1 withMaximumVisibleHeight:(double)arg2 ;
-(BOOL)platterHeightAnimationsDisabled;
-(void)setPlatterHeightAnimationsDisabled:(BOOL)arg1 ;
-(double)platterHeightForWidth:(double)arg1 withMaximumHeight:(double)arg2 ;
-(id<WFCompactPlatterContentContainer>)platterContentContainer;
-(void)setPlatterContentContainer:(id<WFCompactPlatterContentContainer>)arg1 ;
-(void)invalidateContentSize;
-(void)platterViewDidInvalidateSize:(id)arg1 ;
-(void)updateContentSizeAndPlatterPosition;
-(void)updatePlatterPosition;
-(double)maximumExpectedVisibleContentHeight;
-(void)invalidatePlatterSize;
-(WFCompactPlatterTransitioningDelegate *)wf_transitioningDelegate;
-(void)setWf_transitioningDelegate:(WFCompactPlatterTransitioningDelegate *)arg1 ;
-(CGSize)minimumPlatterSize;
-(void)setMinimumPlatterSize:(CGSize)arg1 ;
@end

