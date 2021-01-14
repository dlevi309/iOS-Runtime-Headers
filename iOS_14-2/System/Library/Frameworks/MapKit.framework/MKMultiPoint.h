/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKShape.h>
#import <libobjc.A.dylib/MKGeoJSONObject.h>

@class NSString;

@interface MKMultiPoint : MKShape <MKGeoJSONObject> {

	CGSize* _points;
	unsigned long long _pointCount;
	SCD_Struct_MK6 _boundingRect;
	GEOOnce_s _calculatedMapPointsLength;
	double _mapPointsLength;
	GEOOnce_s _calculatedSelfIntersecting;
	BOOL _selfIntersecting;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long pointCount;              //@synthesize pointCount=_pointCount - In the implementation block
-(CLLocationCoordinate2D)coordinate;
-(void)encodeWithCoder:(id)arg1 ;
-(void)_setPoints:(const CGSize*)arg1 count:(unsigned long long)arg2 ;
-(void)_setCoordinates:(const CLLocationCoordinate2D*)arg1 count:(unsigned long long)arg2 ;
-(void)_setBounds:(SCD_Struct_MK6)arg1 ;
-(void)_calculateBounds;
-(BOOL)_isSelfIntersecting;
-(double)_mapPointsLength;
-(id)initWithCoder:(id)arg1 ;
-(void)_pointsDidChange;
-(BOOL)intersectsMapRect:(SCD_Struct_MK6)arg1 ;
-(void)_wrapAroundTheDateline:(const CLLocationCoordinate2D*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)_determineSelfIntersecting;
-(void)getCoordinates:(CLLocationCoordinate2D*)arg1 range:(NSRange)arg2 ;
-(double)locationAtPointIndex:(unsigned long long)arg1 ;
-(id)locationsAtPointIndexes:(id)arg1 ;
-(id)_initWithGeoJSONObject:(id)arg1 error:(id*)arg2 ;
-(void)_assignPoints:(CGSize*)arg1 count:(unsigned long long)arg2 ;
-(SCD_Struct_MK6)boundingMapRect;
-(CGSize*)points;
-(unsigned long long)pointCount;
-(void)dealloc;
@end

