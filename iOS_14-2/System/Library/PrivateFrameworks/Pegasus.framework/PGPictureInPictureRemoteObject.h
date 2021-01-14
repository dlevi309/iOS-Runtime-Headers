/*
* Generated on Thursday, January 14, 2021 at 2:24:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Pegasus.framework/Pegasus
*/

#import <Pegasus/Pegasus-Structs.h>
#import <libobjc.A.dylib/PGPictureInPictureRemoteObjectInterface.h>
#import <libobjc.A.dylib/PGPictureInPictureViewControllerDelegate.h>

@protocol OS_dispatch_queue, BSInvalidatable, PGPictureInPictureRemoteObjectDelegate, PGPictureInPictureAnalyticsDelegate;
@class NSXPCConnection, NSObject, BKSProcessAssertion, NSUUID, NSTimer, PGInterruptionAssistant, PGPictureInPictureApplication, PGPictureInPictureViewController, NSString;

@interface PGPictureInPictureRemoteObject : NSObject <PGPictureInPictureRemoteObjectInterface, PGPictureInPictureViewControllerDelegate> {

	NSXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _queue;
	long long _controlsStyle;
	long long _currentState;
	BKSProcessAssertion* _processAssertion;
	BKSProcessAssertion* _interruptionBeganFinishTaskAssertion;
	BKSProcessAssertion* _cancelPictureInPictureFinishTaskAssertion;
	NSUUID* _finishTaskInvalidationUUID;
	NSTimer* _twoStagedStopInvalidationTimer;
	NSUUID* _analyticsSourceUUID;
	BOOL _shouldNoteStartedAutomaticallyForAnalytics;
	BOOL _isPictureInPicturePossible;
	BOOL _pictureInPictureShouldStartWhenEnteringBackground;
	BOOL _shouldShowAlternateActionButtonImage;
	BOOL _shouldShowLoadingIndicator;
	PGInterruptionAssistant* _interruptionAssistant;
	unsigned long long _transitioningState;
	BOOL _hasBegunTwoStateStop;
	BOOL _stashed;
	unsigned long long _resourcesUsageReductionReasons;
	id<BSInvalidatable> _stateCaptureInvalidatable;
	id<PGPictureInPictureRemoteObjectDelegate> _delegate;
	SCD_Struct_PG4 _delegateRespondsTo;
	PGPictureInPictureApplication* _pictureInPictureApplication;
	PGPictureInPictureViewController* _pictureInPictureViewController;
	id<PGPictureInPictureAnalyticsDelegate> _analyticsDelegate;
	NSString* _sourceSceneSessionPersistentIdentifier;
	CGSize _preferredContentSize;
	CGRect _initialLayerFrame;

}

