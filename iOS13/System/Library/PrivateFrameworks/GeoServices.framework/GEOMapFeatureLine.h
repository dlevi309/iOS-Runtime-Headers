/*
* Generated on Monday, March 1, 2021 at 2:30:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


#import <GeoServices/GeoServices-Structs.h>
@interface GEOMapFeatureLine : NSObject {

	SCD_Struct_GE32* _coordinates;
	unsigned long long _coordinateCount;
	double _length;
	BOOL _isFlipped;

}

@property (nonatomic,readonly) SCD_Struct_GE32* coordinates; 
@property (nonatomic,readonly) unsigned long long coordinateCount; 
@property (nonatomic,readonly) double length; 
-(id)init;
-(void)dealloc;
-(double)length;
-(SCD_Struct_GE32*)coordinates;
-(id)_containingTile;
-(SCD_Struct_GE38*)_tilePointsForSection:(unsigned long long)arg1 withCount:(out unsigned long long*)arg2 ;
-(unsigned long long)coordinateCount;
@end

