/*
* Generated on Monday, March 1, 2021 at 2:35:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/


@class NSArray, CLCircularRegion;

@interface PGAssetCluster : NSObject {

	NSArray* _assets;
	CLCircularRegion* _region;

}

@property (nonatomic,retain,readonly) NSArray * assets;                       //@synthesize assets=_assets - In the implementation block
@property (nonatomic,retain,readonly) CLCircularRegion * region;              //@synthesize region=_region - In the implementation block
-(CLCircularRegion *)region;
-(NSArray *)assets;
-(id)initWithAssets:(id)arg1 region:(id)arg2 ;
@end

