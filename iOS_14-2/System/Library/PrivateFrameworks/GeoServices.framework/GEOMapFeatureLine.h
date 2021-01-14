/*
* Generated on Thursday, January 14, 2021 at 2:20:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


#import <GeoServices/GeoServices-Structs.h>
@interface GEOMapFeatureLine : NSObject {

	GEOCoarseLocationLatLng* _coordinates;
	unsigned long long _coordinateCount;
	double _length;
	BOOL _isFlipped;

}

@property (nonatomic,readonly) GEOCoarseLocationLatLng* coordinates; 
@property (nonatomic,readonly) unsigned long long coordinateCount; 
@property (nonatomic,readonly) double length; 
-(id)init;
-(double)length;
-(GEOCoarseLocationLatLng*)coordinates;
-(id)_containingTile;
-(SCD_Struct_GE34*)_tilePointsForSection:(unsigned long long)arg1 withCount:(out unsigned long long*)arg2 ;
-(unsigned long long)coordinateCount;
-(void)dealloc;
@end

