/*
* Generated on Thursday, January 14, 2021 at 2:23:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
*/

#import <SpringBoardUIServices/SpringBoardUIServices-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/SBUIPoseidonIconViewDelegate.h>

@protocol SBUIPoseidonContainerViewControllerDelegate, SBUIPoseidonContainerViewControllerLockStatusProvider;
@class _UILegibilitySettings, NSString;

@interface SBUIPoseidonContainerViewController : UIViewController <SBUIPoseidonIconViewDelegate> {

	BOOL _authenticated;
	BOOL _bioLockout;
	BOOL _screenOn;
	BOOL _fingerOffSinceWake;
	BOOL _resignActive;
	int _unlockSource;
	id<SBUIPoseidonContainerViewControllerDelegate> _delegate;
	id<SBUIPoseidonContainerViewControllerLockStatusProvider> _authenticationInformationProvider;
	_UILegibilitySettings* _legibilitySettings;

}

@property (assign,nonatomic,__weak) id<SBUIPoseidonContainerViewControllerDelegate> delegate;                                                 //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<SBUIPoseidonContainerViewControllerLockStatusProvider> authenticationInformationProvider;              //@synthesize authenticationInformationProvider=_authenticationInformationProvider - In the implementation block
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings;                                                                      //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
@property (assign,getter=isAuthenticated,nonatomic) BOOL authenticated;                                                                       //@synthesize authenticated=_authenticated - In the implementation block
@property (assign,getter=isBioLockout,nonatomic) BOOL bioLockout;                                                                             //@synthesize bioLockout=_bioLockout - In the implementation block
@property (assign,getter=isScreenOn,nonatomic) BOOL screenOn;                                                                                 //@synthesize screenOn=_screenOn - In the implementation block
@property (assign,nonatomic) BOOL fingerOffSinceWake;                                                                                         //@synthesize fingerOffSinceWake=_fingerOffSinceWake - In the implementation block
@property (assign,nonatomic) int unlockSource;                                                                                                //@synthesize unlockSource=_unlockSource - In the implementation block
@property (assign,nonatomic) BOOL resignActive;                                                                                               //@synthesize resignActive=_resignActive - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setAuthenticated:(BOOL)arg1 ;
-(BOOL)isAuthenticated;
-(void)fillRestToOpenWithDuration:(double)arg1 ;
-(void)resetRestToOpen;
-(id<SBUIPoseidonContainerViewControllerDelegate>)delegate;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(id)_poseidonIconView;
-(void)_setLocalTransformForOrientation:(long long)arg1 ;
-(void)_setCounterTransformForOrientation:(long long)arg1 ;
-(void)setBioLockout:(BOOL)arg1 ;
-(void)startRestToOpenCoaching:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)setFingerOffSinceWake:(BOOL)arg1 ;
-(void)setUnlockSource:(int)arg1 ;
-(id<SBUIPoseidonContainerViewControllerLockStatusProvider>)authenticationInformationProvider;
-(double)poseidonIconViewIdleUntilShimmerDuration:(id)arg1 ;
-(double)poseidonIconViewRestToOpenIdleDuration:(id)arg1 ;
-(void)poseidonIconViewCoachingStateDidChange:(id)arg1 ;
-(void)setResignActive:(BOOL)arg1 ;
-(BOOL)coachingActive;
-(BOOL)isBioLockout;
-(BOOL)fingerOffSinceWake;
-(int)unlockSource;
-(BOOL)isScreenOn;
-(void)setDelegate:(id<SBUIPoseidonContainerViewControllerDelegate>)arg1 ;
-(BOOL)_canShowWhileLocked;
-(_UILegibilitySettings *)legibilitySettings;
-(id)initWithAuthenticationInformationProvider:(id)arg1 ;
-(void)setAuthenticationInformationProvider:(id<SBUIPoseidonContainerViewControllerLockStatusProvider>)arg1 ;
-(void)showCoaching:(BOOL)arg1 ;
-(void)setScreenOn:(BOOL)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)loadView;
-(BOOL)resignActive;
@end

