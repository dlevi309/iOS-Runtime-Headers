/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKRichComplicationRectangularDailyGraphView.h>

@class NSArray, NSNumber, NSDate, NSDateInterval;

@interface NTKHeartRateRichComplicationRectangularView : NTKRichComplicationRectangularDailyGraphView {

	double _cornerRadius;
	NSArray* _chartPoints;
	NSNumber* _highBPM;
	NSNumber* _lowBPM;
	NSDate* _measurementDate;
	NSDateInterval* _measurementDateDayInterval;

}

@property (assign,nonatomic) double cornerRadius;                                      //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (nonatomic,retain) NSArray * chartPoints;                                    //@synthesize chartPoints=_chartPoints - In the implementation block
@property (assign,nonatomic) NSNumber * highBPM;                                       //@synthesize highBPM=_highBPM - In the implementation block
@property (assign,nonatomic) NSNumber * lowBPM;                                        //@synthesize lowBPM=_lowBPM - In the implementation block
@property (nonatomic,retain) NSDate * measurementDate;                                 //@synthesize measurementDate=_measurementDate - In the implementation block
@property (nonatomic,retain) NSDateInterval * measurementDateDayInterval;              //@synthesize measurementDateDayInterval=_measurementDateDayInterval - In the implementation block
-(id)init;
-(void)setCornerRadius:(double)arg1 ;
-(double)cornerRadius;
-(void)setChartPoints:(NSArray *)arg1 ;
-(NSArray *)chartPoints;
-(void)drawGraph:(CGContextRef)arg1 rect:(CGRect)arg2 ;
-(void)loadWithMetadata:(id)arg1 ;
-(void)setMeasurementDate:(NSDate *)arg1 ;
-(NSDate *)measurementDate;
-(NSNumber *)highBPM;
-(NSNumber *)lowBPM;
-(double)_xValueForPointFromChartPoint:(id)arg1 inRect:(CGRect)arg2 ;
-(double)_yValueForPointFromChartPointValue:(id)arg1 betweenHigh:(id)arg2 andLow:(id)arg3 inRect:(CGRect)arg4 ;
-(void)_loadNoDataState;
-(void)_loadLockedState;
-(void)_loadWithMetadata:(id)arg1 ;
-(void)setHighBPM:(NSNumber *)arg1 ;
-(void)setLowBPM:(NSNumber *)arg1 ;
-(void)setMeasurementDateDayInterval:(NSDateInterval *)arg1 ;
-(void)_updateDailyLabel:(id)arg1 withBPM:(id)arg2 ;
-(NSDateInterval *)measurementDateDayInterval;
@end

