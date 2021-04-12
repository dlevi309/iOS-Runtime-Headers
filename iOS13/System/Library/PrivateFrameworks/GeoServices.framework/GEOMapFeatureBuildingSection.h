/*
* Generated on Monday, March 1, 2021 at 2:30:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


#import <GeoServices/GeoServices-Structs.h>
@interface GEOMapFeatureBuildingSection : NSObject {

	SCD_Struct_GE32* _coordinates;
	unsigned long long _coordinateCount;
	double _baseHeight;
	double _height;
	SCD_Struct_GE111* _feature;
	unsigned long long _sectionIndex;

}

@property (nonatomic,readonly) SCD_Struct_GE32* coordinates; 
@property (nonatomic,readonly) unsigned long long coordinateCount; 
@property (nonatomic,readonly) double baseHeight;                               //@synthesize baseHeight=_baseHeight - In the implementation block
@property (nonatomic,readonly) double height;                                   //@synthesize height=_height - In the implementation block
-(void)dealloc;
-(double)height;
-(double)baseHeight;
-(SCD_Struct_GE32*)coordinates;
-(unsigned long long)coordinateCount;
-(id)initWithFeature:(SCD_Struct_GE111*)arg1 sectionIndex:(unsigned long long)arg2 ;
@end

