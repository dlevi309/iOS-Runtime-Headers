/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <libobjc.A.dylib/HKGraphSeriesBlockCoordinateInfo.h>
#import <libobjc.A.dylib/HKChartPoint.h>

@class NSNumber, NSString;

@interface HKAudiogramChartPoint : NSObject <HKGraphSeriesBlockCoordinateInfo, HKChartPoint> {

	BOOL _isLeftEar;
	BOOL _isAverage;
	NSNumber* _xValue;
	NSNumber* _yValue;

}

@property (nonatomic,readonly) NSNumber * xValue;                   //@synthesize xValue=_xValue - In the implementation block
@property (nonatomic,readonly) NSNumber * yValue;                   //@synthesize yValue=_yValue - In the implementation block
@property (assign,nonatomic) BOOL isLeftEar;                        //@synthesize isLeftEar=_isLeftEar - In the implementation block
@property (assign,nonatomic) BOOL isAverage;                        //@synthesize isAverage=_isAverage - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)axisValueFromFrequency:(double)arg1 ;
+(double)frequencyFromAxisValue:(double)arg1 ;
+(id)quantityFromAxisValue:(double)arg1 ;
-(id)userInfo;
-(id)minYValue;
-(id)maxYValue;
-(NSNumber *)xValue;
-(NSNumber *)yValue;
-(id)xValueAsGenericType;
-(id)minXValueAsGenericType;
-(id)maxXValueAsGenericType;
-(id)yValueForKey:(id)arg1 ;
-(id)allYValues;
-(id)initWithFrequency:(double)arg1 sensitivity:(double)arg2 isLeftEar:(BOOL)arg3 isAverage:(BOOL)arg4 ;
-(id)initWithXValue:(double)arg1 sensitivity:(double)arg2 isLeftEar:(BOOL)arg3 isAverage:(BOOL)arg4 ;
-(BOOL)isLeftEar;
-(void)setIsLeftEar:(BOOL)arg1 ;
-(BOOL)isAverage;
-(void)setIsAverage:(BOOL)arg1 ;
@end

