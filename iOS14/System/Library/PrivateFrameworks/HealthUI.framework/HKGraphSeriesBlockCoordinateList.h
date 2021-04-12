/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/


#import <HealthUI/HealthUI-Structs.h>
@class NSArray;

@interface HKGraphSeriesBlockCoordinateList : NSObject

@property (nonatomic,readonly) NSArray * coordinates; 
@property (nonatomic,readonly) long long numCoordinates; 
@property (nonatomic,readonly) SCD_Struct_HK12 blockPathStart; 
@property (nonatomic,readonly) SCD_Struct_HK12 blockPathEnd; 
+(id)coordinateListWithCoordinates:(id)arg1 blockPath:(SCD_Struct_HK12)arg2 ;
+(id)coordinateListByCombiningSubCoordinates:(id)arg1 chartableValueRange:(id)arg2 ;
-(void)enumerateCoordinatesWithTransform:(CGAffineTransform)arg1 roundToViewScale:(BOOL)arg2 block:(/*^block*/id)arg3 ;
-(NSArray *)coordinates;
-(long long)numCoordinates;
-(id)firstCoordinateWithTransform:(CGAffineTransform)arg1 roundToViewScale:(BOOL)arg2 ;
-(id)lastCoordinateWithTransform:(CGAffineTransform)arg1 roundToViewScale:(BOOL)arg2 ;
-(void)_enumerateCoordinatesWithTransform:(CGAffineTransform)arg1 chartableValueRange:(id)arg2 roundToViewScale:(BOOL)arg3 block:(/*^block*/id)arg4 ;
-(id)_coordinatesInChartableRange:(id)arg1 ;
-(long long)_numCoordinatesInChartableRange:(id)arg1 ;
-(SCD_Struct_HK12)blockPathStart;
-(SCD_Struct_HK12)blockPathEnd;
@end

