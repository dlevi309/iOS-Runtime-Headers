/*
* Generated on Thursday, January 14, 2021 at 2:23:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setBehavior:(AVZoomingBehavior *)arg1 ;
-(AVZoomingBehavior *)behavior;
-(void)_updateZoomingView;
-(AVPlaybackContentZoomingView *)contentZoomingView;
-(id)makePlaybackContentContainerWithFrame:(CGRect)arg1 activeContentView:(id)arg2 ;
-(id)initWithAVKitOwner:(id)arg1 ;
-(void)willAddBehavior:(id)arg1 ;
-(void)didAddBehavior:(id)arg1 ;
-(void)willRemoveBehavior:(id)arg1 ;
-(void)didRemoveBehavior:(id)arg1 ;
-(void)setContentZoomingView:(AVPlaybackContentZoomingView *)arg1 ;
-(AVPlayerViewController *)playerViewController;
-(void)_handleDoubleTapGestureRecognizer:(id)arg1 ;
-(void)viewDidLoad;
-(UITapGestureRecognizer *)doubleTapGestureRecognizer;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)setObservationController:(AVObservationController *)arg1 ;
-(void)setZoomingEnabled:(BOOL)arg1 ;
-(BOOL)isZoomingEnabled;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(AVPlaybackContentContainerView *)activeContentView;
-(AVObservationController *)observationController;
-(void)setContentAspectRatio:(CGSize)arg1 ;
-(CGSize)contentAspectRatio;
-(void)dealloc;
-(void)setDoubleTapGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
@end

