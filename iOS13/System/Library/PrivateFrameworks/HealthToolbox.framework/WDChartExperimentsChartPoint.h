/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/

#import <libobjc.A.dylib/HKChartPoint.h>

@protocol HKGraphSeriesBlockCoordinateInfo;
@class NSDate, NSNumber, NSString;

@interface WDChartExperimentsChartPoint : NSObject <HKChartPoint> {

	NSDate* _xValue;
	NSNumber* _yValue;
	id<HKGraphSeriesBlockCoordinateInfo> _experimentInfo;

}

@property (nonatomic,readonly) NSDate * xValue;                                                  //@synthesize xValue=_xValue - In the implementation block
@property (nonatomic,readonly) NSNumber * yValue;                                                //@synthesize yValue=_yValue - In the implementation block
@property (nonatomic,readonly) id<HKGraphSeriesBlockCoordinateInfo> experimentInfo;              //@synthesize experimentInfo=_experimentInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)userInfo;
-(id)minYValue;
-(id)maxYValue;
-(NSDate *)xValue;
-(NSNumber *)yValue;
-(id)xValueAsGenericType;
-(id)minXValueAsGenericType;
-(id)maxXValueAsGenericType;
-(id)yValueForKey:(id)arg1 ;
-(id)allYValues;
-(id)initWithXValue:(id)arg1 yValue:(id)arg2 userInfo:(id)arg3 ;
-(id<HKGraphSeriesBlockCoordinateInfo>)experimentInfo;
@end

