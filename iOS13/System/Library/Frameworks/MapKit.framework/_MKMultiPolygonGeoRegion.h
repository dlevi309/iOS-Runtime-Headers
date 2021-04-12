/*
* Generated on Monday, March 1, 2021 at 2:31:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <libobjc.A.dylib/MKGeoJSONCoverageRegion.h>

@class NSArray, NSString;

@interface _MKMultiPolygonGeoRegion : NSObject <MKGeoJSONCoverageRegion> {

	NSArray* _polygons;

}

@property (nonatomic,retain) NSArray * polygons;                    //@synthesize polygons=_polygons - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithContentsOfFile:(id)arg1 error:(id*)arg2 ;
-(NSArray *)polygons;
-(BOOL)coordinateLiesInRegion:(CLLocationCoordinate2D)arg1 ;
-(BOOL)_loadWithRootJSONObject:(id)arg1 error:(id*)arg2 ;
-(BOOL)_loadWithJSONObject:(id)arg1 error:(id*)arg2 ;
-(id)initWithJSONObject:(id)arg1 error:(id*)arg2 ;
-(void)setPolygons:(NSArray *)arg1 ;
@end

