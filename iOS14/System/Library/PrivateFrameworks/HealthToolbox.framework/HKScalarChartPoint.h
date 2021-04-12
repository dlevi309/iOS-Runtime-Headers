/*
* Generated on Thursday, January 14, 2021 at 2:27:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/

#import <HealthToolbox/HealthToolbox-Structs.h>
#import <libobjc.A.dylib/HKChartPoint.h>

@protocol HKGraphSeriesBlockCoordinateInfo;
@class NSNumber, NSString;

@interface HKScalarChartPoint : NSObject <HKChartPoint> {

	NSNumber* _xValue;
	NSNumber* _yValue;
	id<HKGraphSeriesBlockCoordinateInfo> _scalarPointInfo;

}

@property (nonatomic,readonly) NSNumber * xValue;                                                 //@synthesize xValue=_xValue - In the implementation block
@property (nonatomic,readonly) NSNumber * yValue;                                                 //@synthesize yValue=_yValue - In the implementation block
@property (nonatomic,readonly) id<HKGraphSeriesBlockCoordinateInfo> scalarPointInfo;              //@synthesize scalarPointInfo=_scalarPointInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)userInfo;
-(NSNumber *)yValue;
-(NSNumber *)xValue;
-(id)allYValues;
-(id)xValueAsGenericType;
-(id)minXValueAsGenericType;
-(id)maxXValueAsGenericType;
-(id)yValueForKey:(id)arg1 ;
-(id)minYValue;
-(id)maxYValue;
-(id)initWithPoint:(CGPoint)arg1 unitForY:(id)arg2 ;
-(id<HKGraphSeriesBlockCoordinateInfo>)scalarPointInfo;
@end

