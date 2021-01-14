/*
* Generated on Thursday, January 14, 2021 at 2:20:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface GEOComposedRouteEVStepInfo : NSObject <NSSecureCoding> {

	unsigned _remainingBatteryPercentage;
	unsigned _remainingBatteryCharge;
	double _remainingTravelRange;

}

@property (nonatomic,readonly) unsigned remainingBatteryCharge;                  //@synthesize remainingBatteryCharge=_remainingBatteryCharge - In the implementation block
@property (nonatomic,readonly) unsigned remainingBatteryPercentage;              //@synthesize remainingBatteryPercentage=_remainingBatteryPercentage - In the implementation block
@property (nonatomic,readonly) double remainingTravelRange;                      //@synthesize remainingTravelRange=_remainingTravelRange - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithGeoETAStep:(id)arg1 ;
-(unsigned)remainingBatteryCharge;
-(unsigned)remainingBatteryPercentage;
-(double)remainingTravelRange;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithEVStateInfo:(id)arg1 ;
-(id)initWithGeoStep:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

