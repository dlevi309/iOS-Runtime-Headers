/*
* Generated on Thursday, January 14, 2021 at 2:26:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/

#import <PrototypeTools/PTSettings.h>

@class CSLockScreenBiometricFailureSettings;

@interface CSLockScreenMesaSettings : PTSettings {

	BOOL _passcodeRequiredEventsCountAsFailures;
	BOOL _flashRedOnPasscodeRequiredEvents;
	BOOL _successFeedbackWaitsUntilButtonUp;
	CSLockScreenBiometricFailureSettings* _firstFailureSettings;
	CSLockScreenBiometricFailureSettings* _secondFailureSettings;
	CSLockScreenBiometricFailureSettings* _thirdFailureSettings;
	CSLockScreenBiometricFailureSettings* _fourthFailureSettings;
	CSLockScreenBiometricFailureSettings* _fifthFailureSettings;
	double _slowPressDuration;

}

@property (nonatomic,retain) CSLockScreenBiometricFailureSettings * firstFailureSettings;               //@synthesize firstFailureSettings=_firstFailureSettings - In the implementation block
@property (nonatomic,retain) CSLockScreenBiometricFailureSettings * secondFailureSettings;              //@synthesize secondFailureSettings=_secondFailureSettings - In the implementation block
@property (nonatomic,retain) CSLockScreenBiometricFailureSettings * thirdFailureSettings;               //@synthesize thirdFailureSettings=_thirdFailureSettings - In the implementation block
@property (nonatomic,retain) CSLockScreenBiometricFailureSettings * fourthFailureSettings;              //@synthesize fourthFailureSettings=_fourthFailureSettings - In the implementation block
@property (nonatomic,retain) CSLockScreenBiometricFailureSettings * fifthFailureSettings;               //@synthesize fifthFailureSettings=_fifthFailureSettings - In the implementation block
@property (assign,nonatomic) BOOL passcodeRequiredEventsCountAsFailures;                                //@synthesize passcodeRequiredEventsCountAsFailures=_passcodeRequiredEventsCountAsFailures - In the implementation block
@property (assign,nonatomic) BOOL flashRedOnPasscodeRequiredEvents;                                     //@synthesize flashRedOnPasscodeRequiredEvents=_flashRedOnPasscodeRequiredEvents - In the implementation block
@property (assign,nonatomic) BOOL successFeedbackWaitsUntilButtonUp;                                    //@synthesize successFeedbackWaitsUntilButtonUp=_successFeedbackWaitsUntilButtonUp - In the implementation block
@property (assign,nonatomic) double slowPressDuration;                                                  //@synthesize slowPressDuration=_slowPressDuration - In the implementation block
+(id)settingsControllerModule;
-(void)setDefaultValues;
-(double)slowPressDuration;
-(void)setSlowPressDuration:(double)arg1 ;
-(BOOL)passcodeRequiredEventsCountAsFailures;
-(BOOL)flashRedOnPasscodeRequiredEvents;
-(BOOL)successFeedbackWaitsUntilButtonUp;
-(CSLockScreenBiometricFailureSettings *)firstFailureSettings;
-(CSLockScreenBiometricFailureSettings *)secondFailureSettings;
-(CSLockScreenBiometricFailureSettings *)thirdFailureSettings;
-(CSLockScreenBiometricFailureSettings *)fourthFailureSettings;
-(CSLockScreenBiometricFailureSettings *)fifthFailureSettings;
-(void)setPasscodeRequiredEventsCountAsFailures:(BOOL)arg1 ;
-(void)setFlashRedOnPasscodeRequiredEvents:(BOOL)arg1 ;
-(void)setSuccessFeedbackWaitsUntilButtonUp:(BOOL)arg1 ;
-(void)setFirstFailureSettings:(CSLockScreenBiometricFailureSettings *)arg1 ;
-(void)setSecondFailureSettings:(CSLockScreenBiometricFailureSettings *)arg1 ;
-(void)setThirdFailureSettings:(CSLockScreenBiometricFailureSettings *)arg1 ;
-(void)setFourthFailureSettings:(CSLockScreenBiometricFailureSettings *)arg1 ;
-(void)setFifthFailureSettings:(CSLockScreenBiometricFailureSettings *)arg1 ;
@end

