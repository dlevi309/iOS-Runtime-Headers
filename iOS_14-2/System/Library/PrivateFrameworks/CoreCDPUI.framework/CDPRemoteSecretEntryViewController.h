/*
* Generated on Thursday, January 14, 2021 at 2:27:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPUI.framework/CoreCDPUI
*/

#import <CoreCDPUI/CDPPassphraseEntryViewController.h>
#import <libobjc.A.dylib/DevicePINControllerDelegate.h>

@protocol CDPRemoteSecretEntryDelegate;
@class NSNumber, CDPDevice, CDPRemoteDeviceSecretValidator, CDPRemoteValidationEscapeOffer, NSString;

@interface CDPRemoteSecretEntryViewController : CDPPassphraseEntryViewController <DevicePINControllerDelegate> {

	BOOL _hasNumericSecret;
	NSNumber* _numericSecretLength;
	CDPDevice* _remoteRecoveryDevice;
	long long _remainingAttempts;
	CDPRemoteDeviceSecretValidator* _validator;
	id<CDPRemoteSecretEntryDelegate> _delegate;
	unsigned long long _validationState;
	CDPRemoteValidationEscapeOffer* _escapeOffer;

}

@property (nonatomic,readonly) CDPRemoteDeviceSecretValidator * validator;              //@synthesize validator=_validator - In the implementation block
@property (nonatomic,retain) CDPRemoteValidationEscapeOffer * escapeOffer;              //@synthesize escapeOffer=_escapeOffer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewWillAppear:(BOOL)arg1 ;
-(BOOL)simplePIN;
-(void)setPane:(id)arg1 ;
-(BOOL)useProgressiveDelays;
-(BOOL)pinIsAcceptable:(id)arg1 outError:(id*)arg2 ;
-(CDPRemoteDeviceSecretValidator *)validator;
-(id)pinInstructionsPrompt;
-(BOOL)validatePIN:(id)arg1 ;
-(id)initWithValidator:(id)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)didCancelEnteringPIN;
-(void)didAcceptEnteredPIN:(id)arg1 ;
-(id)title;
-(id)initWithIsNumeric:(BOOL)arg1 numericLength:(id)arg2 validator:(id)arg3 delegate:(id)arg4 ;
-(void)setEscapeOffer:(CDPRemoteValidationEscapeOffer *)arg1 ;
-(id)initWithDevice:(id)arg1 validator:(id)arg2 delegate:(id)arg3 ;
-(void)disableUserInteractionAndStartSpinner;
-(void)enableUserInteractionAndStopSpinner;
-(CDPRemoteValidationEscapeOffer *)escapeOffer;
-(void)showIncorrectRemoteSecretAlertForPasscode:(id)arg1 withRecoveryError:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)didEnterValidRemoteSecret:(id)arg1 ;
@end

