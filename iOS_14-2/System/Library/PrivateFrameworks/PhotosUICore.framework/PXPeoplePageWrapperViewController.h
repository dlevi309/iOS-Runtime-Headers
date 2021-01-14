/*
* Generated on Thursday, January 14, 2021 at 2:22:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UIPageViewControllerDelegate.h>
#import <UIKit/UIPageViewControllerDataSource.h>

@class UIPageViewController, NSArray, NSString;

@interface PXPeoplePageWrapperViewController : UIViewController <UIPageViewControllerDelegate, UIPageViewControllerDataSource> {

	UIPageViewController* _pageViewController;
	NSArray* _viewControllers;
	long long _presentationPageIndex;

}

@property (nonatomic,readonly) UIPageViewController * pageViewController;              //@synthesize pageViewController=_pageViewController - In the implementation block
@property (retain) NSArray * viewControllers;                                          //@synthesize viewControllers=_viewControllers - In the implementation block
@property (assign,nonatomic) long long presentationPageIndex;                          //@synthesize presentationPageIndex=_presentationPageIndex - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)pageViewController:(id)arg1 didFinishAnimating:(BOOL)arg2 previousViewControllers:(id)arg3 transitionCompleted:(BOOL)arg4 ;
-(void)setViewControllers:(NSArray *)arg1 ;
-(NSArray *)viewControllers;
-(id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2 ;
-(id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2 ;
-(void)commonInit;
-(long long)presentationCountForPageViewController:(id)arg1 ;
-(long long)presentationIndexForPageViewController:(id)arg1 ;
-(void)didReceiveMemoryWarning;
-(void)viewDidLoad;
-(UIPageViewController *)pageViewController;
-(id)initWithViewControllers:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)_showViewControllerAtIndex:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(void)updateForEnteringSelectMode:(id)arg1 ;
-(void)updateForExitingSelectMode:(id)arg1 ;
-(void)updateForSelectionChanged:(id)arg1 ;
-(void)_updateNavigationItemForCurrentViewController:(id)arg1 ;
-(long long)presentationPageIndex;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)setPresentationPageIndex:(long long)arg1 ;
@end

