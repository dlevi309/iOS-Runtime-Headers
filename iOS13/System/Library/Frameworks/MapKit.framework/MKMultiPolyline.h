/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
@property (nonatomic,readonly) SCD_Struct_MK6 boundingMapRect;                 //@synthesize boundingMapRect=_boundingMapRect - In the implementation block
-(id)init;
-(CLLocationCoordinate2D)coordinate;
-(NSArray *)polylines;
-(id)_initWithGeoJSONObject:(id)arg1 error:(id*)arg2 ;
-(id)initWithPolylines:(id)arg1 ;
-(SCD_Struct_MK6)boundingMapRect;
@end

