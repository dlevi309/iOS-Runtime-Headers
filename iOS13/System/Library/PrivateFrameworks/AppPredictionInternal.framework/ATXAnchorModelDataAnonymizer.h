/*
* Generated on Monday, March 1, 2021 at 2:33:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/


@interface ATXAnchorModelDataAnonymizer : NSObject
+(BOOL)isFirstPartyApp:(id)arg1 ;
+(id)readDeviceSpecificSalt;
+(id)setSaltToUserDefaults:(id)arg1 scheme:(id)arg2 ;
+(void)anonymizeMessage:(id)arg1 ;
+(void)_hashAndSaltActionKeyMetadataIfNeededInList:(id)arg1 withSalt:(id)arg2 ;
+(BOOL)shouldAnonymizeBundle:(id)arg1 ;
+(BOOL)shouldAnonymizeActionType:(id)arg1 forBundleId:(id)arg2 ;
@end

