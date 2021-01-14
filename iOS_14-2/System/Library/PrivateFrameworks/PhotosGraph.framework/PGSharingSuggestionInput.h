/*
* Generated on Thursday, January 14, 2021 at 2:25:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(PGGraph *)graph;
-(PHFetchResult *)assets;
-(PHFetchResult *)moments;
-(id)description;
-(id)initWithMomentNodes:(id)arg1 ;
-(NSArray *)momentNodes;
-(id)initWithAssetLocalIdentifiers:(id)arg1 momentLocalIdentifiers:(id)arg2 andGraph:(id)arg3 ;
@end

