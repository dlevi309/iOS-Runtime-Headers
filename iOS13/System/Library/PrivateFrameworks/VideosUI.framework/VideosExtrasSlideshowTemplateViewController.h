/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosExtrasTemplateViewController.h>
#import <VideosUI/VideosExtrasSlideshowViewControllerDataSource.h>
#import <VideosUI/VideosExtrasZoomingImageTransitionParticipant.h>

@class VideosExtrasSlideshowViewController, NSArray, UITapGestureRecognizer, IKSlideshowElement, NSString;

@interface VideosExtrasSlideshowTemplateViewController : VideosExtrasTemplateViewController <VideosExtrasSlideshowViewControllerDataSource, VideosExtrasZoomingImageTransitionParticipant> {

	BOOL _overlayHidden;
	BOOL _preventNavbarAutohide;
	VideosExtrasSlideshowViewController* _slideshowViewController;
	NSArray* _imageElements;
	UITapGestureRecognizer* _tapGestureRecognizer;

}

@property (nonatomic,retain) NSArray * imageElements;                                                    //@synthesize imageElements=_imageElements - In the implementation block
@property (nonatomic,retain) VideosExtrasSlideshowViewController * slideshowViewController;              //@synthesize slideshowViewController=_slideshowViewController - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * tapGestureRecognizer;                              //@synthesize tapGestureRecognizer=_tapGestureRecognizer - In the implementation block
@property (nonatomic,readonly) IKSlideshowElement * templateElement; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)prefersStatusBarHidden;
-(UITapGestureRecognizer *)tapGestureRecognizer;
-(void)setTapGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(void)_handleTap:(id)arg1 ;
-(IKSlideshowElement *)templateElement;
-(NSArray *)imageElements;
-(BOOL)showsPlaceholder;
-(void)setSlideshowViewController:(VideosExtrasSlideshowViewController *)arg1 ;
-(VideosExtrasSlideshowViewController *)slideshowViewController;
-(void)prepareZoomingImageTransitionWithContext:(id)arg1 ;
-(void)performZoomingImageTransitionWithContext:(id)arg1 ;
-(void)finalizeZoomingImageTransitionWithContext:(id)arg1 transitionFinished:(BOOL)arg2 ;
-(id)initWithDocument:(id)arg1 options:(id)arg2 context:(id)arg3 ;
-(void)slideshowViewController:(id)arg1 loadImageAtIndex:(unsigned long long)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(unsigned long long)numberOfImagesForSlideshowViewController:(id)arg1 ;
-(void)setImageElements:(NSArray *)arg1 ;
-(void)_toggleVisibilityOfNavigationBar;
-(void)_firstImageLoadedHideNavigationBar;
-(BOOL)shouldPerformZoomingImageTransitionFromImageElement:(id)arg1 toImageAtIndex:(unsigned long long)arg2 ;
@end

