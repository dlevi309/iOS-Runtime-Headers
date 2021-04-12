/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)minYValue;
-(id)maxYValue;
-(NSNumber *)xValue;
-(NSNumber *)yValue;
-(id)xValueAsGenericType;
-(id)minXValueAsGenericType;
-(id)maxXValueAsGenericType;
-(id)yValueForKey:(id)arg1 ;
-(id)allYValues;
-(id)initWithPoint:(CGPoint)arg1 unitForY:(id)arg2 ;
-(id<HKGraphSeriesBlockCoordinateInfo>)scalarPointInfo;
@end

