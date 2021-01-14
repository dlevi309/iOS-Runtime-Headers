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

@interface MKMultiPolygon : MKShape <MKGeoJSONObject, MKOverlay> {

	NSArray* _polygons;
	SCD_Struct_MK6 _boundingMapRect;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSArray * polygons;                        //@synthesize polygons=_polygons - In the implementation block
@property (nonatomic,readonly) CLLocationCoordinate2D coordinate; 
@property (nonatomic,readonly) SCD_Struct_MK6 boundingMapRect;                 //@synthesize boundingMapRect=_boundingMapRect - In the implementation block
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
-(id)init;
-(CLLocationCoordinate2D)coordinate;
-(NSArray *)polygons;
-(id)_initWithGeoJSONObject:(id)arg1 error:(id*)arg2 ;
-(id)initWithPolygons:(id)arg1 ;
-(SCD_Struct_MK6)boundingMapRect;
@end

