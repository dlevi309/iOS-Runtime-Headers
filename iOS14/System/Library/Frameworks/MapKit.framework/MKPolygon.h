/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKMultiPoint.h>
#import <libobjc.A.dylib/MKGeoJSONObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/MKOverlay.h>

@class NSArray, NSString;

@interface MKPolygon : MKMultiPoint <MKGeoJSONObject, NSSecureCoding, MKOverlay> {

	CLLocationCoordinate2D _centroid;
	NSArray* _interiorPolygons;
	BOOL _isDefinitelyConvex;
	GEOOnce_s _determinedSimple;
	BOOL _simple;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL _isDefinitelyConvex;                         //@synthesize isDefinitelyConvex=_isDefinitelyConvex - In the implementation block
@property (getter=_isSimple,nonatomic,readonly) BOOL simple;                   //@synthesize simple=_simple - In the implementation block
@property (readonly) NSArray * interiorPolygons;                               //@synthesize interiorPolygons=_interiorPolygons - In the implementation block
@property (nonatomic,readonly) CLLocationCoordinate2D coordinate; 
@property (nonatomic,readonly) SCD_Struct_MK6 boundingMapRect; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
+(BOOL)supportsSecureCoding;
+(id)polygonWithPoints:(const CGSize*)arg1 count:(unsigned long long)arg2 interiorPolygons:(id)arg3 ;
+(id)polygonWithCoordinates:(const CLLocationCoordinate2D*)arg1 count:(unsigned long long)arg2 interiorPolygons:(id)arg3 ;
+(id)polygonWithPoints:(const CGSize*)arg1 count:(unsigned long long)arg2 ;
+(id)polygonWithCoordinates:(const CLLocationCoordinate2D*)arg1 count:(unsigned long long)arg2 ;
+(id)polygonEnclosingMapPoints:(CGSize*)arg1 count:(unsigned long long)arg2 ;
+(id)_polygonWithMapRect:(SCD_Struct_MK6)arg1 ;
-(CLLocationCoordinate2D)coordinate;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)_isSimple;
-(void)_calculateBounds;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)intersectsMapRect:(SCD_Struct_MK6)arg1 ;
-(BOOL)_determineSelfIntersecting;
-(id)_initWithGeoJSONObject:(id)arg1 error:(id*)arg2 ;
-(id)_initWithGeoJSONCoordinateArrays:(id)arg1 error:(id*)arg2 ;
-(SCD_Struct_MK6)boundingMapRect;
-(id)_initWithPointsNoCopy:(CGSize*)arg1 count:(unsigned long long)arg2 interiorPolygons:(id)arg3 ;
-(void)set_isDefinitelyConvex:(BOOL)arg1 ;
-(BOOL)_isDefinitelyConvex;
-(void)_determineSimple;
-(NSArray *)interiorPolygons;
@end

