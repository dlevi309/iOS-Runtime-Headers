/*
* Generated on Thursday, January 14, 2021 at 2:25:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/


@class NSArray, CLCircularRegion;

@interface PGAssetCluster : NSObject {

	NSArray* _assets;
	CLCircularRegion* _region;

}

@property (nonatomic,retain,readonly) NSArray * assets;                       //@synthesize assets=_assets - In the implementation block
@property (nonatomic,retain,readonly) CLCircularRegion * region;              //@synthesize region=_region - In the implementation block
-(NSArray *)assets;
-(CLCircularRegion *)region;
-(id)initWithAssets:(id)arg1 region:(id)arg2 ;
@end

