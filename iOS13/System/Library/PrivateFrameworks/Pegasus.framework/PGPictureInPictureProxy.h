/*
* Generated on Monday, March 1, 2021 at 2:31:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Pegasus.framework/Pegasus
*/

#import <Pegasus/Pegasus-Structs.h>
#import <libobjc.A.dylib/PGPictureInPictureExportedInterface.h>

@protocol OS_dispatch_queue, PGPictureInPictureProxyDelegate, PGPictureInPictureViewController;
@class NSString, NSArray, PGSetterThrottler, NSXPCConnection, NSObject, PGHostedWindow, UIViewController;

@interface PGPictureInPictureProxy : NSObject <PGPictureInPictureExportedInterface> {

	CGSize _preferredContentSize;
	CGRect _initialLayerFrame;
	NSString* _sceneSessionPersistentIdentifier;
	BOOL _isPictureInPicturePossible;
	BOOL _isPictureInPictureActive;
	BOOL _isPictureInPictureSuspended;
	BOOL _pictureInPictureShouldStartWhenEnteringBackground;
	BOOL _pictureInPictureWasStartedWhenEnteringBackground;
	BOOL _shouldCancelActivePictureInPictureOnStart;
	BOOL _shouldPullCancellationPolicyOnStart;
	id _windowSceneActivationStateObserver;
	double _playbackProgress;
	double _playbackRate;
	NSArray* _loadedTimeRanges;
	PGSetterThrottler* _playbackProgressSetterThrottler;
	PGSetterThrottler* _loadedTimeRangesSetterThrottler;
	NSXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _queue;
	PGHostedWindow* _hostedWindow;
	UIViewController* _rootViewController;
	BOOL _isStartingStoppingOrCancellingPictureInPicture;
	BOOL _isHostedWindowSizeChangeDuringPinchGesture;
	id<PGPictureInPictureProxyDelegate> _delegate;
	SCD_Struct_PG6 _delegateRespondsTo;
	long long _controlsStyle;
	UIViewController*<PGPictureInPictureViewController> _viewController;

}

@property (assign,nonatomic) long long controlsStyle;                                                           //@synthesize controlsStyle=_controlsStyle - In the implementation block
@property (nonatomic,readonly) UIViewController*<PGPictureInPictureViewController> viewController;              //@synthesize viewController=_viewController - In the implementation block
@property (assign,nonatomic,__weak) id<PGPictureInPictureProxyDelegate> delegate; 
@property (getter=isPictureInPicturePossible,nonatomic,readonly) BOOL pictureInPicturePossible; 
@property (getter=isPictureInPictureActive,nonatomic,readonly) BOOL pictureInPictureActive; 
@property (getter=isPictureInPictureSuspended,nonatomic,readonly) BOOL pictureInPictureSuspended; 
@property (assign,nonatomic) BOOL pictureInPictureShouldStartWhenEnteringBackground; 
@property (nonatomic,readonly) BOOL pictureInPictureWasStartedWhenEnteringBackground; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isPictureInPictureActive;
+(BOOL)isPictureInPictureSupported;
+(void)_updatePictureInPictureActive:(BOOL)arg1 ;
+(id)pictureInPictureProxyWithControlsStyle:(long long)arg1 viewController:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(id<PGPictureInPictureProxyDelegate>)delegate;
-(void)setDelegate:(id<PGPictureInPictureProxyDelegate>)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)loadedTimeRanges;
-(void)setLoadedTimeRanges:(id)arg1 ;
-(UIViewController*<PGPictureInPictureViewController>)viewController;
-(BOOL)isPictureInPictureActive;
-(BOOL)isPictureInPicturePossible;
-(void)startPictureInPicture;
-(BOOL)pictureInPictureWasStartedWhenEnteringBackground;
-(double)playbackRate;
-(double)playbackProgress;
-(long long)controlsStyle;
-(void)setControlsStyle:(long long)arg1 ;
-(void)stopPictureInPictureAndRestoreUserInterface:(BOOL)arg1 ;
-(void)preferredContentSizeDidChangeForViewController;
-(void)setPlaybackProgress:(double)arg1 playbackRate:(double)arg2 ;
-(id)initWithControlsStyle:(long long)arg1 viewController:(id)arg2 ;
-(void)setPictureInPictureShouldStartWhenEnteringBackground:(BOOL)arg1 ;
-(void)viewFrameForInteractiveTransitionAnimationWhenEnteringBackgroundDidChangeForViewController;
-(BOOL)isPictureInPictureSuspended;
-(oneway void)actionButtonTapped;
-(oneway void)pictureInPictureInterruptionBegan;
-(oneway void)pictureInPictureInterruptionEnded;
-(void)rotateContentContainer:(long long)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(oneway void)pictureInPictureStartRequestedAnimated:(BOOL)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(oneway void)pictureInPictureStopRequestedAnimated:(BOOL)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(oneway void)pictureInPictureCancelRequestedAnimated:(BOOL)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(oneway void)updatePictureInPicturePossible:(BOOL)arg1 ;
-(BOOL)pictureInPictureSuspended;
-(oneway void)pictureInPictureResumed;
-(oneway void)pictureInPictureCancelled;
-(oneway void)updateHostedWindowSize:(CGSize)arg1 animationType:(long long)arg2 initialSpringVelocity:(double)arg3 synchronizationFence:(id)arg4 ;
-(oneway void)hostedWindowSizeChangeBegan;
-(oneway void)hostedWindowSizeChangeEnded;
-(void)_stopObservingWindowSceneActivationState;
-(void)_updateAutoPIPSettingsAndNotifyRemoteObjectIfNeeded;
-(CGRect)_viewFrameForTransitionAnimationAssumeApplicationActive:(BOOL)arg1 ;
-(id)_sceneSessionPersistentIdentifierForTransitionAnimationAssumeApplicationActive:(BOOL)arg1 ;
-(void)_startPictureInPictureAnimated:(BOOL)arg1 enteringBackground:(BOOL)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)_stopPictureInPictureAnimated:(BOOL)arg1 restoreUserInterface:(BOOL)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)setControlsStyle:(long long)arg1 animated:(BOOL)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)_manageStartAnimated:(BOOL)arg1 cancelActiveOnStart:(BOOL)arg2 competionHandler:(/*^block*/id)arg3 ;
-(void)_updateCancellationPolicyWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_didStartWithSuccess:(BOOL)arg1 animationType:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_actuallyStartAnimated:(BOOL)arg1 animationType:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_setupStart:(BOOL)arg1 animationType:(long long)arg2 initialLayerFrame:(CGRect)arg3 completionHandler:(/*^block*/id)arg4 ;
-(long long)_interfaceOrientationForTransitionAnimationAssumeApplicationActive:(BOOL)arg1 ;
-(BOOL)_isViewControllerWindowSceneActive;
-(id)_sourceScene;
-(void)_executeDelegateCallbackBlock:(/*^block*/id)arg1 assumeApplicationActive:(BOOL)arg2 ;
-(id)_expectedScene;
-(void)_updateAutoPIPSettingsAndNotifyRemoteObject;
-(void)windowSceneForInteractiveTransitionAnimationWhenEnteringBackgroundDidChangeForViewController;
-(BOOL)pictureInPictureShouldStartWhenEnteringBackground;
@end

