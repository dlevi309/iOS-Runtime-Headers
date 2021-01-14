/*
* Generated on Thursday, January 14, 2021 at 2:21:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
*/

#import <CoreLocation/CoreLocation-Structs.h>
#import <CoreLocation/CLRegion.h>

@interface CLCircularRegion : CLRegion

@property (nonatomic,readonly) CLLocationCoordinate2D center; 
@property (nonatomic,readonly) double radius; 
+(BOOL)supportsSecureCoding;
-(id)initForLowPowerWithCenter:(CLLocationCoordinate2D)arg1 radius:(double)arg2 identifier:(id)arg3 ;
-(CLLocationCoordinate2D)center;
-(id)initNearbyAllowedWithCenter:(CLLocationCoordinate2D)arg1 radius:(double)arg2 identifier:(id)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCenter:(CLLocationCoordinate2D)arg1 radius:(double)arg2 identifier:(id)arg3 ;
-(BOOL)containsCoordinate:(CLLocationCoordinate2D)arg1 ;
-(double)radius;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isLowPower;
@end

