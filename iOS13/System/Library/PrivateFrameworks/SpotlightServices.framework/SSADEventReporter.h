/*
* Generated on Monday, March 1, 2021 at 2:33:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
*/


@interface SSADEventReporter : NSObject
+(void)reportModelDeletionForType:(unsigned long long)arg1 ;
+(void)reportModelUnpackageEventWithType:(unsigned long long)arg1 ;
+(void)reportKey:(id)arg1 ;
+(void)reportModelLoadingError;
+(void)reportBadL2Models;
+(void)reportBadL3Models;
+(void)reportBadDirectivesForModelType:(unsigned long long)arg1 ;
@end

