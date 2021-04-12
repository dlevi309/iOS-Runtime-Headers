/*
* Generated on Monday, March 1, 2021 at 2:30:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOMapFeatureLine.h>

@class NSString;

@interface GEOMapFeatureTransitLink : GEOMapFeatureLine {

	SCD_Struct_GE162* _transitLink;
	unsigned long long _lineIndex;

}

@property (nonatomic,readonly) GEOTileKey tileKey; 
@property (nonatomic,readonly) SCD_Struct_GE162* transitLink; 
@property (nonatomic,readonly) NSString * internalLineName; 
-(void)dealloc;
-(GEOTileKey)tileKey;
-(id)initWithTransitLink:(SCD_Struct_GE162*)arg1 lineIndex:(unsigned long long)arg2 ;
-(id)_containingTile;
-(SCD_Struct_GE200*)_tilePointsForSection:(unsigned long long)arg1 withCount:(out unsigned long long*)arg2 ;
-(NSString *)internalLineName;
-(SCD_Struct_GE162*)transitLink;
@end

