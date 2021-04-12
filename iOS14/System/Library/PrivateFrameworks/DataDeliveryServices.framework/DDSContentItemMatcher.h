/*
* Generated on Thursday, January 14, 2021 at 2:24:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DataDeliveryServices.framework/DataDeliveryServices
*/


@interface DDSContentItemMatcher : NSObject
+(BOOL)shouldLenientlyMatchWithContentItemsForRegion:(id)arg1 ;
+(BOOL)_anyStringIn:(id)arg1 matches:(id)arg2 acceptUnspecifiedValue:(BOOL)arg3 ;
+(BOOL)_anyDictionaryIn:(id)arg1 matches:(id)arg2 shouldLenientlyMatch:(/*^block*/id)arg3 ;
+(BOOL)_string:(id)arg1 matches:(id)arg2 acceptUnspecifiedValue:(BOOL)arg3 ;
+(BOOL)_dictionary:(id)arg1 matches:(id)arg2 acceptUnspecifiedAttribute:(BOOL)arg3 lenientMatch:(BOOL)arg4 ;
+(id)assetContentItemsMatching:(id)arg1 contentItems:(id)arg2 parentAsset:(id)arg3 ;
@end

