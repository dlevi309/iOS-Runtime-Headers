/*
* Generated on Thursday, January 14, 2021 at 2:24:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DataDeliveryServices.framework/DataDeliveryServices
*/


@interface DDSMobileAssetv1PredicateAdapter : NSObject
+(id)predicateForQuery:(id)arg1 compatibilityVersion:(unsigned long long)arg2 internalInstall:(BOOL)arg3 ;
+(id)predicateForKey:(id)arg1 matchingAnyStringIn:(id)arg2 ;
+(id)predicateForKey:(id)arg1 matchingAnyDictionaryIn:(id)arg2 acceptUnspecifiedValue:(BOOL)arg3 acceptUnspecifiedAttribute:(BOOL)arg4 lenientMatch:(BOOL)arg5 ;
+(id)compatibilityPredicateForCompatabilityVersion:(unsigned long long)arg1 internalInstall:(BOOL)arg2 ;
+(id)regionKeys;
+(id)predicateForKey:(id)arg1 matchingString:(id)arg2 ;
+(id)predicateForAssetQuery:(id)arg1 compatiblilityVersion:(unsigned long long)arg2 ;
+(id)extractRegionDictFromFilter:(id)arg1 ;
@end

