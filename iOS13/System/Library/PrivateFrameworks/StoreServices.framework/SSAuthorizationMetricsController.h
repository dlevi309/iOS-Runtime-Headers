/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/


@interface SSAuthorizationMetricsController : NSObject
+(id)_dialogEventForPasswordAuthorizationWithDialogId:(id)arg1 buyParams:(id)arg2 topicName:(id)arg3 userAgent:(id)arg4 ;
+(id)_dialogEventForBiometricAuthorizationWithDialogId:(id)arg1 buyParams:(id)arg2 matchState:(long long)arg3 topicName:(id)arg4 userAgent:(id)arg5 ;
+(id)_dialogEventForBiometricOptInWithResult:(BOOL)arg1 message:(id)arg2 topicName:(id)arg3 userAgent:(id)arg4 error:(id)arg5 ;
+(id)_dialogEventForPaymentSheetPresentationErrorWithBuyParams:(id)arg1 error:(id)arg2 ;
+(id)_clientIdForMetrics;
+(id)_mtTopicForBuyParams:(id)arg1 ;
+(id)_clientIDForAccount:(id)arg1 orUserID:(id)arg2 ;
+(id)authorizationDialogEventForParameters:(id)arg1 ;
+(id)dialogIdForMetricsDictionary:(id)arg1 ;
+(id)userActionDictionaryForBiometricMatchState:(unsigned long long)arg1 didBiometricsLockout:(BOOL)arg2 ;
+(id)userActionDictionaryForUserAction:(long long)arg1 didBiometricsLockout:(BOOL)arg2 ;
@end

