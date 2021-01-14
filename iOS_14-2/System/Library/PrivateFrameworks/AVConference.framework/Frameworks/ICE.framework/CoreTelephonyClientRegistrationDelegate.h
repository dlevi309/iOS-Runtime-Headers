/*
* Generated on Thursday, January 14, 2021 at 2:27:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/Frameworks/ICE.framework/ICE
*/


@protocol CoreTelephonyClientRegistrationDelegate <NSObject>
@optional
-(void)signalStrengthChanged:(id)arg1 info:(id)arg2;
-(void)displayStatusChanged:(id)arg1 status:(id)arg2;
-(void)operatorNameChanged:(id)arg1 name:(id)arg2;
-(void)enhancedVoiceLinkQualityChanged:(id)arg1 metric:(id)arg2;
-(void)customerServiceProfileChanged:(id)arg1 visible:(BOOL)arg2;
-(void)networkListAvailable:(id)arg1 list:(id)arg2;
-(void)imsRegistrationChanged:(id)arg1 info:(id)arg2;
-(void)voiceLinkQualityChanged:(id)arg1 metric:(id)arg2;
-(void)nrDisableStatusChanged:(id)arg1 status:(id)arg2;
-(void)cellMonitorUpdate:(id)arg1 info:(id)arg2;
-(void)encryptionStatusChanged:(id)arg1 info:(id)arg2;
-(void)networkReselectionNeeded:(id)arg1;
-(void)networkSelected:(id)arg1 success:(BOOL)arg2 mode:(id)arg3;
-(void)ratSelectionChanged:(id)arg1 selection:(id)arg2;
-(void)rejectCauseCodeChanged:(id)arg1 causeCode:(id)arg2;
-(void)enhancedDataLinkQualityChanged:(id)arg1 metric:(id)arg2;
-(void)cellChanged:(id)arg1 cell:(id)arg2;

@end

