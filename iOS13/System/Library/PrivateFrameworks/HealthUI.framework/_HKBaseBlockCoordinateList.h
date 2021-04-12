/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <HealthUI/HKGraphSeriesBlockCoordinateList.h>

@class NSArray;

@interface _HKBaseBlockCoordinateList : HKGraphSeriesBlockCoordinateList {

	NSArray* _coordinates;
	SCD_Struct_HK9 _blockPath;

}
-(id)coordinates;
-(long long)numCoordinates;
-(void)_enumerateCoordinatesWithTransform:(CGAffineTransform)arg1 chartableValueRange:(id)arg2 roundToViewScale:(BOOL)arg3 block:(/*^block*/id)arg4 ;
-(id)_coordinatesInChartableRange:(id)arg1 ;
-(long long)_numCoordinatesInChartableRange:(id)arg1 ;
-(SCD_Struct_HK9)blockPathStart;
-(SCD_Struct_HK9)blockPathEnd;
-(id)firstCoordinateWithTransform:(CGAffineTransform)arg1 roundToViewScale:(BOOL)arg2 ;
-(id)lastCoordinateWithTransform:(CGAffineTransform)arg1 roundToViewScale:(BOOL)arg2 ;
-(id)initWithCoordinates:(id)arg1 blockPath:(SCD_Struct_HK9)arg2 ;
@end

