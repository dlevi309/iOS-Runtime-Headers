/*
* Generated on Thursday, January 14, 2021 at 2:25:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/


@class PGGraph, PGSearchComputationCache, NSDictionary;

@interface PGSearchKeywordComputer : NSObject {

	PGGraph* _graph;
	PGSearchComputationCache* _searchComputationCache;
	NSDictionary* _personLocalIdentifiersBySocialGroupUUID;

}

@property (nonatomic,readonly) NSDictionary * personLocalIdentifiersBySocialGroupUUID;              //@synthesize personLocalIdentifiersBySocialGroupUUID=_personLocalIdentifiersBySocialGroupUUID - In the implementation block
@property (nonatomic,readonly) PGSearchComputationCache * searchComputationCache;                   //@synthesize searchComputationCache=_searchComputationCache - In the implementation block
-(id)searchKeywordsByEventWithEventUUIDs:(id)arg1 ofType:(unsigned long long)arg2 ;
-(NSDictionary *)personLocalIdentifiersBySocialGroupUUID;
-(id)initWithGraph:(id)arg1 searchComputationCache:(id)arg2 ;
-(id)searchableAssetUUIDsBySocialGroupWithEventUUIDs:(id)arg1 ofType:(unsigned long long)arg2 isFullAnalysis:(BOOL)arg3 ;
-(PGSearchComputationCache *)searchComputationCache;
-(id)assetSearchKeywordsByMomentUUIDWithEventUUIDs:(id)arg1 ofType:(unsigned long long)arg2 ;
-(void)_enumerateBusinessAndPublicEventKeywordsForEvent:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)eventNodeForUUID:(id)arg1 ofType:(unsigned long long)arg2 ;
-(id)_personUUIDsInSocialGroupNode:(id)arg1 ;
@end

