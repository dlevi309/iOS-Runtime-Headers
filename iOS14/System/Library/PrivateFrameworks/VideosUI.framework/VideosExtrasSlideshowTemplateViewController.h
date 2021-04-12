/*
* Generated on Thursday, January 14, 2021 at 2:24:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)viewDidAppear:(BOOL)arg1 ;
-(BOOL)prefersStatusBarHidden;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setTapGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(void)_handleTap:(id)arg1 ;
-(void)viewDidLoad;
-(UITapGestureRecognizer *)tapGestureRecognizer;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setSlideshowViewController:(VideosExtrasSlideshowViewController *)arg1 ;
-(VideosExtrasSlideshowViewController *)slideshowViewController;
-(void)dealloc;
-(IKSlideshowElement *)templateElement;
-(void)prepareZoomingImageTransitionWithContext:(id)arg1 ;
-(void)performZoomingImageTransitionWithContext:(id)arg1 ;
-(void)finalizeZoomingImageTransitionWithContext:(id)arg1 transitionFinished:(BOOL)arg2 ;
-(BOOL)showsPlaceholder;
-(id)initWithDocument:(id)arg1 options:(id)arg2 context:(id)arg3 ;
-(void)slideshowViewController:(id)arg1 loadImageAtIndex:(unsigned long long)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(unsigned long long)numberOfImagesForSlideshowViewController:(id)arg1 ;
-(void)setImageElements:(NSArray *)arg1 ;
-(void)_toggleVisibilityOfNavigationBar;
-(NSArray *)imageElements;
-(void)_firstImageLoadedHideNavigationBar;
-(BOOL)shouldPerformZoomingImageTransitionFromImageElement:(id)arg1 toImageAtIndex:(unsigned long long)arg2 ;
@end

