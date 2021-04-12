/*
* Generated on Thursday, January 14, 2021 at 2:22:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <libobjc.A.dylib/MKGeoJSONCoverageRegion.h>

@class NSString;

@interface _MKPolygonGeoRegion : NSObject <MKGeoJSONCoverageRegion> {

	CLLocationCoordinate2D* _polygon;
	unsigned long long _vertexCount;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)_loadWithJSONObject:(id)arg1 error:(id*)arg2 ;
-(id)initWithJSONObject:(id)arg1 error:(id*)arg2 ;
-(BOOL)coordinateLiesInRegion:(CLLocationCoordinate2D)arg1 ;
-(void)dealloc;
@end

