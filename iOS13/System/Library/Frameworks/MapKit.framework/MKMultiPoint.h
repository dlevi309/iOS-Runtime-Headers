/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long pointCount;              //@synthesize pointCount=_pointCount - In the implementation block
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CLLocationCoordinate2D)coordinate;
-(unsigned long long)pointCount;
-(CGSize*)points;
-(BOOL)intersectsMapRect:(SCD_Struct_MK6)arg1 ;
-(id)_initWithGeoJSONObject:(id)arg1 error:(id*)arg2 ;
-(void)_assignPoints:(CGSize*)arg1 count:(unsigned long long)arg2 ;
-(SCD_Struct_MK6)boundingMapRect;
-(void)_setPoints:(const CGSize*)arg1 count:(unsigned long long)arg2 ;
-(void)_setCoordinates:(const CLLocationCoordinate2D*)arg1 count:(unsigned long long)arg2 ;
-(void)_setBounds:(SCD_Struct_MK6)arg1 ;
-(void)_calculateBounds;
-(void)_wrapAroundTheDateline:(const CLLocationCoordinate2D*)arg1 count:(unsigned long long)arg2 ;
-(void)_pointsDidChange;
-(void)getCoordinates:(CLLocationCoordinate2D*)arg1 range:(NSRange)arg2 ;
@end

