/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MKMapView;

@interface MKMapCamera : NSObject <NSSecureCoding, NSCopying> {

	CLLocationCoordinate2D _centerCoordinate;
	double _heading;
	double _pitch;
	double _altitude;
	MKMapView* _mapView;
	BOOL _pitchAdjustsAltitude;

}

@property (assign,setter=_setPrecisePitch:,getter=_precisePitch,nonatomic) double precisePitch;              //@synthesize pitch=_pitch - In the implementation block
@property (assign,nonatomic) CLLocationCoordinate2D centerCoordinate;                                        //@synthesize centerCoordinate=_centerCoordinate - In the implementation block
@property (assign,nonatomic) double centerCoordinateDistance; 
@property (assign,nonatomic) double heading;                                                                 //@synthesize heading=_heading - In the implementation block
@property (assign,nonatomic) double pitch; 
@property (assign,nonatomic) double altitude;                                                                //@synthesize altitude=_altitude - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)camera;
+(id)_cameraLookingAtGEOMapRect:(const SCD_Struct_MK6*)arg1 aspectRatio:(float)arg2 ;
+(id)cameraLookingAtCenterCoordinate:(CLLocationCoordinate2D)arg1 fromEyeCoordinate:(CLLocationCoordinate2D)arg2 eyeAltitude:(double)arg3 ;
+(id)cameraLookingAtCenterCoordinate:(CLLocationCoordinate2D)arg1 fromDistance:(double)arg2 pitch:(double)arg3 heading:(double)arg4 ;
+(id)_cameraLookingAtMapRect:(SCD_Struct_MK6)arg1 forViewSize:(CGSize)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)pitch;
-(void)setPitch:(double)arg1 ;
-(double)altitude;
-(BOOL)_validate;
-(double)heading;
-(void)setHeading:(double)arg1 ;
-(void)setAltitude:(double)arg1 ;
-(void)_updateState;
-(CLLocationCoordinate2D)centerCoordinate;
-(void)setCenterCoordinate:(CLLocationCoordinate2D)arg1 ;
-(id)_mapView;
-(void)_setMapView:(id)arg1 ;
-(void)_setPrecisePitch:(double)arg1 ;
-(double)centerCoordinateDistance;
-(SCD_Struct_MK6)_enclosingGEOMapRectForAspectRatio:(float)arg1 ;
-(void)setCenterCoordinateDistance:(double)arg1 ;
-(double)_precisePitch;
@end

