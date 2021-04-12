/*
* Generated on Thursday, January 14, 2021 at 2:25:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

