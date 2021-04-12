/*
* Generated on Monday, March 1, 2021 at 2:34:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

