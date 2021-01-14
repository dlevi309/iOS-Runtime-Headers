/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKShape.h>
#import <libobjc.A.dylib/MKGeoJSONObject.h>
#import <libobjc.A.dylib/MKOverlay.h>

@class NSArray, NSString;

@interface MKMultiPolyline : MKShape <MKGeoJSONObject, MKOverlay> {

	NSArray* _polylines;
	SCD_Struct_MK6 _boundingMapRect;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSArray * polylines;                       //@synthesize polylines=_polylines - In the implementation block
@property (nonatomic,readonly) CLLocationCoordinate2D coordinate; 
@property (nonatomic,readonly) SCD_Struct_MK6 boundingMapRect;                 //@synthesize boundingMapRect=_boundingMapRect - In the implementation block
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
-(id)init;
-(CLLocationCoordinate2D)coordinate;
-(NSArray *)polylines;
-(id)_initWithGeoJSONObject:(id)arg1 error:(id*)arg2 ;
-(SCD_Struct_MK6)boundingMapRect;
-(id)initWithPolylines:(id)arg1 ;
@end

