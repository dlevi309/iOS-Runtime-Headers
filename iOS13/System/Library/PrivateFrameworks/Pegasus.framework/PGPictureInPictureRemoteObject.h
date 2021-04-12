/*
* Generated on Monday, March 1, 2021 at 2:31:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Pegasus.framework/Pegasus
*/

#import <Pegasus/Pegasus-Structs.h>
#import <libobjc.A.dylib/PGPictureInPictureRemoteObjectInterface.h>
#import <libobjc.A.dylib/PGPictureInPictureViewControllerDelegate.h>

@protocol OS_dispatch_queue, PGPictureInPictureRemoteObjectDelegate;
@class NSXPCConnection, NSObject, BKSProcessAssertion, NSUUID, PGPictureInPictureViewController, PGPlaybackProgress, NSArray, PGPictureInPictureApplication, NSString;

@interface PGPictureInPictureRemoteObject : NSObject <PGPictureInPictureRemoteObjectInterface, PGPictureInPictureViewControllerDelegate> {

	NSXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _queue;
	long long _controlsStyle;
	long long _currentState;
	BKSProcessAssertion* _processAssertion;
	BKSProcessAssertion* _interruptionBeganFinishTaskAssertion;
	NSUUID* _finishTaskInvalidationUUID;
	PGPictureInPictureViewController* _pictureInPictureViewController;
	BOOL _isPictureInPicturePossible;
	long long _pictureInPictureInterruptionCounter;
	BOOL _pictureInPictureShouldStartWhenEnteringBackground;
	BOOL _shouldShowAlternateActionButtonImage;
	BOOL _shouldShowLoadingIndicator;
	PGPlaybackProgress* _playbackProgress;
	NSArray* _loadedTimeRanges;
	unsigned long long _transitioningState;
	id<PGPictureInPictureRemoteObjectDelegate> _delegate;
	SCD_Struct_PG1 _delegateRespondsTo;
	PGPictureInPictureApplication* _pictureInPictureApplication;
	NSString* _sourceSceneSessionPersistentIdentifier;
	CGSize _preferredContentSize;
	CGRect _initialLayerFrame;

}

