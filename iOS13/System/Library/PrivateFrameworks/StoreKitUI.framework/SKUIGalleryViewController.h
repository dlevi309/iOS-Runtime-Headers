/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/SKUIArtworkRequestDelegate.h>
#import <UIKit/UIPageViewControllerDataSource.h>
#import <UIKit/UIPageViewControllerDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>

@protocol OS_dispatch_source, SKUIEmbeddedMediaViewDelegate;
@class SKUIResourceLoader, NSMapTable, NSObject, SKUIGalleryPageComponent, UIPageControl, UIPageViewController, UITapGestureRecognizer, SKUIMediaComponent, NSString;

@interface SKUIGalleryViewController : UIViewController <SKUIArtworkRequestDelegate, UIPageViewControllerDataSource, UIPageViewControllerDelegate, UIScrollViewDelegate> {

	SKUIResourceLoader* _artworkLoader;
	NSMapTable* _componentArtworkRequests;
	NSObject*<OS_dispatch_source> _cycleTimer;
	id<SKUIEmbeddedMediaViewDelegate> _embeddedMediaDelegate;
	SKUIGalleryPageComponent* _galleryComponent;
	UIPageControl* _pageIndicator;
	UIPageViewController* _pageViewController;
	UITapGestureRecognizer* _tapGestureRecognizer;

}

@property (nonatomic,readonly) SKUIGalleryPageComponent * galleryComponent;                               //@synthesize galleryComponent=_galleryComponent - In the implementation block
@property (assign,nonatomic,__weak) id<SKUIEmbeddedMediaViewDelegate> embeddedMediaDelegate;              //@synthesize embeddedMediaDelegate=_embeddedMediaDelegate - In the implementation block
@property (nonatomic,readonly) SKUIMediaComponent * selectedMediaComponent; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)setBackgroundColor:(id)arg1 ;
-(void)loadView;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)_selectedViewController;
-(void)pageViewController:(id)arg1 didFinishAnimating:(BOOL)arg2 previousViewControllers:(id)arg3 transitionCompleted:(BOOL)arg4 ;
-(id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2 ;
-(id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2 ;
-(void)_tapAction:(id)arg1 ;
-(void)artworkRequest:(id)arg1 didLoadImage:(id)arg2 ;
-(SKUIMediaComponent *)selectedMediaComponent;
-(id)_newViewWithMediaComponent:(id)arg1 ;
-(void)loadArtworkForChildComponent:(id)arg1 reason:(long long)arg2 constraintWidth:(double)arg3 ;
-(void)performActionForSelectedComponentAnimated:(BOOL)arg1 ;
-(id)initWithGalleryComponent:(id)arg1 artworkLoader:(id)arg2 ;
-(void)setEmbeddedMediaDelegate:(id<SKUIEmbeddedMediaViewDelegate>)arg1 ;
-(id)_newViewControllerWithIndex:(long long)arg1 ;
-(void)_startCycleTimer;
-(void)_stopCycleTimer;
-(void)_finishPaneAnimation;
-(void)_showNextPaneAnimated:(BOOL)arg1 ;
-(id<SKUIEmbeddedMediaViewDelegate>)embeddedMediaDelegate;
-(SKUIGalleryPageComponent *)galleryComponent;
@end

