/*
* Generated on Monday, March 1, 2021 at 2:35:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/


@class NSArray, PHFetchResult, PGGraph;

@interface PGSharingSuggestionInput : NSObject {

	NSArray* _assetLocalIdentifiers;
	NSArray* _momentLocalIdentifiers;
	NSArray* _momentNodes;
	PHFetchResult* _assets;
	PHFetchResult* _moments;
	PGGraph* _graph;

}

@property (nonatomic,readonly) PGGraph * graph;                      //@synthesize graph=_graph - In the implementation block
@property (nonatomic,readonly) NSArray * momentNodes; 
@property (nonatomic,readonly) PHFetchResult * assets; 
@property (nonatomic,readonly) PHFetchResult * moments; 
-(id)description;
-(PGGraph *)graph;
-(PHFetchResult *)assets;
-(PHFetchResult *)moments;
-(NSArray *)momentNodes;
-(id)initWithAssetLocalIdentifiers:(id)arg1 momentLocalIdentifiers:(id)arg2 andGraph:(id)arg3 ;
-(id)initWithMomentNodes:(id)arg1 ;
@end