@property (nonatomic,readonly) NSXPCConnection * connection; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue; 
@property (nonatomic,readonly) PGPictureInPictureApplication * pictureInPictureApplication;                //@synthesize pictureInPictureApplication=_pictureInPictureApplication - In the implementation block
@property (assign,nonatomic,__weak) id<PGPictureInPictureRemoteObjectDelegate> delegate; 
@property (nonatomic,readonly) BOOL shouldStartPictureInPictureEnteringBackground; 
@property (nonatomic,readonly) BOOL canStopPictureInPicture; 
@property (nonatomic,readonly) BOOL canCancelPictureInPicture; 
@property (nonatomic,readonly) BOOL isStartingStoppingOrCancellingPictureInPicture; 
@property (nonatomic,readonly) unsigned long long transitioningState; 
@property (assign,getter=isPictureInPicturePossible,nonatomic) BOOL pictureInPicturePossible; 
@property (nonatomic,readonly) CGRect initialLayerFrame;                                                   //@synthesize initialLayerFrame=_initialLayerFrame - In the implementation block
@property (nonatomic,readonly) CGSize preferredContentSize;                                                //@synthesize preferredContentSize=_preferredContentSize - In the implementation block
@property (nonatomic,readonly) NSString * sourceSceneSessionPersistentIdentifier;                          //@synthesize sourceSceneSessionPersistentIdentifier=_sourceSceneSessionPersistentIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(NSObject*<OS_dispatch_queue>)queue;
-(id<PGPictureInPictureRemoteObjectDelegate>)delegate;
-(void)setDelegate:(id<PGPictureInPictureRemoteObjectDelegate>)arg1 ;
-(void)cancel;
-(void)resume;
-(void)suspend;
-(NSXPCConnection *)connection;
-(id)initWithConnection:(id)arg1 ;
-(CGSize)preferredContentSize;
-(BOOL)isPictureInPicturePossible;
-(void)setPictureInPicturePossible:(BOOL)arg1 ;
-(NSString *)sourceSceneSessionPersistentIdentifier;
-(BOOL)matchesSceneSessionIdentifier:(id)arg1 ;
-(BOOL)isStartingStoppingOrCancellingPictureInPicture;
-(unsigned long long)transitioningState;
-(CGRect)initialLayerFrame;
-(void)startPictureInPictureEnteringBackgroundAnimated:(BOOL)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)stopPictureInPictureAnimated:(BOOL)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)pictureInPictureInterruptionBegan;
-(void)pictureInPictureInterruptionEnded;
-(PGPictureInPictureApplication *)pictureInPictureApplication;
-(BOOL)shouldStartPictureInPictureEnteringBackground;
-(BOOL)canStopPictureInPicture;
-(BOOL)canCancelPictureInPicture;
-(oneway void)initializePictureInPictureWithControlsStyle:(long long)arg1 preferredContentSize:(CGSize)arg2 completionHandler:(/*^block*/id)arg3 ;
-(oneway void)setupStartAnimated:(BOOL)arg1 hostedWindowHostingHandle:(id)arg2 sceneSessionPersistentIdentifier:(id)arg3 preferredContentSize:(CGSize)arg4 initialInterfaceOrientation:(long long)arg5 initialLayerFrame:(CGRect)arg6 completionHandler:(/*^block*/id)arg7 ;
-(oneway void)startPictureInPictureAnimated:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(oneway void)updateInitialLayerFrameForInteractiveTransitionAnimationUponBackgrounding:(CGRect)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(oneway void)updateSourceSceneSessionPersistentIdentifierForInteractiveTransitionAnimationUponBackgrounding:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(oneway void)updatePreferredContentSize:(CGSize)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(oneway void)checkActivePictureInPictureCancellationPolicyWithCompletion:(/*^block*/id)arg1 ;
-(oneway void)rotateContentContainer:(long long)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(oneway void)setupStopAnimated:(BOOL)arg1 activateApplicationIfNeeded:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(oneway void)stopPictureInPictureAnimated:(BOOL)arg1 withFinalInterfaceOrientation:(long long)arg2 finalLayerFrame:(CGRect)arg3 completionHandler:(/*^block*/id)arg4 ;
-(oneway void)cleanupWithCompletionHandler:(/*^block*/id)arg1 ;
-(oneway void)setPictureInPictureShouldStartWhenEnteringBackground:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(oneway void)setControlsStyle:(long long)arg1 animated:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(oneway void)setShouldShowAlternateActionButtonImage:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(oneway void)setShouldShowLoadingIndicator:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(oneway void)setPlaybackProgress:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(oneway void)setLoadedTimeRanges:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_processAssertionForProcessIdentifier:(int)arg1 ;
-(void)_invalidateInterruptionBeganFinishTaskAssertion;
-(id)_finishTaskAssertionForProcessIdentifier:(int)arg1 ;
-(void)_tearDownAndNotifyClientAboutCancellation:(BOOL)arg1 ;
-(void)pictureInPictureViewController:(id)arg1 updateHostedWindowSize:(CGSize)arg2 animationType:(long long)arg3 initialSpringVelocity:(double)arg4 ;
-(void)pictureInPictureViewControllerHostedWindowSizeChangeBegan:(id)arg1 ;
-(void)pictureInPictureViewControllerHostedWindowSizeChangeEnded:(id)arg1 ;
-(void)pictureInPictureViewControllerStopButtonTapped:(id)arg1 ;
-(void)pictureInPictureViewControllerActionButtonTapped:(id)arg1 ;
-(void)pictureInPictureViewControllerCancelButtonTapped:(id)arg1 ;
@end

