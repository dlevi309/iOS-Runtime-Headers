/*
* Generated on Monday, March 1, 2021 at 2:35:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UIPageViewControllerDataSource.h>
#import <UIKit/UIPageViewControllerDelegate.h>
#import <VideosUI/VideosExtrasZoomingImageInteractiveTransitionSource.h>
#import <VideosUI/VideosExtrasZoomingImageTransitionParticipant.h>

@protocol VideosExtrasImageBrowserViewControllerDataSource, VideosExtrasImageBrowserViewControllerDelegate, VideosExtrasZoomingImageInteractiveTransitionSource;
@class UIPageViewController, NSString;

@interface VideosExtrasImageBrowserViewController : UIViewController <UIPageViewControllerDataSource, UIPageViewControllerDelegate, VideosExtrasZoomingImageInteractiveTransitionSource, VideosExtrasZoomingImageTransitionParticipant> {

	BOOL _allowsPinchingImageForInteractiveZoomingImageTransition;
	id<VideosExtrasImageBrowserViewControllerDataSource> _dataSource;
	id<VideosExtrasImageBrowserViewControllerDelegate> _delegate;
	id<VideosExtrasZoomingImageInteractiveTransitionSource> _zoomingImageInteractiveTransitionSource;
	unsigned long long _visibleImageIndex;
	UIPageViewController* _pageViewController;

}

@property (nonatomic,retain) UIPageViewController * pageViewController;                                                                           //@synthesize pageViewController=_pageViewController - In the implementation block
@property (assign,nonatomic,__weak) id<VideosExtrasImageBrowserViewControllerDataSource> dataSource;                                              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<VideosExtrasImageBrowserViewControllerDelegate> delegate;                                                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<VideosExtrasZoomingImageInteractiveTransitionSource> zoomingImageInteractiveTransitionSource;              //@synthesize zoomingImageInteractiveTransitionSource=_zoomingImageInteractiveTransitionSource - In the implementation block
@property (assign,nonatomic) BOOL allowsPinchingImageForInteractiveZoomingImageTransition;                                                        //@synthesize allowsPinchingImageForInteractiveZoomingImageTransition=_allowsPinchingImageForInteractiveZoomingImageTransition - In the implementation block
@property (assign,nonatomic) unsigned long long visibleImageIndex;                                                                                //@synthesize visibleImageIndex=_visibleImageIndex - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<VideosExtrasImageBrowserViewControllerDelegate>)delegate;
-(void)setDelegate:(id<VideosExtrasImageBrowserViewControllerDelegate>)arg1 ;
-(id<VideosExtrasImageBrowserViewControllerDataSource>)dataSource;
-(void)setDataSource:(id<VideosExtrasImageBrowserViewControllerDataSource>)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(void)pageViewController:(id)arg1 willTransitionToViewControllers:(id)arg2 ;
-(void)pageViewController:(id)arg1 didFinishAnimating:(BOOL)arg2 previousViewControllers:(id)arg3 transitionCompleted:(BOOL)arg4 ;
-(id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2 ;
-(id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2 ;
-(void)_updateTitle;
-(unsigned long long)_numberOfImages;
-(UIPageViewController *)pageViewController;
-(void)setPageViewController:(UIPageViewController *)arg1 ;
-(BOOL)allowsPinchingImageForInteractiveZoomingImageTransition;
-(void)prepareZoomingImageTransitionWithContext:(id)arg1 ;
-(void)performZoomingImageTransitionWithContext:(id)arg1 ;
-(void)finalizeZoomingImageTransitionWithContext:(id)arg1 transitionFinished:(BOOL)arg2 ;
-(void)handlePinchGestureForZoomingImageInteractiveTransitionWithContext:(id)arg1 ;
-(void)setAllowsPinchingImageForInteractiveZoomingImageTransition:(BOOL)arg1 ;
-(void)_removePageViewController;
-(void)_addPageViewForController:(id)arg1 toView:(id)arg2 ;
-(id)_imageViewControllerAtIndex:(unsigned long long)arg1 ;
-(void)setVisibleImageIndex:(unsigned long long)arg1 ;
-(id)_visibleImageViewController;
-(id<VideosExtrasZoomingImageInteractiveTransitionSource>)zoomingImageInteractiveTransitionSource;
-(void)_updatePageViewController;
-(unsigned long long)visibleImageIndex;
-(void)setZoomingImageInteractiveTransitionSource:(id<VideosExtrasZoomingImageInteractiveTransitionSource>)arg1 ;
@end

