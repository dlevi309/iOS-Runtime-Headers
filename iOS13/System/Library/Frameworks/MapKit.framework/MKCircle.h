/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKShape.h>
#import <libobjc.A.dylib/MKOverlay.h>

@class NSString;

@interface MKCircle : MKShape <MKOverlay> {

	CLLocationCoordinate2D _coordinate;
	double _radius;
	SCD_Struct_MK6 _boundingMapRect;

}

@property (nonatomic,readonly) CLLocationCoordinate2D coordinate;              //@synthesize coordinate=_coordinate - In the implementation block
@property (nonatomic,readonly) double radius;                                  //@synthesize radius=_radius - In the implementation block
@property (nonatomic,readonly) SCD_Struct_MK6 boundingMapRect;                 //@synthesize boundingMapRect=_boundingMapRect - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
+(id)circleWithCenterCoordinate:(CLLocationCoordinate2D)arg1 radius:(double)arg2 ;
+(id)circleWithMapRect:(SCD_Struct_MK6)arg1 ;
-(CLLocationCoordinate2D)coordinate;
-(double)radius;
-(BOOL)intersectsMapRect:(SCD_Struct_MK6)arg1 ;
-(SCD_Struct_MK6)boundingMapRect;
-(id)_initWithCenterCoordinate:(CLLocationCoordinate2D)arg1 radius:(double)arg2 ;
@end

