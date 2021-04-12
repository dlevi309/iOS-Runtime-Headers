/*
* Generated on Monday, March 1, 2021 at 2:33:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/

#import <CoverSheet/CSCoverSheetViewControllerBase.h>
#import <libobjc.A.dylib/PTSettingsKeyObserver.h>
#import <libobjc.A.dylib/SBUIProudLockContainerViewControllerLockStatusProvider.h>
#import <libobjc.A.dylib/SBUIProudLockContainerViewControllerDelegate.h>

@protocol BSInvalidatable, SBUIBiometricResource, SBFAuthenticationStatusProvider;
@class CSLockScreenPearlSettings, SBUIProudLockContainerViewController, UIView, NSString;

@interface CSProudLockViewController : CSCoverSheetViewControllerBase <PTSettingsKeyObserver, SBUIProudLockContainerViewControllerLockStatusProvider, SBUIProudLockContainerViewControllerDelegate> {

	CSLockScreenPearlSettings* _pearlSettings;
	id<BSInvalidatable> _faceDetectWantedAssertion;
	long long _deferredAuthenticationState;
	BOOL _suspendLockUpdates;
	SBUIProudLockContainerViewController* _proudLockContainerViewController;
	id<SBUIBiometricResource> _biometricResource;
	id<SBFAuthenticationStatusProvider> _authenticationStatusProvider;

}

@property (nonatomic,retain) SBUIProudLockContainerViewController * proudLockContainerViewController;              //@synthesize proudLockContainerViewController=_proudLockContainerViewController - In the implementation block
@property (nonatomic,retain) id<SBUIBiometricResource> biometricResource;                                          //@synthesize biometricResource=_biometricResource - In the implementation block
@property (nonatomic,retain) id<SBFAuthenticationStatusProvider> authenticationStatusProvider;                     //@synthesize authenticationStatusProvider=_authenticationStatusProvider - In the implementation block
@property (assign,nonatomic) BOOL suspendLockUpdates;                                                              //@synthesize suspendLockUpdates=_suspendLockUpdates - In the implementation block
@property (nonatomic,readonly) UIView * proudLockView; 
@property (nonatomic,readonly) UIView * cameraCoveredView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL hasPasscodeSet; 
@property (nonatomic,readonly) BOOL isBiometricLockedOut; 
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)handleEvent:(id)arg1 ;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(BOOL)hasPasscodeSet;
-(id<SBUIBiometricResource>)biometricResource;
-(void)updateLockForBiometricMatchFailure;
-(BOOL)isBiometricLockedOut;
-(void)setBiometricResource:(id<SBUIBiometricResource>)arg1 ;
-(UIView *)cameraCoveredView;
-(void)proudLockContainerViewController:(id)arg1 guidanceTextVisibilityDidChangeAnimated:(BOOL)arg2 ;
-(void)aggregateAppearance:(id)arg1 ;
-(void)setProudLockContainerViewController:(SBUIProudLockContainerViewController *)arg1 ;
-(void)_updateProudLockViewControllerConfiguration;
-(void)_createFaceDetectAssertion;
-(void)_clearFaceDetectAssertion;
-(SBUIProudLockContainerViewController *)proudLockContainerViewController;
-(void)_updateForAuthenticated:(BOOL)arg1 ;
-(id<SBFAuthenticationStatusProvider>)authenticationStatusProvider;
-(void)setSuspendLockUpdates:(BOOL)arg1 ;
-(UIView *)proudLockView;
-(void)setAuthenticationStatusProvider:(id<SBFAuthenticationStatusProvider>)arg1 ;
-(BOOL)suspendLockUpdates;
@end

