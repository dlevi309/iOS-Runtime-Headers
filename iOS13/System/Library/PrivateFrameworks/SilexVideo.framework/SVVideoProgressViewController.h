/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/SVVideoTransitionObserver.h>

@protocol SVVideoPlaybackProgressObserverFactory, SVVideoLoadingProgressObserverFactory, SVVideoPlaybackProgressObserving, SVVideoLoadingProgressObserving;
@class UIView, UIVisualEffectView, UIViewPropertyAnimator, NSString;

@interface SVVideoProgressViewController : UIViewController <SVVideoTransitionObserver> {

	id<SVVideoPlaybackProgressObserverFactory> _playbackProgressObserverFactory;
	id<SVVideoLoadingProgressObserverFactory> _loadingProgressObserverFactory;
	id<SVVideoPlaybackProgressObserving> _playbackProgressObserver;
	id<SVVideoLoadingProgressObserving> _loadingProgressObserver;
	UIView* _loadingProgressView;
	UIVisualEffectView* _playbackProgressView;
	UIViewPropertyAnimator* _playbackProgressAnimator;

}

@property (nonatomic,readonly) id<SVVideoPlaybackProgressObserverFactory> playbackProgressObserverFactory;              //@synthesize playbackProgressObserverFactory=_playbackProgressObserverFactory - In the implementation block
@property (nonatomic,readonly) id<SVVideoLoadingProgressObserverFactory> loadingProgressObserverFactory;                //@synthesize loadingProgressObserverFactory=_loadingProgressObserverFactory - In the implementation block
@property (nonatomic,retain) id<SVVideoPlaybackProgressObserving> playbackProgressObserver;                             //@synthesize playbackProgressObserver=_playbackProgressObserver - In the implementation block
@property (nonatomic,retain) id<SVVideoLoadingProgressObserving> loadingProgressObserver;                               //@synthesize loadingProgressObserver=_loadingProgressObserver - In the implementation block
@property (nonatomic,readonly) UIView * loadingProgressView;                                                            //@synthesize loadingProgressView=_loadingProgressView - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * playbackProgressView;                                                 //@synthesize playbackProgressView=_playbackProgressView - In the implementation block
@property (nonatomic,retain) UIViewPropertyAnimator * playbackProgressAnimator;                                         //@synthesize playbackProgressAnimator=_playbackProgressAnimator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(id<SVVideoPlaybackProgressObserverFactory>)playbackProgressObserverFactory;
-(void)setPlaybackProgressObserver:(id<SVVideoPlaybackProgressObserving>)arg1 ;
-(id<SVVideoPlaybackProgressObserving>)playbackProgressObserver;
-(void)willTransitionToVideo:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(id<SVVideoLoadingProgressObserverFactory>)loadingProgressObserverFactory;
-(UIView *)loadingProgressView;
-(UIVisualEffectView *)playbackProgressView;
-(void)resetToPlaybackProgress:(double)arg1 animated:(BOOL)arg2 ;
-(void)startUpdatingPlaybackProgressWithObserver:(id)arg1 ;
-(void)setLoadingProgressObserver:(id<SVVideoLoadingProgressObserving>)arg1 ;
-(id<SVVideoLoadingProgressObserving>)loadingProgressObserver;
-(void)startUpdatingLoadingProgressWithObserver:(id)arg1 ;
-(UIViewPropertyAnimator *)playbackProgressAnimator;
-(void)setPlaybackProgressAnimator:(UIViewPropertyAnimator *)arg1 ;
-(void)setPlaybackProgressView:(UIVisualEffectView *)arg1 ;
-(id)initWithLoadingProgressObserverFactory:(id)arg1 playbackProgressObserverFactory:(id)arg2 ;
@end

