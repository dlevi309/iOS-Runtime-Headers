/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <HealthUI/HKGraphSeriesBlockCoordinateList.h>

@class NSArray;

@interface _HKBaseBlockCoordinateList : HKGraphSeriesBlockCoordinateList {

	NSArray* _coordinates;
	SCD_Struct_HK12 _blockPath;

}
-(id)coordinates;
-(long long)numCoordinates;
-(id)firstCoordinateWithTransform:(CGAffineTransform)arg1 roundToViewScale:(BOOL)arg2 ;
-(id)lastCoordinateWithTransform:(CGAffineTransform)arg1 roundToViewScale:(BOOL)arg2 ;
-(void)_enumerateCoordinatesWithTransform:(CGAffineTransform)arg1 chartableValueRange:(id)arg2 roundToViewScale:(BOOL)arg3 block:(/*^block*/id)arg4 ;
-(id)_coordinatesInChartableRange:(id)arg1 ;
-(long long)_numCoordinatesInChartableRange:(id)arg1 ;
-(SCD_Struct_HK12)blockPathStart;
-(SCD_Struct_HK12)blockPathEnd;
-(id)initWithCoordinates:(id)arg1 blockPath:(SCD_Struct_HK12)arg2 ;
@end

