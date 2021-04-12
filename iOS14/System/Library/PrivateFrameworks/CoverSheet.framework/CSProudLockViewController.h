/*
* Generated on Thursday, January 14, 2021 at 2:26:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)setAuthenticationStatusProvider:(id<SBFAuthenticationStatusProvider>)arg1 ;
-(id<SBFAuthenticationStatusProvider>)authenticationStatusProvider;
-(BOOL)handleEvent:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id<SBUIBiometricResource>)biometricResource;
-(void)aggregateAppearance:(id)arg1 ;
-(void)proudLockContainerViewController:(id)arg1 guidanceTextVisibilityDidChangeAnimated:(BOOL)arg2 ;
-(void)viewDidLoad;
-(void)setBiometricResource:(id<SBUIBiometricResource>)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(void)updateLockForBiometricMatchFailure;
-(BOOL)hasPasscodeSet;
-(BOOL)isBiometricLockedOut;
-(void)viewDidLayoutSubviews;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(UIView *)cameraCoveredView;
-(void)setProudLockContainerViewController:(SBUIProudLockContainerViewController *)arg1 ;
-(void)_updateProudLockViewControllerConfiguration;
-(void)_createFaceDetectAssertion;
-(void)_clearFaceDetectAssertion;
-(SBUIProudLockContainerViewController *)proudLockContainerViewController;
-(void)_updateForAuthenticated:(BOOL)arg1 ;
-(void)setSuspendLockUpdates:(BOOL)arg1 ;
-(UIView *)proudLockView;
-(BOOL)suspendLockUpdates;
@end

