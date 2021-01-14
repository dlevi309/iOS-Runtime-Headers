/*
* Generated on Thursday, January 14, 2021 at 2:22:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class VKCameraRegionRestriction;

@interface MKMapCameraBoundary : NSObject <NSSecureCoding, NSCopying> {

	VKCameraRegionRestriction* _vkRestriction;
	SCD_Struct_MK6 _mapRect;
	SCD_Struct_MK15 _region;

}

@property (getter=_isEmpty,nonatomic,readonly) BOOL _empty; 
@property (nonatomic,readonly) SCD_Struct_MK6 mapRect;                   //@synthesize mapRect=_mapRect - In the implementation block
@property (nonatomic,readonly) SCD_Struct_MK9 region;                    //@synthesize region=_region - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)_isEmpty;
-(SCD_Struct_MK6)mapRect;
-(SCD_Struct_MK9)region;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqualToMapCameraBoundary:(id)arg1 ;
-(BOOL)isValidCoordinateRegion:(SCD_Struct_MK9)arg1 ;
-(SCD_Struct_MK6)_clampedMapRectForMapRect:(SCD_Struct_MK6)arg1 ;
-(BOOL)_containsCoordinate:(CLLocationCoordinate2D)arg1 ;
-(BOOL)isValidMapRect:(SCD_Struct_MK6)arg1 ;
-(id)_vkRegionRestriction;
-(SCD_Struct_MK9)_clampedCoordinateRegionForCoordinateRegion:(SCD_Struct_MK9)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithCoordinateRegion:(SCD_Struct_MK9)arg1 ;
-(CLLocationCoordinate2D)_clampedCoordinateForCoordinate:(CLLocationCoordinate2D)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithMapRect:(SCD_Struct_MK6)arg1 ;
@end

