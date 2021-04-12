/*
* Generated on Thursday, January 14, 2021 at 2:24:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <UIKitCore/UIViewController.h>

@protocol VideosExtrasVideoPlaybackViewController;
@class UIViewController, NSLayoutConstraint, VideosExtrasContext, UIView;

@interface VideosExtrasFeatureContainerViewController : UIViewController {

	UIViewController*<VideosExtrasVideoPlaybackViewController> _videoPlaybackViewController;
	NSLayoutConstraint* _overlayViewAdjustmentConstraint;
	VideosExtrasContext* _context;
	UIView* _menuBarView;
	double _collectionViewHeight;

}

@property (assign,nonatomic) double collectionViewHeight;                                                                         //@synthesize collectionViewHeight=_collectionViewHeight - In the implementation block
@property (nonatomic,__weak,readonly) VideosExtrasContext * context;                                                              //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) UIViewController*<VideosExtrasVideoPlaybackViewController> videoPlaybackViewController;              //@synthesize videoPlaybackViewController=_videoPlaybackViewController - In the implementation block
@property (assign,nonatomic,__weak) UIView * menuBarView;                                                                         //@synthesize menuBarView=_menuBarView - In the implementation block
-(id)initWithContext:(id)arg1 ;
-(VideosExtrasContext *)context;
-(void)viewDidLoad;
-(id)childViewControllerForHomeIndicatorAutoHidden;
-(void)dealloc;
-(void)setCollectionViewHeight:(double)arg1 ;
-(double)collectionViewHeight;
-(void)_menuBarHeightChange:(id)arg1 ;
-(void)setVideoPlaybackViewController:(UIViewController*<VideosExtrasVideoPlaybackViewController>)arg1 ;
-(void)setMenuBarView:(UIView *)arg1 ;
-(UIViewController*<VideosExtrasVideoPlaybackViewController>)videoPlaybackViewController;
-(UIView *)menuBarView;
@end

