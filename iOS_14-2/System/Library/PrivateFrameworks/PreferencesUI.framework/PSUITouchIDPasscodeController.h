/*
* Generated on Thursday, January 14, 2021 at 2:28:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
*/

#import <PreferencesUI/PSUIBiometricController.h>
#import <UIKit/UIPopoverControllerDelegate.h>
#import <libobjc.A.dylib/BiometricKitDelegate.h>
#import <libobjc.A.dylib/BiometricKitUIEnrollResultDelegate.h>

@protocol OS_dispatch_queue;
@class BiometricKit, NSObject, NSString;

@interface PSUITouchIDPasscodeController : PSUIBiometricController <UIPopoverControllerDelegate, BiometricKitDelegate, BiometricKitUIEnrollResultDelegate> {

	BiometricKit* _highlightMatcher;
	NSObject*<OS_dispatch_queue> _highlightQueue;

}

@property (nonatomic,retain) BiometricKit * highlightMatcher;                          //@synthesize highlightMatcher=_highlightMatcher - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> highlightQueue;              //@synthesize highlightQueue=_highlightQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)suspend;
-(id)specifiers;
-(id)init;
-(void)statusMessage:(unsigned)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)dealloc;
-(void)matchResult:(id)arg1 ;
-(void)enrollResult:(int)arg1 identity:(id)arg2 ;
-(void)enrollResult:(int)arg1 bkIdentity:(id)arg2 ;
-(void)enrollBiometric;
-(id)biometricLogo;
-(id)headerForUseBiometricSection;
-(void)enrollmentControllerDidDismiss;
-(void)cancelModalFlowWithCompletion:(/*^block*/id)arg1 ;
-(void)cancelModalFlow;
-(NSObject*<OS_dispatch_queue>)highlightQueue;
-(BiometricKit *)highlightMatcher;
-(void)setHighlightMatcher:(BiometricKit *)arg1 ;
-(void)_setupMatching;
-(void)_cancelMatching;
-(void)setHighlightQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)fingerprintSpecifiers;
-(id)_fingerprintSpecifierForIdentity:(id)arg1 ;
-(void)addEnrollment:(id)arg1 ;
-(void)updateAddFingerprintSpecifier;
-(void)highlightFingerprintSpecifier:(id)arg1 ;
-(void)unhighlightFingerprintSpecifiersAfterDelay:(double)arg1 ;
@end

