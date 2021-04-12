/*
* Generated on Thursday, January 14, 2021 at 2:25:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBInCallPresentationSessionDelegate.h>
#import <libobjc.A.dylib/SBInCallPresentationRequestServerDelegate.h>
#import <libobjc.A.dylib/SBApplicationHosting.h>

@protocol SBInCallPresentationManagerDelegate;
@class SBApplicationController, SBInCallPresentationRequestServer, SBInCallBannerAuthority, NSMutableDictionary, NSMutableArray, SBMainDisplaySceneManager, SBInCallPresentationSession, NSString;

@interface SBInCallPresentationManager : NSObject <SBInCallPresentationSessionDelegate, SBInCallPresentationRequestServerDelegate, SBApplicationHosting> {

	SBApplicationController* _applicationController;
	SBInCallPresentationRequestServer* _presentationRequestServer;
	SBInCallBannerAuthority* _bannerAuthority;
	NSMutableDictionary* _clientIdentifierToPresentationSession;
	NSMutableArray* _pendingInvalidationSessions;
	BOOL _supportsHandlingUILockForWindowedAccessoryAttach;
	id<SBInCallPresentationManagerDelegate> _delegate;
	SBMainDisplaySceneManager* _sceneManager;

}

@property (nonatomic,readonly) SBInCallPresentationSession * _lastPresentationSession; 
@property (assign,nonatomic,__weak) id<SBInCallPresentationManagerDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) SBMainDisplaySceneManager * sceneManager;                            //@synthesize sceneManager=_sceneManager - In the implementation block
@property (nonatomic,readonly) BOOL supportsHandlingDeviceLock; 
@property (nonatomic,readonly) BOOL disallowsLockHardwareButtonDoublePress; 
@property (nonatomic,readonly) BOOL supportsHandlingUILockForWindowedAccessoryAttach;               //@synthesize supportsHandlingUILockForWindowedAccessoryAttach=_supportsHandlingUILockForWindowedAccessoryAttach - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isSpecializedAPISupported;
-(id)hostedAppSceneHandle;
-(id)hostedAppSceneHandles;
-(void)hostedAppWillRotateToInterfaceOrientation:(long long)arg1 ;
-(BOOL)canHostAnApp;
-(SBMainDisplaySceneManager *)sceneManager;
-(void)inCallPresentationRequestServer:(id)arg1 clientWithIdentifierDidInvalidate:(id)arg2 ;
-(void)inCallClientPresentationSession:(id)arg1 callConnectedStatusChangedForPresentableViewController:(id)arg2 ;
-(id<SBInCallPresentationManagerDelegate>)delegate;
-(void)inCallClientPresentationSessionSceneWasDestroyed:(id)arg1 ;
-(BOOL)supportsHandlingUILockForWindowedAccessoryAttach;
-(void)handleAccessoryAttachWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)disallowsLockHardwareButtonDoublePress;
-(id)_hostedPresentationSessions;
-(void)_dismissAllPresentations;
-(void)handleDeviceLockFromSource:(int)arg1 ;
-(id)_newClientPresentationSessionWithSceneHandle:(id)arg1 ;
-(void)setDelegate:(id<SBInCallPresentationManagerDelegate>)arg1 ;
-(BOOL)supportsBecomingVisibleWhenUnlockingFromSource:(int)arg1 wakingDisplay:(BOOL)arg2 ;
-(SBInCallPresentationSession *)_lastPresentationSession;
-(void)_dismissClientWithIdentifier:(id)arg1 animated:(BOOL)arg2 shouldFinalizeSceneDestruction:(BOOL)arg3 shouldInvalidate:(BOOL)arg4 analyticsSource:(id)arg5 completion:(/*^block*/id)arg6 ;
-(BOOL)supportsHandlingDeviceLock;
-(void)reactivateInCallForReason:(long long)arg1 ;
-(void)handlePresentationForActivityContinuationIdentifier:(id)arg1 ;
-(void)conformsToSBApplicationHosting;
-(id)initWithSceneManager:(id)arg1 applicationController:(id)arg2 bannerManager:(id)arg3 ;
-(void)inCallClientPresentationSession:(id)arg1 handleDestroySceneActionWithReason:(long long)arg2 analyticsSource:(id)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)isHostingAnApp;
-(id)_sessionForSceneWithIdentifier:(id)arg1 ;
-(void)inCallPresentationRequestServer:(id)arg1 clientWithIdentifier:(id)arg2 requestsPresentationWithConfiguration:(id)arg3 completion:(/*^block*/id)arg4 ;
-(long long)inCallClientPresentationSessionInterfaceOrientationForTransientOverlayPresentation:(id)arg1 ;
-(long long)inCallClientPresentationSessionInterfaceOrientationForBannerPresentation:(id)arg1 ;
@end

