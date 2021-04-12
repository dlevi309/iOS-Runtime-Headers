/*
* Generated on Monday, March 1, 2021 at 2:31:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/

#import <AVKit/AVKit-Structs.h>
#import <AVKit/AVPlayerViewControllerBehaviorContext.h>
#import <AVKit/AVBehaviorContextInternal.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <AVKit/AVBehaviorContext.h>

@class AVPlayerViewController, AVZoomingBehavior, AVPlaybackContentZoomingView, AVObservationController, UITapGestureRecognizer, AVPlaybackContentContainerView, NSString;

@interface AVZoomingBehaviorContext : NSObject <AVPlayerViewControllerBehaviorContext, AVBehaviorContextInternal, UIGestureRecognizerDelegate, AVBehaviorContext> {

	BOOL _zoomingEnabled;
	AVPlayerViewController* _playerViewController;
	AVZoomingBehavior* _behavior;
	AVPlaybackContentZoomingView* _contentZoomingView;
	AVObservationController* _observationController;
	UITapGestureRecognizer* _doubleTapGestureRecognizer;
	CGSize _contentAspectRatio;

}

@property (assign,nonatomic,__weak) AVZoomingBehavior * behavior;                                 //@synthesize behavior=_behavior - In the implementation block
@property (nonatomic,retain) AVPlaybackContentZoomingView * contentZoomingView;                   //@synthesize contentZoomingView=_contentZoomingView - In the implementation block
@property (nonatomic,retain) AVObservationController * observationController;                     //@synthesize observationController=_observationController - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * doubleTapGestureRecognizer;                 //@synthesize doubleTapGestureRecognizer=_doubleTapGestureRecognizer - In the implementation block
@property (nonatomic,readonly) AVPlaybackContentContainerView * activeContentView; 
@property (assign,getter=isZoomingEnabled,nonatomic) BOOL zoomingEnabled;                         //@synthesize zoomingEnabled=_zoomingEnabled - In the implementation block
@property (assign,nonatomic) CGSize contentAspectRatio;                                           //@synthesize contentAspectRatio=_contentAspectRatio - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) AVPlayerViewController * playerViewController;              //@synthesize playerViewController=_playerViewController - In the implementation block
-(void)dealloc;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)viewDidLoad;
-(AVZoomingBehavior *)behavior;
-(void)setBehavior:(AVZoomingBehavior *)arg1 ;
-(UITapGestureRecognizer *)doubleTapGestureRecognizer;
-(AVPlayerViewController *)playerViewController;
-(AVObservationController *)observationController;
-(id)makePlaybackContentContainerWithFrame:(CGRect)arg1 activeContentView:(id)arg2 ;
-(id)initWithAVKitOwner:(id)arg1 ;
-(void)willAddBehavior:(id)arg1 ;
-(void)didAddBehavior:(id)arg1 ;
-(void)willRemoveBehavior:(id)arg1 ;
-(void)didRemoveBehavior:(id)arg1 ;
-(void)setObservationController:(AVObservationController *)arg1 ;
-(void)setZoomingEnabled:(BOOL)arg1 ;
-(BOOL)isZoomingEnabled;
-(AVPlaybackContentContainerView *)activeContentView;
-(void)setContentAspectRatio:(CGSize)arg1 ;
-(CGSize)contentAspectRatio;
-(void)_handleDoubleTapGestureRecognizer:(id)arg1 ;
-(void)_updateZoomingView;
-(AVPlaybackContentZoomingView *)contentZoomingView;
-(void)setContentZoomingView:(AVPlaybackContentZoomingView *)arg1 ;
-(void)setDoubleTapGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
@end

