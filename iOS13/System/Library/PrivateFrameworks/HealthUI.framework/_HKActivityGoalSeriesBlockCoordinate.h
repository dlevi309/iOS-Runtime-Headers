/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <libobjc.A.dylib/HKGraphSeriesBlockCoordinate.h>

@protocol HKGraphSeriesBlockCoordinateInfo;
@class NSString;

@interface _HKActivityGoalSeriesBlockCoordinate : NSObject <HKGraphSeriesBlockCoordinate> {

	id<HKGraphSeriesBlockCoordinateInfo> _userInfo;
	CGPoint _coordinate;

}

@property (nonatomic,readonly) CGPoint coordinate;                                         //@synthesize coordinate=_coordinate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double startXValue; 
@property (nonatomic,readonly) double endXValue; 
@property (nonatomic,readonly) id<HKGraphSeriesBlockCoordinateInfo> userInfo; 
-(NSString *)description;
-(id<HKGraphSeriesBlockCoordinateInfo>)userInfo;
-(CGPoint)coordinate;
-(double)minYValue;
-(double)maxYValue;
-(double)startXValue;
-(double)endXValue;
-(id)copyWithTransform:(CGAffineTransform)arg1 roundToViewScale:(BOOL)arg2 ;
-(id)initWithCoordinate:(CGPoint)arg1 userInfo:(id)arg2 ;
@end

