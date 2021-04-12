/*
* Generated on Monday, March 1, 2021 at 2:35:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGGraphNode.h>
#import <libobjc.A.dylib/PGGraphPortraitTopic.h>
#import <libobjc.A.dylib/PGGraphLocalizable.h>
#import <libobjc.A.dylib/PGGraphSynonymSupport.h>

@class NSString, NSArray;

@interface PGGraphMeaningNode : PGGraphNode <PGGraphPortraitTopic, PGGraphLocalizable, PGGraphSynonymSupport> {

	long long _isVeryMeaningfulCachedValue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * pg_topic; 
@property (assign,nonatomic) long long isVeryMeaningfulCachedValue;                      //@synthesize isVeryMeaningfulCachedValue=_isVeryMeaningfulCachedValue - In the implementation block
@property (readonly) PGGraphMeaningNode * parentMeaningNode; 
@property (getter=isVeryMeaningful,nonatomic,readonly) BOOL veryMeaningful; 
@property (nonatomic,readonly) NSString * localizedName; 
@property (nonatomic,readonly) NSArray * localizedSynonyms; 
+(id)meaningLabelsForMeaningNodes:(id)arg1 ;
-(NSString *)localizedName;
-(NSArray *)localizedSynonyms;
-(id)associatedNodesForRemoval;
-(void)enumerateHighlightNodesUsingBlock:(/*^block*/id)arg1 ;
-(id)momentNodes;
-(id)highlightNodes;
-(void)enumerateMomentNodesUsingBlock:(/*^block*/id)arg1 ;
-(NSString *)pg_topic;
-(void)enumerateMeaningfulEventsUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateSubmeaningsUsingBlock:(/*^block*/id)arg1 ;
-(void)traverseSubmeaningHierarchyUsingBlock:(/*^block*/id)arg1 ;
-(void)traverseParentMeaningHierarchyUsingBlock:(/*^block*/id)arg1 ;
-(PGGraphMeaningNode *)parentMeaningNode;
-(BOOL)isVeryMeaningful;
-(id)_localizationKeyForMeaningLabel:(id)arg1 ;
-(long long)isVeryMeaningfulCachedValue;
-(void)setIsVeryMeaningfulCachedValue:(long long)arg1 ;
@end

