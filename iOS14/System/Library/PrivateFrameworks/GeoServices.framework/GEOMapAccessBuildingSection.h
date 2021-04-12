/*
* Generated on Thursday, January 14, 2021 at 2:20:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/GEOMapBuildingSection.h>

@class NSString;

@interface GEOMapAccessBuildingSection : NSObject <GEOMapBuildingSection> {

	GEOCoarseLocationLatLng* _coordinates;
	unsigned long long _coordinateCount;
	double _baseHeight;
	double _height;
	unsigned long long _sectionIndex;
	GEOCoarseLocationLatLng _centerCoordinate;
	double _radius;

}

@property (nonatomic,readonly) GEOCoarseLocationLatLng centerCoordinate;              //@synthesize centerCoordinate=_centerCoordinate - In the implementation block
@property (nonatomic,readonly) double radius;                                         //@synthesize radius=_radius - In the implementation block
@property (nonatomic,readonly) GEOCoarseLocationLatLng* coordinates;                  //@synthesize coordinates=_coordinates - In the implementation block
@property (nonatomic,readonly) unsigned long long coordinateCount;                    //@synthesize coordinateCount=_coordinateCount - In the implementation block
@property (nonatomic,readonly) double baseHeight;                                     //@synthesize baseHeight=_baseHeight - In the implementation block
@property (nonatomic,readonly) double height;                                         //@synthesize height=_height - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(GEOCoarseLocationLatLng)centerCoordinate;
-(double)height;
-(GEOCoarseLocationLatLng*)coordinates;
-(double)baseHeight;
-(double)radius;
-(unsigned long long)coordinateCount;
-(id)initWithFeature:(SCD_Struct_GE112*)arg1 sectionIndex:(unsigned long long)arg2 ;
-(void)dealloc;
@end

