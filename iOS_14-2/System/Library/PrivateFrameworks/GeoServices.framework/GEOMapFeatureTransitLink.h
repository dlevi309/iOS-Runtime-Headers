/*
* Generated on Thursday, January 14, 2021 at 2:21:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOMapFeatureLine.h>

@class NSString;

@interface GEOMapFeatureTransitLink : GEOMapFeatureLine {

	SCD_Struct_GE166* _transitLink;
	unsigned long long _lineIndex;

}

@property (nonatomic,readonly) GEOTileKey tileKey; 
@property (nonatomic,readonly) SCD_Struct_GE166* transitLink; 
@property (nonatomic,readonly) NSString * internalLineName; 
-(GEOTileKey)tileKey;
-(SCD_Struct_GE166*)transitLink;
-(id)initWithTransitLink:(SCD_Struct_GE166*)arg1 lineIndex:(unsigned long long)arg2 ;
-(id)_containingTile;
-(SCD_Struct_GE204*)_tilePointsForSection:(unsigned long long)arg1 withCount:(out unsigned long long*)arg2 ;
-(NSString *)internalLineName;
-(void)dealloc;
@end

