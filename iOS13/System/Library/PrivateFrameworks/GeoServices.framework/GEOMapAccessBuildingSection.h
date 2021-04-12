/*
* Generated on Monday, March 1, 2021 at 2:30:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/GEOMapBuildingSection.h>

@class NSString;

@interface GEOMapAccessBuildingSection : NSObject <GEOMapBuildingSection> {

	SCD_Struct_GE32* _coordinates;
	unsigned long long _coordinateCount;
	double _baseHeight;
	double _height;
	unsigned long long _sectionIndex;
	SCD_Struct_GE32 _centerCoordinate;
	double _radius;

}

@property (nonatomic,readonly) SCD_Struct_GE32 centerCoordinate;                //@synthesize centerCoordinate=_centerCoordinate - In the implementation block
@property (nonatomic,readonly) double radius;                                   //@synthesize radius=_radius - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) SCD_Struct_GE32* coordinates;                    //@synthesize coordinates=_coordinates - In the implementation block
@property (nonatomic,readonly) unsigned long long coordinateCount;              //@synthesize coordinateCount=_coordinateCount - In the implementation block
@property (nonatomic,readonly) double baseHeight;                               //@synthesize baseHeight=_baseHeight - In the implementation block
@property (nonatomic,readonly) double height;                                   //@synthesize height=_height - In the implementation block
-(void)dealloc;
-(double)height;
-(double)radius;
-(double)baseHeight;
-(SCD_Struct_GE32*)coordinates;
-(unsigned long long)coordinateCount;
-(SCD_Struct_GE32)centerCoordinate;
-(id)initWithFeature:(SCD_Struct_GE111*)arg1 sectionIndex:(unsigned long long)arg2 ;
@end

