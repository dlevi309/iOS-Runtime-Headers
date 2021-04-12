/*
* Generated on Monday, March 1, 2021 at 2:35:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PhotosGraph-Structs.h>
#import <PhotosGraph/PGGraphNode.h>
#import <libobjc.A.dylib/PGGraphFullMeaninglessEvent.h>
#import <libobjc.A.dylib/PGGraphPhotoEvent.h>
#import <libobjc.A.dylib/PGGraphRelatableEvent.h>
#import <libobjc.A.dylib/PGEventEnrichment.h>

@class NSString, PGGraphHighlightGroupNode, NSDate;

@interface PGGraphHighlightNode : PGGraphNode <PGGraphFullMeaninglessEvent, PGGraphPhotoEvent, PGGraphRelatableEvent, PGEventEnrichment>

@property (readonly) NSString * localIdentifier; 
@property (readonly) BOOL isPartOfTrip; 
@property (readonly) BOOL isPartOfLongTrip; 
@property (readonly) BOOL isPartOfShortTrip; 
@property (readonly) BOOL isPartOfAggregation; 
@property (readonly) BOOL isInteresting; 
@property (readonly) BOOL hasOnlyMomentsAtWork; 
@property (readonly) double neighborScore; 
@property (readonly) unsigned long long numberOfRegularGemAssets; 
@property (readonly) unsigned long long numberOfShinyGemAssets; 
@property (readonly) PGGraphHighlightGroupNode * highlightGroupNode; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSString * UUID; 
@property (readonly) double contentScore; 
@property (readonly) NSDate * localStartDate; 
@property (readonly) NSDate * localEndDate; 
@property (readonly) NSDate * universalStartDate; 
@property (readonly) NSDate * universalEndDate; 
@property (readonly) BOOL isLongTrip; 
@property (readonly) BOOL isShortTrip; 
@property (readonly) BOOL isTrip; 
@property (readonly) BOOL babyIsPresent; 
@property (readonly) BOOL petIsPresent; 
@property (readonly) BOOL hasLocation; 
@property (readonly) BOOL happensPartiallyAtMyHome; 
@property (readonly) BOOL happensPartiallyAtMyWork; 
@property (nonatomic,readonly) NSString * uuid; 
@property (readonly) BOOL isAggregation; 
+(id)pathFromMoment;
+(id)pathToMoment;
+(id)pathFromTargetNodeDomain:(unsigned short)arg1 ;
+(id)pathToTargetNodeDomain:(unsigned short)arg1 ;
+(id)inclusivePathFromTargetNodeDomain:(unsigned short)arg1 withName:(id)arg2 ;
+(id)inclusivePathToTargetNodeDomain:(unsigned short)arg1 withName:(id)arg2 ;
+(id)scoreSortDescriptors;
+(id)propertiesWithHighlight:(id)arg1 ;
+(id)promotionScoreSortDescriptors;
+(SCD_Struct_PG1)_promotionScoreDescriptorWithMomentNodes:(id)arg1 ;
+(double)nonMeaningfulPromotionScoreWithPromotionScoreDescriptor:(SCD_Struct_PG1)arg1 isAggregation:(BOOL)arg2 enrichmentState:(unsigned short)arg3 ;
+(id)otherVeryMeaningfulMeanings;
+(double)aboveAveragePromotionScoreWithPromotionScoreDescriptor:(SCD_Struct_PG1)arg1 ;
+(double)averagePromotionScoreWithPromotionScoreDescriptor:(SCD_Struct_PG1)arg1 ;
+(double)belowAveragePromotionScoreWithPromotionScoreDescriptor:(SCD_Struct_PG1)arg1 ;
+(double)promotionScoreWithHighlightNode:(id)arg1 enrichmentState:(unsigned short)arg2 numberOfExtendedAssets:(unsigned long long)arg3 ;
-(NSString *)uuid;
-(id)debugDictionary;
-(NSString *)localIdentifier;
-(BOOL)hasLocation;
-(unsigned long long)numberOfAssets;
-(NSDate *)localStartDate;
-(NSDate *)localEndDate;
-(id)meaningLabels;
-(NSDate *)universalStartDate;
-(NSDate *)universalEndDate;
-(BOOL)isAggregation;
-(double)contentScore;
-(double)neighborScore;
-(unsigned long long)numberOfMoments;
-(BOOL)isTrip;
-(BOOL)isLongTrip;
-(BOOL)isShortTrip;
-(BOOL)isPartOfTrip;
-(BOOL)isPartOfLongTrip;
-(BOOL)isPartOfShortTrip;
-(BOOL)isPartOfAggregation;
-(id)momentNodes;
-(void)enumerateMomentNodesUsingBlock:(/*^block*/id)arg1 ;
-(void)eventEnumerateMomentNodesUsingBlock:(/*^block*/id)arg1 ;
-(id)addressNodes;
-(id)personNodes;
-(BOOL)startsAfterLocalDate:(id)arg1 ;
-(BOOL)endsBeforeLocalDate:(id)arg1 ;
-(id)sortedMomentNodes;
-(id)naturalLanguageFeatures;
-(id)timedEvent;
-(id)locatedEvent;
-(id)peopledEvent;
-(id)scenedEvent;
-(id)meaningfulEvent;
-(id)businessedEvent;
-(id)enrichableEvent;
-(id)relatableEvent;
-(BOOL)babyIsPresent;
-(BOOL)petIsPresent;
-(PGGraphHighlightGroupNode *)highlightGroupNode;
-(id)dateNodes;
-(id)seasonNodes;
-(id)holidayNodes;
-(id)celebratedHolidayNodes;
-(id)poiNodes;
-(id)roiNodes;
-(BOOL)happensPartiallyAtMyHome;
-(BOOL)happensPartiallyAtMyWork;
-(BOOL)hasPeopleCountingMe:(BOOL)arg1 ;
-(id)socialGroupNodes;
-(id)sceneNodes;
-(id)highConfidenceSceneNodes;
-(id)searchConfidenceSceneNodes;
-(id)businessNodes;
-(id)publicEventNodes;
-(void)enumerateBusinessesUsingBlock:(/*^block*/id)arg1 ;
-(id)fetchAssetCollection;
-(double)weightForMoment:(id)arg1 ;
-(id)photoEvent;
-(id)connectedEventsWithTargetDomain:(unsigned short)arg1 ;
-(id)keywordsForRelatedType:(unsigned long long)arg1 focusOnNodes:(id)arg2 ;
-(id)reliableMeaningLabels;
-(id)birthdayPersonNode;
-(id)anniversaryPersonNode;
-(BOOL)isInteresting;
-(BOOL)isSmartInteresting;
-(unsigned long long)numberOfRegularGemAssets;
-(unsigned long long)numberOfShinyGemAssets;
-(BOOL)hasOnlyMomentsAtWork;
-(id)meaningNodes;
-(void)enumerateMeaningNodesUsingBlock:(/*^block*/id)arg1 ;
-(id)relatableNode;
@end

