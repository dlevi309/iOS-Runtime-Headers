/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <libobjc.A.dylib/HKGraphSeriesBlockCoordinate.h>

@protocol HKGraphSeriesBlockCoordinateInfo;
@class NSString;

@interface _HKLineSeriesBlockCoordinate : NSObject <HKGraphSeriesBlockCoordinate> {

	id<HKGraphSeriesBlockCoordinateInfo> _userInfo;
	CGPoint _coordinate;

}

@property (nonatomic,readonly) CGPoint coordinate;                                         //@synthesize coordinate=_coordinate - In the implementation block
@property (nonatomic,readonly) double startXValue; 
@property (nonatomic,readonly) double endXValue; 
@property (nonatomic,readonly) id<HKGraphSeriesBlockCoordinateInfo> userInfo; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<HKGraphSeriesBlockCoordinateInfo>)userInfo;
-(CGPoint)coordinate;
-(NSString *)description;
-(double)minYValue;
-(double)maxYValue;
-(double)endXValue;
-(double)startXValue;
-(id)copyWithTransform:(CGAffineTransform)arg1 roundToViewScale:(BOOL)arg2 ;
-(id)initWithCoordinate:(CGPoint)arg1 userInfo:(id)arg2 ;
@end

