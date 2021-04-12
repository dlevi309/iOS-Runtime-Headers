/*
* Generated on Monday, March 1, 2021 at 2:35:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGGraphNode.h>
#import <libobjc.A.dylib/PGGraphLocalizable.h>
#import <libobjc.A.dylib/PGGraphSynonymSupport.h>

@class NSArray, PVSceneTaxonomyNode, NSString;

@interface PGGraphSceneNode : PGGraphNode <PGGraphLocalizable, PGGraphSynonymSupport> {

	PVSceneTaxonomyNode* _sceneTaxonomyNode;

}

@property (nonatomic,readonly) PVSceneTaxonomyNode * sceneTaxonomyNode;                      //@synthesize sceneTaxonomyNode=_sceneTaxonomyNode - In the implementation block
@property (nonatomic,readonly) unsigned sceneIdentifier; 
@property (nonatomic,readonly) unsigned long long level; 
@property (nonatomic,readonly) BOOL isIndexed; 
@property (nonatomic,readonly) BOOL isSuitableForSuggestions; 
@property (nonatomic,readonly) unsigned long long numberOfAssets; 
@property (nonatomic,readonly) unsigned long long numberOfHighConfidenceAssets; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * localizedName; 
@property (nonatomic,readonly) NSArray * localizedSynonyms; 
+(id)suggestionWhitelistedScenes;
+(BOOL)isSceneSuitableForSuggestionsWithLabel:(id)arg1 ;
+(BOOL)isSceneSuitableForSuggestionsWithIdentifier:(unsigned)arg1 confidence:(double)arg2 ;
-(unsigned long long)level;
-(NSString *)localizedName;
-(unsigned)sceneIdentifier;
-(BOOL)isIndexed;
-(unsigned long long)numberOfAssets;
-(NSArray *)localizedSynonyms;
-(unsigned long long)numberOfHighConfidenceAssets;
-(BOOL)isSuitableForSuggestions;
-(PVSceneTaxonomyNode *)sceneTaxonomyNode;
@end

