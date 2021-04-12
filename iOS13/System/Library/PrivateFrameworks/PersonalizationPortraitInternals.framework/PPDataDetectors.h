/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/


#import <PersonalizationPortraitInternals/PersonalizationPortraitInternals-Structs.h>
@interface PPDataDetectors : NSObject
+(void)scanString:(id)arg1 inRange:(SCD_Struct_PP7)arg2 withScanner:(DDScannerRef)arg3 options:(long long)arg4 block:(/*^block*/id)arg5 ;
+(void)addAddressComponentsInResult:(_DDResult*)arg1 toDictionary:(id)arg2 ;
+(id)addressComponentsFromString:(id)arg1 extractedAddress:(id*)arg2 ;
+(id)addressComponentsFromString:(id)arg1 extractedAddress:(id*)arg2 locale:(id)arg3 ;
+(BOOL)isValidDataDetectorsMatch:(_DDResult*)arg1 addressComponents:(id*)arg2 ;
+(BOOL)_components:(id)arg1 haveHongKongAtKey:(id)arg2 ;
+(BOOL)_componentsHaveStreetAndCityOrZip:(id)arg1 ;
@end

