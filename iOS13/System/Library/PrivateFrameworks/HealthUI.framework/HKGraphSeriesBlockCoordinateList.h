/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/


#import <HealthUI/HealthUI-Structs.h>
@class NSArray;

@interface HKGraphSeriesBlockCoordinateList : NSObject

@property (nonatomic,readonly) NSArray * coordinates; 
@property (nonatomic,readonly) long long numCoordinates; 
@property (nonatomic,readonly) SCD_Struct_HK9 blockPathStart; 
@property (nonatomic,readonly) SCD_Struct_HK9 blockPathEnd; 
+(id)coordinateListWithCoordinates:(id)arg1 blockPath:(SCD_Struct_HK9)arg2 ;
+(id)coordinateListByCombiningSubCoordinates:(id)arg1 chartableValueRange:(id)arg2 ;
-(NSArray *)coordinates;
-(void)enumerateCoordinatesWithTransform:(CGAffineTransform)arg1 roundToViewScale:(BOOL)arg2 block:(/*^block*/id)arg3 ;
-(long long)numCoordinates;
-(void)_enumerateCoordinatesWithTransform:(CGAffineTransform)arg1 chartableValueRange:(id)arg2 roundToViewScale:(BOOL)arg3 block:(/*^block*/id)arg4 ;
-(id)_coordinatesInChartableRange:(id)arg1 ;
-(long long)_numCoordinatesInChartableRange:(id)arg1 ;
-(SCD_Struct_HK9)blockPathStart;
-(SCD_Struct_HK9)blockPathEnd;
-(id)firstCoordinateWithTransform:(CGAffineTransform)arg1 roundToViewScale:(BOOL)arg2 ;
-(id)lastCoordinateWithTransform:(CGAffineTransform)arg1 roundToViewScale:(BOOL)arg2 ;
@end

