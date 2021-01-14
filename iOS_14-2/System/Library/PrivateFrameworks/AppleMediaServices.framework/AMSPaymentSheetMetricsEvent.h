/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <AppleMediaServices/AMSMetricsEvent.h>

@interface AMSPaymentSheetMetricsEvent : AMSMetricsEvent
+(id)_timestamp;
+(id)dictionaryForBiometricMatchState:(long long)arg1 didBiometricsLockout:(BOOL)arg2 ;
+(id)dictionaryForCancellationEvent:(unsigned long long)arg1 didBiometricsLockout:(BOOL)arg2 ;
+(id)dictionaryForUserAction:(long long)arg1 didBiometricsLockout:(BOOL)arg2 ;
-(void)addDualActionSuccess:(BOOL)arg1 ;
-(void)addUserActions:(id)arg1 ;
-(void)addBiometricMatchStateFinal:(long long)arg1 ;
-(void)addClientMetadataForPurchaseInfo:(id)arg1 metricsDictionary:(id)arg2 ;
@end

