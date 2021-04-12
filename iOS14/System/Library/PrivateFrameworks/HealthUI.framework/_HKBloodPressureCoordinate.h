/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <libobjc.A.dylib/HKGraphSeriesBlockCoordinate.h>

@protocol HKGraphSeriesBlockCoordinateInfo;
@class HKMinMaxCoordinate, NSString;

@interface _HKBloodPressureCoordinate : NSObject <HKGraphSeriesBlockCoordinate> {

	id<HKGraphSeriesBlockCoordinateInfo> _userInfo;
	HKMinMaxCoordinate* _systolicCoordinate;
	HKMinMaxCoordinate* _diastolicCoordinate;

}

@property (nonatomic,readonly) HKMinMaxCoordinate * systolicCoordinate;                    //@synthesize systolicCoordinate=_systolicCoordinate - In the implementation block
@property (nonatomic,readonly) HKMinMaxCoordinate * diastolicCoordinate;                   //@synthesize diastolicCoordinate=_diastolicCoordinate - In the implementation block
@property (nonatomic,readonly) double startXValue; 
@property (nonatomic,readonly) double endXValue; 
@property (nonatomic,readonly) id<HKGraphSeriesBlockCoordinateInfo> userInfo; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<HKGraphSeriesBlockCoordinateInfo>)userInfo;
-(NSString *)description;
-(double)endXValue;
-(double)startXValue;
-(id)copyWithTransform:(CGAffineTransform)arg1 roundToViewScale:(BOOL)arg2 ;
-(HKMinMaxCoordinate *)systolicCoordinate;
-(HKMinMaxCoordinate *)diastolicCoordinate;
-(id)initWithSystolicCoordinate:(id)arg1 diastolicCoordinate:(id)arg2 userInfo:(id)arg3 ;
@end

