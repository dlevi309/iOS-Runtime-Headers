/*
* Generated on Thursday, January 14, 2021 at 2:22:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/


@protocol CoreTelephonyClientSuppServicesDelegate <NSObject>
@optional
-(void)phoneNumberChanged:(id)arg1;
-(void)phoneNumberAvailable:(id)arg1;
-(void)suppServicesError:(id)arg1 error:(id)arg2;
-(void)phoneBookError:(id)arg1;
-(void)phoneBookFetched:(id)arg1;
-(void)phoneBookWritten:(id)arg1;
-(void)phoneBookSelected:(id)arg1;
-(void)spcUnlockSuccessful:(id)arg1;
-(void)suppServicesCompleted:(id)arg1;
-(void)suppServicesEvent:(id)arg1 event:(int)arg2 settingsType:(int)arg3 data:(id)arg4;
-(void)suppServicesStarted:(id)arg1;

@end

