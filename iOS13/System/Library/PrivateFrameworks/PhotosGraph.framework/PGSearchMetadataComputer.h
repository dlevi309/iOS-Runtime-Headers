/*
* Generated on Monday, March 1, 2021 at 2:35:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/


@class PGGraph;

@interface PGSearchMetadataComputer : NSObject {

	PGGraph* _graph;

}

@property (readonly) PGGraph * graph;              //@synthesize graph=_graph - In the implementation block
-(PGGraph *)graph;
-(id)initWithGraph:(id)arg1 ;
-(id)searchMetadataWithOptions:(id)arg1 ;
-(id)_mePersonUUID;
-(id)_sceneWhitelist;
-(id)_blacklistedMeaningsByMeaning;
@end

