/*
* Generated on Thursday, January 14, 2021 at 2:22:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	BOOL _needsStateUpdate;

}

@property (assign,setter=_setPrecisePitch:,getter=_precisePitch,nonatomic) double precisePitch;              //@synthesize pitch=_pitch - In the implementation block
@property (assign,nonatomic) CLLocationCoordinate2D centerCoordinate;                                        //@synthesize centerCoordinate=_centerCoordinate - In the implementation block
@property (assign,nonatomic) double centerCoordinateDistance; 
@property (assign,nonatomic) double heading;                                                                 //@synthesize heading=_heading - In the implementation block
@property (assign,nonatomic) double pitch; 
@property (assign,nonatomic) double altitude;                                                                //@synthesize altitude=_altitude - In the implementation block
+(id)camera;
+(BOOL)supportsSecureCoding;
+(id)_cameraLookingAtGEOMapRect:(const SCD_Struct_MK6*)arg1 aspectRatio:(float)arg2 ;
+(id)cameraLookingAtCenterCoordinate:(CLLocationCoordinate2D)arg1 fromDistance:(double)arg2 pitch:(double)arg3 heading:(double)arg4 ;
+(id)cameraLookingAtCenterCoordinate:(CLLocationCoordinate2D)arg1 fromEyeCoordinate:(CLLocationCoordinate2D)arg2 eyeAltitude:(double)arg3 ;
+(id)_cameraLookingAtMapRect:(SCD_Struct_MK6)arg1 forViewSize:(CGSize)arg2 ;
-(double)heading;
-(void)setAltitude:(double)arg1 ;
-(double)pitch;
-(double)altitude;
-(CLLocationCoordinate2D)centerCoordinate;
-(void)_setMapView:(id)arg1 ;
-(id)_mapView;
-(void)_mapViewStateChanged;
-(void)encodeWithCoder:(id)arg1 ;
-(void)_updateState;
-(BOOL)_validate;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)setPitch:(double)arg1 ;
-(void)setHeading:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setCenterCoordinate:(CLLocationCoordinate2D)arg1 ;
-(void)_setPrecisePitch:(double)arg1 ;
-(double)centerCoordinateDistance;
-(SCD_Struct_MK6)_enclosingGEOMapRectForAspectRatio:(float)arg1 ;
-(void)setCenterCoordinateDistance:(double)arg1 ;
-(double)_precisePitch;
@end

