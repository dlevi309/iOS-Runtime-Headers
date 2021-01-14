/*
* Generated on Thursday, January 14, 2021 at 2:25:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/


#import <PersonalizationPortraitInternals/PersonalizationPortraitInternals-Structs.h>
@interface PPDataDetectors : NSObject
+(void)scanString:(id)arg1 inRange:(SCD_Struct_PP18)arg2 withScanner:(DDScannerRef)arg3 options:(long long)arg4 block:(/*^block*/id)arg5 ;
+(void)addAddressComponentsInResult:(_DDResult*)arg1 toDictionary:(id)arg2 ;
+(id)addressComponentsFromString:(id)arg1 extractedAddress:(id*)arg2 ;
+(id)addressComponentsFromString:(id)arg1 extractedAddress:(id*)arg2 locale:(id)arg3 ;
+(BOOL)isValidDataDetectorsMatch:(_DDResult*)arg1 addressComponents:(id*)arg2 ;
+(BOOL)_components:(id)arg1 haveHongKongAtKey:(id)arg2 ;
+(BOOL)_componentsHaveStreetAndCityOrZip:(id)arg1 ;
@end

