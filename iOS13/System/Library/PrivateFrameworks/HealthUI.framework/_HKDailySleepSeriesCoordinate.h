/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <libobjc.A.dylib/HKGraphSeriesBlockCoordinate.h>

@protocol HKGraphSeriesBlockCoordinateInfo;
@class NSArray, NSString;

@interface _HKDailySleepSeriesCoordinate : NSObject <HKGraphSeriesBlockCoordinate> {

	NSArray* _yValues;
	double _xValue;
	id<HKGraphSeriesBlockCoordinateInfo> _userInfo;

}

@property (nonatomic,readonly) NSArray * yValues;                                          //@synthesize yValues=_yValues - In the implementation block
@property (nonatomic,readonly) double xValue;                                              //@synthesize xValue=_xValue - In the implementation block
@property (nonatomic,readonly) id<HKGraphSeriesBlockCoordinateInfo> userInfo;              //@synthesize userInfo=_userInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double startXValue; 
@property (nonatomic,readonly) double endXValue; 
-(id<HKGraphSeriesBlockCoordinateInfo>)userInfo;
-(NSArray *)yValues;
-(double)xValue;
-(double)startXValue;
-(double)endXValue;
-(id)copyWithTransform:(CGAffineTransform)arg1 roundToViewScale:(BOOL)arg2 ;
-(id)initWithXValue:(double)arg1 yValues:(id)arg2 userInfo:(id)arg3 ;
@end

