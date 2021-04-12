/*
* Generated on Thursday, January 14, 2021 at 2:25:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PhotosGraph-Structs.h>
#import <PhotosGraph/PGGraphOptimizedNode.h>
#import <libobjc.A.dylib/PGGraphFullMeaninglessEvent.h>
#import <libobjc.A.dylib/PGGraphPhotoEvent.h>
#import <libobjc.A.dylib/PGGraphRelatableEvent.h>
#import <libobjc.A.dylib/PGEventEnrichment.h>

@class NSString, NSDate, PGGraphHighlightGroupNode;

@interface PGGraphHighlightNode : PGGraphOptimizedNode <PGGraphFullMeaninglessEvent, PGGraphPhotoEvent, PGGraphRelatableEvent, PGEventEnrichment> {

	double _localStartTimestamp;
	double _localEndTimestamp;
	NSString* _name;
	NSString* _uuid;
	double _universalStartTimestamp;
	double _universalEndTimestamp;

}

@property (nonatomic,retain) NSString * name;                                     //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSDate * localStartDate; 
@property (nonatomic,retain) NSDate * localEndDate; 
@property (nonatomic,retain) NSDate * universalStartDate; 
@property (nonatomic,retain) NSDate * universalEndDate; 
@property (readonly) NSString * localIdentifier; 
@property (readonly) NSString * uuid;                                             //@synthesize uuid=_uuid - In the implementation block
@property (readonly) double timezoneOffsetAtStart; 
@property (readonly) double timezoneOffsetAtEnd; 
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
@property (readonly) NSString * UUID; 
@property (readonly) double contentScore; 
@property (readonly) BOOL isLongTrip; 
@property (readonly) BOOL isShortTrip; 
@property (readonly) BOOL isTrip; 
@property (readonly) BOOL babyIsPresent; 
@property (readonly) BOOL petIsPresent; 
@property (readonly) double timestampUTCStart;                                    //@synthesize universalStartTimestamp=_universalStartTimestamp - In the implementation block
@property (readonly) double timestampUTCEnd;                                      //@synthesize universalEndTimestamp=_universalEndTimestamp - In the implementation block
@property (readonly) BOOL isInterestingWithAlternateJunking; 
@property (readonly) BOOL isSmartInteresting; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) BOOL hasLocation; 
@property (readonly) BOOL happensPartiallyAtMyHome; 
@property (readonly) BOOL happensPartiallyAtMyWork; 
@property (readonly) BOOL isAggregation; 
+(id)inclusivePathFromTargetNodeDomain:(unsigned short)arg1 withName:(id)arg2 ;
+(id)pathFromTargetNodeDomain:(unsigned short)arg1 ;
+(id)inclusivePathToTargetNodeDomain:(unsigned short)arg1 withName:(id)arg2 ;
+(id)pathToTargetNodeDomain:(unsigned short)arg1 ;
+(id)pathFromMoment;
+(id)pathToMoment;
+(id)scoreSortDescriptors;
+(id)propertiesWithHighlight:(id)arg1 ;
+(id)promotionScoreSortDescriptors;
+(SCD_Struct_PG1)_promotionScoreDescriptorWithMomentNodes:(id)arg1 ;
+(id)otherVeryMeaningfulMeanings;
+(double)nonMeaningfulPromotionScoreWithPromotionScoreDescriptor:(SCD_Struct_PG1)arg1 isAggregation:(BOOL)arg2 enrichmentState:(unsigned short)arg3 ;
+(double)aboveAveragePromotionScoreWithPromotionScoreDescriptor:(SCD_Struct_PG1)arg1 ;
+(double)averagePromotionScoreWithPromotionScoreDescriptor:(SCD_Struct_PG1)arg1 ;
+(double)belowAveragePromotionScoreWithPromotionScoreDescriptor:(SCD_Struct_PG1)arg1 ;
+(double)promotionScoreWithHighlightNode:(id)arg1 enrichmentState:(unsigned short)arg2 numberOfExtendedAssets:(unsigned long long)arg3 ;
-(id)roiNodes;
-(BOOL)hasPeopleCountingMe:(BOOL)arg1 ;
-(BOOL)isShortTrip;
-(BOOL)babyIsPresent;
-(id)meaningNodes;
-(id)holidayNodes;
-(id)celebratedHolidayNodes;
-(double)timestampUTCStart;
-(id)photoEvent;
-(BOOL)isInteresting;
-(id)meaningLabels;
-(double)contentScore;
-(BOOL)isPartOfTrip;
-(BOOL)isLongTrip;
-(BOOL)happensPartiallyAtMyWork;
-(BOOL)endsBeforeLocalDate:(id)arg1 ;
-(id)poiNodes;
-(void)setUniversalEndDate:(NSDate *)arg1 ;
-(id)scenedEvent;
-(BOOL)isTrip;
-(id)peopledEvent;
-(id)timedEvent;
-(void)setLocalEndDate:(NSDate *)arg1 ;
-(id)searchConfidenceSceneNodes;
-(BOOL)isSmartInteresting;
-(id)reliableMeaningLabels;
-(void)eventEnumerateMomentNodesUsingBlock:(/*^block*/id)arg1 ;
-(double)neighborScore;
-(id)highConfidenceSceneNodes;
-(id)relatableNode;
-(BOOL)happensPartiallyAtMyHome;
-(double)weightForMoment:(id)arg1 ;
-(id)fetchAssetCollection;
-(id)businessedEvent;
-(id)meaningfulEvent;
-(NSDate *)universalEndDate;
-(BOOL)startsAfterLocalDate:(id)arg1 ;
-(unsigned long long)numberOfRegularGemAssets;
-(unsigned long long)numberOfShinyGemAssets;
-(BOOL)isAggregation;
-(id)enrichableEvent;
-(NSString *)localIdentifier;
-(id)publicEventNodes;
-(id)anniversaryPersonNode;
-(void)enumerateMeaningNodesUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)isInterestingWithAlternateJunking;
-(id)businessNodes;
-(id)relatableEvent;
-(PGGraphHighlightGroupNode *)highlightGroupNode;
-(id)socialGroupNodes;
-(id)locatedEvent;
-(unsigned long long)numberOfMoments;
-(id)keywordsForRelatedType:(unsigned long long)arg1 focusOnNodes:(id)arg2 ;
-(void)enumerateBusinessesUsingBlock:(/*^block*/id)arg1 ;
-(id)seasonNodes;
-(id)connectedEventsWithTargetDomain:(unsigned short)arg1 ;
-(id)birthdayPersonNode;
-(void)setLocalStartDate:(NSDate *)arg1 ;
-(BOOL)petIsPresent;
-(id)sceneNodes;
-(id)dateNodes;
-(id)sortedMomentNodes;
-(id)naturalLanguageFeatures;
-(NSDate *)localStartDate;
-(NSString *)uuid;
-(NSDate *)localEndDate;
-(NSString *)UUID;
-(double)timestampUTCEnd;
-(BOOL)hasOnlyMomentsAtWork;
-(BOOL)isPartOfShortTrip;
-(id)init;
-(NSDate *)universalStartDate;
-(void)setUniversalStartDate:(NSDate *)arg1 ;
-(double)timezoneOffsetAtEnd;
-(BOOL)isPartOfAggregation;
-(unsigned short)domain;
-(NSString *)name;
-(NSString *)description;
-(id)debugDictionary;
-(BOOL)hasLocation;
-(void)setLocalProperties:(id)arg1 ;
-(id)propertyDictionary;
-(BOOL)isPartOfLongTrip;
-(double)nonMeaningfulPromotionScoreForTripKeyAssetWithEnrichmentState:(unsigned short)arg1 ;
-(id)momentNodes;
-(void)setName:(NSString *)arg1 ;
-(unsigned long long)numberOfAssets;
-(id)personNodes;
-(id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3 ;
-(void)enumerateMomentNodesUsingBlock:(/*^block*/id)arg1 ;
-(id)addressNodes;
-(id)label;
-(BOOL)hasProperties:(id)arg1 ;
-(double)timezoneOffsetAtStart;
@end

