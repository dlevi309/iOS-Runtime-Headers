/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MKPointOfInterestFilter;

@interface MKLocalPointsOfInterestRequest : NSObject <NSCopying> {

	BOOL _createdFromRegion;
	double _radius;
	MKPointOfInterestFilter* _pointOfInterestFilter;
	CLLocationCoordinate2D _coordinate;
	SCD_Struct_MK15 _region;

}

@property (getter=_createdFromRegion,nonatomic,readonly) BOOL createdFromRegion;              //@synthesize createdFromRegion=_createdFromRegion - In the implementation block
@property (nonatomic,readonly) CLLocationCoordinate2D coordinate;                             //@synthesize coordinate=_coordinate - In the implementation block
@property (nonatomic,readonly) double radius;                                                 //@synthesize radius=_radius - In the implementation block
@property (nonatomic,readonly) SCD_Struct_MK9 region;                                         //@synthesize region=_region - In the implementation block
@property (nonatomic,copy) MKPointOfInterestFilter * pointOfInterestFilter;                   //@synthesize pointOfInterestFilter=_pointOfInterestFilter - In the implementation block
-(SCD_Struct_MK9)region;
-(CLLocationCoordinate2D)coordinate;
-(BOOL)_createdFromRegion;
-(BOOL)_isValidCoordinateRegion:(SCD_Struct_MK9)arg1 ;
-(double)_deriveRadiusFromCoordinateRegion:(SCD_Struct_MK9)arg1 ;
-(id)initWithCenterCoordinate:(CLLocationCoordinate2D)arg1 radius:(double)arg2 ;
-(double)radius;
-(SCD_Struct_MK9)_clampedCoordinateRegionForCoordinateRegion:(SCD_Struct_MK9)arg1 ;
-(void)setPointOfInterestFilter:(MKPointOfInterestFilter *)arg1 ;
-(id)initWithCoordinateRegion:(SCD_Struct_MK9)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(MKPointOfInterestFilter *)pointOfInterestFilter;
@end

