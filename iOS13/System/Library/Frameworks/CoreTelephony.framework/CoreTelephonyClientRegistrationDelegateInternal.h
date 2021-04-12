/*
* Generated on Monday, March 1, 2021 at 2:30:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
*/


@protocol CoreTelephonyClientRegistrationDelegateInternal <NSObject>
@optional
-(void)operatorNameChanged:(id)arg1 name:(id)arg2;
-(void)displayStatusChanged:(id)arg1 status:(id)arg2;
-(void)signalStrengthChanged:(id)arg1 info:(id)arg2;
-(void)rejectCauseCodeChanged:(id)arg1 causeCode:(id)arg2;
-(void)voiceLinkQualityChanged:(id)arg1 metric:(id)arg2;
-(void)enhancedVoiceLinkQualityChanged:(id)arg1 metric:(id)arg2;
-(void)enhancedDataLinkQualityChanged:(id)arg1 metric:(id)arg2;
-(void)imsRegistrationChanged:(id)arg1 info:(id)arg2;
-(void)cellChanged:(id)arg1 cell:(id)arg2;
-(void)cellMonitorUpdate:(id)arg1 info:(id)arg2;
-(void)networkListAvailable:(id)arg1 list:(id)arg2;
-(void)customerServiceProfileChanged:(id)arg1 visible:(BOOL)arg2;
-(void)networkSelected:(id)arg1 success:(BOOL)arg2 mode:(id)arg3;
-(void)networkReselectionNeeded:(id)arg1;
-(void)encryptionStatusChanged:(id)arg1 info:(id)arg2;

@end

