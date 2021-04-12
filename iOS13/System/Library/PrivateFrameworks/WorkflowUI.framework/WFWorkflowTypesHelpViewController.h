/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UIScrollViewDelegate.h>

@class NSString, UIScrollView, UIPageControl;

@interface WFWorkflowTypesHelpViewController : UIViewController <UIScrollViewDelegate> {

	NSString* _initialWorkflowType;
	UIScrollView* _scrollView;
	UIPageControl* _pageControl;

}

@property (nonatomic,copy) NSString * initialWorkflowType;                    //@synthesize initialWorkflowType=_initialWorkflowType - In the implementation block
@property (assign,nonatomic,__weak) UIScrollView * scrollView;                //@synthesize scrollView=_scrollView - In the implementation block
@property (assign,nonatomic,__weak) UIPageControl * pageControl;              //@synthesize pageControl=_pageControl - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)done;
-(void)loadView;
-(void)traitCollectionDidChange:(id)arg1 ;
-(CGSize)preferredContentSize;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(UIScrollView *)scrollView;
-(UIPageControl *)pageControl;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(void)setPageControl:(UIPageControl *)arg1 ;
-(id)initWithInitialWorkflowType:(id)arg1 ;
-(void)presentTodayWidgetOnboarding;
-(NSString *)initialWorkflowType;
-(void)setInitialWorkflowType:(NSString *)arg1 ;
@end

