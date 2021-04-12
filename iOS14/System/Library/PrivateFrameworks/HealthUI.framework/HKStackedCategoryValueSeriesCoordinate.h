/*
* Generated on Thursday, January 14, 2021 at 2:24:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <libobjc.A.dylib/HKGraphSeriesBlockCoordinate.h>

@protocol HKGraphSeriesBlockCoordinateInfo;
@class NSString;

@interface HKStackedCategoryValueSeriesCoordinate : NSObject <HKGraphSeriesBlockCoordinate> {

	long long _pointStyle;
	id<HKGraphSeriesBlockCoordinateInfo> _userInfo;
	CGPoint _start;
	CGPoint _end;

}

@property (nonatomic,readonly) CGPoint start;                                              //@synthesize start=_start - In the implementation block
@property (nonatomic,readonly) CGPoint end;                                                //@synthesize end=_end - In the implementation block
@property (nonatomic,readonly) long long pointStyle;                                       //@synthesize pointStyle=_pointStyle - In the implementation block
@property (nonatomic,readonly) id<HKGraphSeriesBlockCoordinateInfo> userInfo;              //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,readonly) double startXValue; 
@property (nonatomic,readonly) double endXValue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGPoint)end;
-(id<HKGraphSeriesBlockCoordinateInfo>)userInfo;
-(CGPoint)start;
-(NSString *)description;
-(double)endXValue;
-(double)startXValue;
-(id)copyWithTransform:(CGAffineTransform)arg1 roundToViewScale:(BOOL)arg2 ;
-(long long)pointStyle;
-(id)initWithStart:(CGPoint)arg1 end:(CGPoint)arg2 pointStyle:(long long)arg3 userInfo:(id)arg4 ;
@end

