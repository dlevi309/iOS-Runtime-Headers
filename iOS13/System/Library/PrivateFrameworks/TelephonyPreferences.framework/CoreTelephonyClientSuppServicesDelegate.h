/*
* Generated on Monday, March 1, 2021 at 2:35:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TelephonyPreferences.framework/TelephonyPreferences
*/


@protocol CoreTelephonyClientSuppServicesDelegate <NSObject>
@optional
-(void)suppServicesEvent:(id)arg1 event:(int)arg2 settingsType:(int)arg3 data:(id)arg4;
-(void)spcUnlockSuccessful:(id)arg1;
-(void)phoneBookSelected:(id)arg1;
-(void)phoneBookFetched:(id)arg1;
-(void)phoneBookWritten:(id)arg1;
-(void)phoneBookError:(id)arg1;
-(void)phoneNumberAvailable:(id)arg1;
-(void)phoneNumberChanged:(id)arg1;
-(void)suppServicesStarted:(id)arg1;
-(void)suppServicesCompleted:(id)arg1;
-(void)suppServicesError:(id)arg1 error:(id)arg2;

@end

