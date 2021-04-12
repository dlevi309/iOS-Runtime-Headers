/*
* Generated on Monday, March 1, 2021 at 2:34:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DataDeliveryServices.framework/DataDeliveryServices
*/


@interface DDSContentItemMatcher : NSObject
+(BOOL)shouldLenientlyMatchWithContentItemsForRegion:(id)arg1 ;
+(BOOL)_anyDictionaryIn:(id)arg1 matches:(id)arg2 shouldLenientlyMatch:(/*^block*/id)arg3 ;
+(BOOL)_anyStringIn:(id)arg1 matches:(id)arg2 acceptUnspecifiedValue:(BOOL)arg3 ;
+(BOOL)_string:(id)arg1 matches:(id)arg2 acceptUnspecifiedValue:(BOOL)arg3 ;
+(BOOL)_dictionary:(id)arg1 matches:(id)arg2 acceptUnspecifiedAttribute:(BOOL)arg3 lenientMatch:(BOOL)arg4 ;
+(id)assetContentItemsMatching:(id)arg1 contentItems:(id)arg2 parentAsset:(id)arg3 ;
@end