@property (nonatomic,readonly) NSXPCConnection * connection; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue; 
@property (nonatomic,readonly) PGPictureInPictureApplication * pictureInPictureApplication;                    //@synthesize pictureInPictureApplication=_pictureInPictureApplication - In the implementation block
@property (nonatomic,readonly) PGPictureInPictureViewController * pictureInPictureViewController;              //@synthesize pictureInPictureViewController=_pictureInPictureViewController - In the implementation block
@property (assign,nonatomic,__weak) id<PGPictureInPictureRemoteObjectDelegate> delegate; 
@property (assign,nonatomic,__weak) id<PGPictureInPictureAnalyticsDelegate> analyticsDelegate;                 //@synthesize analyticsDelegate=_analyticsDelegate - In the implementation block
@property (nonatomic,readonly) BOOL shouldStartPictureInPictureEnteringBackground; 
@property (nonatomic,readonly) BOOL canStopPictureInPicture; 
@property (nonatomic,readonly) BOOL canCancelPictureInPicture; 
@property (nonatomic,readonly) BOOL canEndTwoStageStopPictureInPicture; 
@property (nonatomic,readonly) BOOL isStartingStoppingOrCancellingPictureInPicture; 
@property (nonatomic,readonly) long long currentState;                                                         //@synthesize currentState=_currentState - In the implementation block
@property (nonatomic,readonly) unsigned long long transitioningState; 
@property (assign,getter=isPictureInPicturePossible,nonatomic) BOOL pictureInPicturePossible; 
@property (nonatomic,readonly) CGRect initialLayerFrame;                                                       //@synthesize initialLayerFrame=_initialLayerFrame - In the implementation block
@property (nonatomic,readonly) CGSize preferredContentSize;                                                    //@synthesize preferredContentSize=_preferredContentSize - In the implementation block
@property (nonatomic,readonly) NSString * sourceSceneSessionPersistentIdentifier;                              //@synthesize sourceSceneSessionPersistentIdentifier=_sourceSceneSessionPersistentIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_setCurrentState:(long long)arg1 ;
-(PGPictureInPictureViewController *)pictureInPictureViewController;
-(void)suspend;
-(void)setPictureInPicturePossible:(BOOL)arg1 ;
-(BOOL)canStopPictureInPicture;
-(id)initWithConnection:(id)arg1 ;
-(id)init;
-(long long)currentState;
-(id<PGPictureInPictureRemoteObjectDelegate>)delegate;
-(void)setDelegate:(id<PGPictureInPictureRemoteObjectDelegate>)arg1 ;
-(NSString *)description;
-(CGSize)preferredContentSize;
-(NSXPCConnection *)connection;
-(void)invalidate;
-(NSObject*<OS_dispatch_queue>)queue;
-(id<PGPictureInPictureAnalyticsDelegate>)analyticsDelegate;
-(void)cancel;
-(void)resume;
-(void)setAnalyticsDelegate:(id<PGPictureInPictureAnalyticsDelegate>)arg1 ;
-(BOOL)isPictureInPicturePossible;
-(void)dealloc;
-(NSString *)sourceSceneSessionPersistentIdentifier;
-(BOOL)matchesSceneSessionIdentifier:(id)arg1 ;
-(BOOL)isStartingStoppingOrCancellingPictureInPicture;
-(CGRect)initialLayerFrame;
-(void)startPictureInPictureEnteringBackgroundAnimated:(BOOL)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)stopPictureInPictureAnimated:(BOOL)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)beginTwoStageStopPictureInPictureByRestoringUserInterfaceWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)endTwoStageStopPictureInPictureWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)setCurrentResourcesUsageReductionReasons:(unsigned long long)arg1 ;
-(void)pictureInPictureInterruptionBeganWithReason:(long long)arg1 ;
-(void)pictureInPictureInterruptionEndedWithReason:(long long)arg1 ;
-(PGPictureInPictureApplication *)pictureInPictureApplication;
-(BOOL)shouldStartPictureInPictureEnteringBackground;
-(BOOL)canCancelPictureInPicture;
-(BOOL)canEndTwoStageStopPictureInPicture;
-(oneway void)initializePictureInPictureWithControlsStyle:(long long)arg1 preferredContentSize:(CGSize)arg2 completionHandler:(/*^block*/id)arg3 ;
-(oneway void)setupStartAnimated:(BOOL)arg1 hostedWindowHostingHandle:(id)arg2 sceneSessionPersistentIdentifier:(id)arg3 preferredContentSize:(CGSize)arg4 initialInterfaceOrientation:(long long)arg5 initialLayerFrame:(CGRect)arg6 playbackState:(id)arg7 completionHandler:(/*^block*/id)arg8 ;
-(oneway void)startPictureInPictureAnimated:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(oneway void)updateInitialLayerFrameForInteractiveTransitionAnimationUponBackgrounding:(CGRect)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(oneway void)updateSourceSceneSessionPersistentIdentifierForInteractiveTransitionAnimationUponBackgrounding:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(oneway void)updatePreferredContentSize:(CGSize)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(oneway void)checkActivePictureInPictureCancellationPolicyWithCompletion:(/*^block*/id)arg1 ;
-(oneway void)rotateContentContainer:(long long)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(oneway void)setupStopAnimated:(BOOL)arg1 needsApplicationActivation:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(oneway void)stopPictureInPictureAnimated:(BOOL)arg1 withFinalInterfaceOrientation:(long long)arg2 finalLayerFrame:(CGRect)arg3 completionHandler:(/*^block*/id)arg4 ;
-(oneway void)cleanupWithCompletionHandler:(/*^block*/id)arg1 ;
-(oneway void)setPictureInPictureShouldStartWhenEnteringBackground:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(oneway void)updatePlaybackStateWithDiff:(id)arg1 ;
-(oneway void)stopPictureInPictureAndRestoreUserInterface;
-(BOOL)_isUnderLock;
-(id)_processAssertionForProcessIdentifier:(int)arg1 ;
-(id)_invalidationTimerWithTimeout:(double)arg1 ;
-(void)_startPreventingCancelAndRestoreUserActions;
-(void)_invalidateInterruptionBeganFinishTaskAssertion;
-(id)_finishTaskAssertionForProcessIdentifier:(int)arg1 ;
-(id)_invalidationTimerWithTimeout:(double)arg1 block:(/*^block*/id)arg2 ;
-(void)_tearDownAndNotifyClientAboutCancellation:(BOOL)arg1 ;
-(void)_updatePreferredContentSize:(CGSize)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)pictureInPictureViewControllerDidRequestStop:(id)arg1 ;
-(void)pictureInPictureViewControllerDidRequestCancel:(id)arg1 ;
-(void)pictureInPictureViewController:(id)arg1 updateHostedWindowSize:(CGSize)arg2 animationType:(long long)arg3 initialSpringVelocity:(double)arg4 ;
-(void)pictureInPictureViewControllerHostedWindowSizeChangeBegan:(id)arg1 ;
-(void)pictureInPictureViewControllerHostedWindowSizeChangeEnded:(id)arg1 ;
-(void)pictureInPictureViewController:(id)arg1 didReceiveCommand:(id)arg2 ;
-(void)pictureInPictureViewController:(id)arg1 didTransitionToStashed:(BOOL)arg2 shouldBeginOrEndInterruption:(BOOL)arg3 ;
-(unsigned long long)transitioningState;
@end

