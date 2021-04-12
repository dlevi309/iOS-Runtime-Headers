/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/


@interface HMPredicateUtilities : NSObject
+(BOOL)validatePredicate:(id)arg1 ;
+(id)significantEventTypesInComparisonPredicate:(id)arg1 ;
+(id)personFamiliarityOptionsInComparisonPredicate:(id)arg1 ;
+(id)rewritePredicateForClient:(id)arg1 home:(id)arg2 ;
+(id)rewritePredicateForDaemon:(id)arg1 characteristicIsInvalid:(BOOL*)arg2 ;
+(BOOL)containsPresenceEvents:(id)arg1 ;
+(id)bitwiseAndValueWithKeyPath:(id)arg1 inPredicate:(id)arg2 validValues:(long long)arg3 ;
+(id)bitwiseAndValueWithKeyPath:(id)arg1 inComparisonPredicate:(id)arg2 validValues:(long long)arg3 ;
+(BOOL)areOnlyHourAndMinuteSet:(id)arg1 ;
@end

