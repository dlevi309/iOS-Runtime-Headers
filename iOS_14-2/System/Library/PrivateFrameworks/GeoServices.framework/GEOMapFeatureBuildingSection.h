/*
* Generated on Thursday, January 14, 2021 at 2:20:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


#import <GeoServices/GeoServices-Structs.h>
@interface GEOMapFeatureBuildingSection : NSObject {

	GEOCoarseLocationLatLng* _coordinates;
	unsigned long long _coordinateCount;
	double _baseHeight;
	double _height;
	SCD_Struct_GE112* _feature;
	unsigned long long _sectionIndex;

}

@property (nonatomic,readonly) GEOCoarseLocationLatLng* coordinates; 
@property (nonatomic,readonly) unsigned long long coordinateCount; 
@property (nonatomic,readonly) double baseHeight;                                 //@synthesize baseHeight=_baseHeight - In the implementation block
@property (nonatomic,readonly) double height;                                     //@synthesize height=_height - In the implementation block
-(double)height;
-(GEOCoarseLocationLatLng*)coordinates;
-(double)baseHeight;
-(unsigned long long)coordinateCount;
-(id)initWithFeature:(SCD_Struct_GE112*)arg1 sectionIndex:(unsigned long long)arg2 ;
-(void)dealloc;
@end

