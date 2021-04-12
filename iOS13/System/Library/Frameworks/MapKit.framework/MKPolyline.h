/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKMultiPoint.h>
#import <libobjc.A.dylib/MKGeoJSONObject.h>
#import <libobjc.A.dylib/MKOverlay.h>

@class NSString;

@interface MKPolyline : MKMultiPoint <MKGeoJSONObject, MKOverlay>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CLLocationCoordinate2D coordinate; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
@property (nonatomic,readonly) SCD_Struct_MK6 boundingMapRect; 
+(id)polylineWithCoordinates:(const CLLocationCoordinate2D*)arg1 count:(unsigned long long)arg2 ;
+(id)polylineWithPoints:(const CGSize*)arg1 count:(unsigned long long)arg2 ;
-(CLLocationCoordinate2D)coordinate;
-(BOOL)intersectsMapRect:(SCD_Struct_MK6)arg1 ;
-(id)_initWithGeoJSONObject:(id)arg1 error:(id*)arg2 ;
-(id)_initWithGeoJSONPoints:(id)arg1 error:(id*)arg2 ;
-(SCD_Struct_MK6)boundingMapRect;
-(void)_calculateBounds;
@end

