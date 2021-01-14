/*
* Generated on Thursday, January 14, 2021 at 2:22:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKPolylineRenderer.h>

@class NSArray;

@interface MKGradientPolylineRenderer : MKPolylineRenderer {

	NSArray* _colors;
	NSArray* _externallySetColors;
	NSArray* _locations;
	NSArray* _externallySetLocations;

}

@property (nonatomic,copy,readonly) NSArray * locations; 
@property (nonatomic,copy,readonly) NSArray * colors; 
+(Class)_mapkitLeafClass;
-(NSArray *)locations;
-(NSArray *)colors;
-(BOOL)_canProvideVectorGeometry;
-(void)_updateVectorGeometry:(id)arg1 ;
-(void)_updateColorStops;
-(void)drawMapRect:(SCD_Struct_MK6)arg1 zoomScale:(double)arg2 inContext:(CGContextRef)arg3 ;
-(void)setColors:(id)arg1 atLocations:(id)arg2 ;
@end

