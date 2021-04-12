/*
* Generated on Thursday, January 14, 2021 at 2:24:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID;

@interface MNRouteDistanceInfo : NSObject <NSSecureCoding> {

	unsigned long long _legIndex;
	NSUUID* _routeID;
	double _distanceRemainingToEndOfLeg;
	double _distanceRemainingToEndOfRoute;

}

@property (nonatomic,readonly) double distanceRemainingToEndOfLeg;                //@synthesize distanceRemainingToEndOfLeg=_distanceRemainingToEndOfLeg - In the implementation block
@property (nonatomic,readonly) double distanceRemainingToEndOfRoute;              //@synthesize distanceRemainingToEndOfRoute=_distanceRemainingToEndOfRoute - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(double)distanceRemainingToEndOfRoute;
-(double)distanceRemainingToEndOfLeg;
-(id)initWithDistanceRemainingToEndOfLeg:(double)arg1 distanceRemainingToEndOfRoute:(double)arg2 forLegIndex:(unsigned long long)arg3 forRouteID:(id)arg4 ;
@end

