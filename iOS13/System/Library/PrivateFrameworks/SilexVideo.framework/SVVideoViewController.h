/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

#import <SilexVideo/SilexVideo-Structs.h>
#import <AVKit/AVPlayerViewController.h>
#import <libobjc.A.dylib/AVPlayerViewControllerDelegatePrivate.h>

@protocol SVVideoViewControllerFullscreenPresentationDelegate, SVVideoViewControllerControlsVisibilityDelegate, SVVideoVisibilityManager;
@class NSMutableArray, UIView, NSString;

@interface SVVideoViewController : AVPlayerViewController <AVPlayerViewControllerDelegatePrivate> {

	id<SVVideoViewControllerFullscreenPresentationDelegate> _fullscreenPresentationDelegate;
	id<SVVideoViewControllerControlsVisibilityDelegate> _controlsVisibilityDelegate;
	id<SVVideoVisibilityManager> _visibilityManager;
	NSMutableArray* _appearanceObservers;
	UIView* _sourceViewForPresentation;
	UIView* _targetViewForDismissal;

}

@property (nonatomic,readonly) id<SVVideoVisibilityManager> visibilityManager;                                                           //@synthesize visibilityManager=_visibilityManager - In the implementation block
@property (nonatomic,readonly) NSMutableArray * appearanceObservers;                                                                     //@synthesize appearanceObservers=_appearanceObservers - In the implementation block
@property (assign,nonatomic,__weak) UIView * sourceViewForPresentation;                                                                  //@synthesize sourceViewForPresentation=_sourceViewForPresentation - In the implementation block
@property (assign,nonatomic,__weak) UIView * targetViewForDismissal;                                                                     //@synthesize targetViewForDismissal=_targetViewForDismissal - In the implementation block
@property (assign,nonatomic,__weak) id<SVVideoViewControllerFullscreenPresentationDelegate> fullscreenPresentationDelegate;              //@synthesize fullscreenPresentationDelegate=_fullscreenPresentationDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<SVVideoViewControllerControlsVisibilityDelegate> controlsVisibilityDelegate;                      //@synthesize controlsVisibilityDelegate=_controlsVisibilityDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)playerViewController:(id)arg1 willBeginFullScreenPresentationWithAnimationCoordinator:(id)arg2 ;
-(void)playerViewController:(id)arg1 willEndFullScreenPresentationWithAnimationCoordinator:(id)arg2 ;
-(void)playerViewController:(id)arg1 willTransitionToVisibilityOfPlaybackControls:(BOOL)arg2 withAnimationCoordinator:(id)arg3 ;
-(id)playerViewController:(id)arg1 targetViewForDismissalAnimationWithProposedTargetView:(id)arg2 ;
-(id)initWithVisiblityManager:(id)arg1 ;
-(void)setControlsVisibilityDelegate:(id<SVVideoViewControllerControlsVisibilityDelegate>)arg1 ;
-(void)addAppearanceObserver:(id)arg1 ;
-(void)setSourceViewForPresentation:(UIView *)arg1 ;
-(void)setTargetViewForDismissal:(UIView *)arg1 ;
-(NSMutableArray *)appearanceObservers;
-(id<SVVideoViewControllerFullscreenPresentationDelegate>)fullscreenPresentationDelegate;
-(UIView *)sourceViewForPresentation;
-(UIView *)targetViewForDismissal;
-(id<SVVideoViewControllerControlsVisibilityDelegate>)controlsVisibilityDelegate;
-(void)presentFromSourceView:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)dismissToTargetView:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeAppearanceObserver:(id)arg1 ;
-(void)setFullscreenPresentationDelegate:(id<SVVideoViewControllerFullscreenPresentationDelegate>)arg1 ;
-(id<SVVideoVisibilityManager>)visibilityManager;
@end

