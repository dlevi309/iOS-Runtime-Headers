/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <libobjc.A.dylib/HKChartPoint.h>

@protocol HKGraphSeriesBlockCoordinateInfo;
@class NSArray, NSDate, NSString;

@interface HKEnumeratedValueChartPoint : NSObject <HKChartPoint> {

	NSArray* _indices;
	NSDate* _xValue;
	id<HKGraphSeriesBlockCoordinateInfo> _userInfo;

}

@property (nonatomic,retain) NSArray * indices;                                          //@synthesize indices=_indices - In the implementation block
@property (nonatomic,copy) NSDate * xValue;                                              //@synthesize xValue=_xValue - In the implementation block
@property (nonatomic,retain) id<HKGraphSeriesBlockCoordinateInfo> userInfo;              //@synthesize userInfo=_userInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<HKGraphSeriesBlockCoordinateInfo>)userInfo;
-(void)setUserInfo:(id<HKGraphSeriesBlockCoordinateInfo>)arg1 ;
-(NSArray *)indices;
-(void)setIndices:(NSArray *)arg1 ;
-(id)minYValue;
-(id)maxYValue;
-(NSDate *)xValue;
-(id)yValue;
-(void)setXValue:(NSDate *)arg1 ;
-(id)xValueAsGenericType;
-(id)minXValueAsGenericType;
-(id)maxXValueAsGenericType;
-(id)yValueForKey:(id)arg1 ;
-(id)allYValues;
@end

