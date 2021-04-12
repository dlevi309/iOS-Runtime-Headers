/*
* Generated on Thursday, January 14, 2021 at 2:27:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSNumber *)yValue;
-(NSDate *)xValue;
-(id)allYValues;
-(id)xValueAsGenericType;
-(id)minXValueAsGenericType;
-(id)maxXValueAsGenericType;
-(id)yValueForKey:(id)arg1 ;
-(id)minYValue;
-(id)maxYValue;
-(id)initWithXValue:(id)arg1 yValue:(id)arg2 userInfo:(id)arg3 ;
-(id<HKGraphSeriesBlockCoordinateInfo>)experimentInfo;
@end

