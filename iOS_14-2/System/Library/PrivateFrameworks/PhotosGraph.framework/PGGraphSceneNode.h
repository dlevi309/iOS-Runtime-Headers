/*
* Generated on Thursday, January 14, 2021 at 2:25:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGGraphOptimizedNode.h>
#import <libobjc.A.dylib/PGGraphLocalizable.h>
#import <libobjc.A.dylib/PGGraphSynonymSupport.h>

@class NSArray, NSString, PVSceneTaxonomyNode;

@interface PGGraphSceneNode : PGGraphOptimizedNode <PGGraphLocalizable, PGGraphSynonymSupport> {

	unsigned level : 8;
	NSString* _label;
	unsigned long long _level;
	PVSceneTaxonomyNode* _sceneTaxonomyNode;

}

@property (nonatomic,readonly) PVSceneTaxonomyNode * sceneTaxonomyNode;                      //@synthesize sceneTaxonomyNode=_sceneTaxonomyNode - In the implementation block
@property (nonatomic,readonly) unsigned sceneIdentifier; 
@property (nonatomic,readonly) unsigned long long level;                                     //@synthesize level=_level - In the implementation block
@property (nonatomic,readonly) BOOL isIndexed; 
@property (nonatomic,readonly) BOOL isSuitableForSuggestions; 
@property (nonatomic,readonly) unsigned long long numberOfAssets; 
@property (nonatomic,readonly) unsigned long long numberOfHighConfidenceAssets; 
@property (nonatomic,readonly) NSString * localizedName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * localizedSynonyms; 
+(id)filter;
+(BOOL)isSceneSuitableForSuggestionsWithLabel:(id)arg1 ;
+(id)suggestionWhitelistedScenes;
+(BOOL)isSceneSuitableForSuggestionsWithIdentifier:(unsigned)arg1 confidence:(double)arg2 ;
-(NSString *)localizedName;
-(BOOL)isIndexed;
-(unsigned)sceneIdentifier;
-(id)initWithLabel:(id)arg1 ;
-(NSArray *)localizedSynonyms;
-(unsigned short)domain;
-(NSString *)description;
-(unsigned long long)level;
-(PVSceneTaxonomyNode *)sceneTaxonomyNode;
-(void)setLocalProperties:(id)arg1 ;
-(id)propertyDictionary;
-(unsigned long long)numberOfHighConfidenceAssets;
-(id)momentNodes;
-(BOOL)isSuitableForSuggestions;
-(unsigned long long)numberOfAssets;
-(id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3 ;
-(void)enumerateMomentNodesUsingBlock:(/*^block*/id)arg1 ;
-(id)label;
-(BOOL)hasProperties:(id)arg1 ;
@end

