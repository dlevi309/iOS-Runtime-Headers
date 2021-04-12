/*
* Generated on Thursday, January 14, 2021 at 2:26:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/


@interface WFMeasurementUnit : NSObject
+(id)unitFromString:(id)arg1 ;
+(id)unitTypeForUnitClass:(Class)arg1 ;
+(id)defaultUnitForUnitType:(id)arg1 ;
+(id)availableUnitsForUnitType:(id)arg1 ;
+(id)unitFromString:(id)arg1 unitType:(id)arg2 caseSensitive:(BOOL)arg3 ;
+(id)availableUnitTypes;
+(Class)unitClassForUnitType:(id)arg1 ;
+(id)localizedStringForUnitType:(id)arg1 ;
+(id)unitTypeMap;
+(id)availableUnitsForUnitType:(id)arg1 cacheResult:(BOOL)arg2 ;
+(BOOL)usesMetricSystemForUnitType:(id)arg1 ;
@end

