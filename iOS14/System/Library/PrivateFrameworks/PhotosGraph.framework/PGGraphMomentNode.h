/*
* Generated on Thursday, January 14, 2021 at 2:25:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PhotosGraph-Structs.h>
#import <PhotosGraph/PGGraphOptimizedNode.h>
#import <libobjc.A.dylib/PLMomentProtocol.h>
#import <libobjc.A.dylib/PGGraphFullEvent.h>
#import <libobjc.A.dylib/PGGraphPhotoEvent.h>
#import <libobjc.A.dylib/PGGraphRelatableEvent.h>
#import <libobjc.A.dylib/PGEventEnrichment.h>

@class NSDate, CLLocation, NSString, PGGraphHighlightNode, NSSet, CLSHolidayCalendarEventRuleTraits, PGGraphHighlightGroupNode;

@interface PGGraphMomentNode : PGGraphOptimizedNode <PLMomentProtocol, PGGraphFullEvent, PGGraphPhotoEvent, PGGraphRelatableEvent, PGEventEnrichment> {

	NSString* _localIdentifier;
	double _localStartTimestamp;
	double _localEndTimestamp;
	unsigned _numberOfAssetsWithPersons : 32;
	unsigned _numberOfAssets : 32;
	unsigned _numberOfPersonNodes : 16;
	unsigned _totalNumberOfPersons : 16;
	unsigned _numberOfShinyGemAssets : 32;
	unsigned _numberOfRegularGemAssets : 32;
	unsigned _hasHigherThanImprovedAssets : 1;
	unsigned _hasAssetsWithInterestingScenes : 1;
	unsigned _containsBetterScoringAsset : 1;
	unsigned _containsNonJunkAssets : 1;
	unsigned _isInteresting : 1;
	unsigned _isInterestingWithAlternateJunking : 1;
	unsigned _isSmartInteresting : 1;
	NSString* _name;
	double _inhabitationScore;
	double _contentScore;
	double _behavioralScore;
	double _universalStartTimestamp;
	double _universalEndTimestamp;
	double _scenesProcessedRatio;
	double _facesProcessedRatio;
	unsigned long long _numberOfAssetsInExtendedCuration;

}

@property (nonatomic,readonly) NSDate * pl_startDate; 
@property (nonatomic,readonly) NSDate * pl_endDate; 
@property (nonatomic,readonly) unsigned long long pl_numberOfAssets; 
@property (nonatomic,readonly) CLLocation * pl_location; 
@property (nonatomic,readonly) CLLocationCoordinate2D pl_coordinate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSString * name;                                                         //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSDate * localStartDate; 
@property (nonatomic,retain) NSDate * localEndDate; 
@property (nonatomic,retain) NSDate * universalStartDate; 
@property (nonatomic,retain) NSDate * universalEndDate; 
@property (assign,nonatomic) unsigned long long numberOfAssets;                                       //@synthesize numberOfAssets=_numberOfAssets - In the implementation block
@property (assign,nonatomic) BOOL containsNonJunkAssets;                                              //@synthesize containsNonJunkAssets=_containsNonJunkAssets - In the implementation block
@property (assign,nonatomic) double scenesProcessedRatio;                                             //@synthesize scenesProcessedRatio=_scenesProcessedRatio - In the implementation block
@property (assign,nonatomic) double facesProcessedRatio;                                              //@synthesize facesProcessedRatio=_facesProcessedRatio - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfAssetsInExtendedCuration;                     //@synthesize numberOfAssetsInExtendedCuration=_numberOfAssetsInExtendedCuration - In the implementation block
@property (readonly) NSString * localIdentifier; 
@property (readonly) unsigned long long numberOfAssetsWithPersons;                                    //@synthesize numberOfAssetsWithPersons=_numberOfAssetsWithPersons - In the implementation block
@property (readonly) BOOL hasPersonNodes; 
@property (readonly) unsigned long long numberOfPersonNodes; 
@property (readonly) unsigned long long totalNumberOfPersons;                                         //@synthesize totalNumberOfPersons=_totalNumberOfPersons - In the implementation block
@property (readonly) BOOL hasAddressNodes; 
@property (readonly) BOOL hasMeanings; 
@property (readonly) BOOL happensPartiallyAtMyHomeOrWork; 
@property (readonly) BOOL happensPartiallyAtMyWork; 
@property (readonly) BOOL happensPartiallyAtMyHome; 
@property (readonly) BOOL isPartOfTrip; 
@property (readonly) BOOL isBreakoutOfRoutineHigh; 
@property (readonly) BOOL isMeaningful; 
@property (readonly) BOOL isInterestingForMemories; 
@property (readonly) BOOL hasEnoughScenesProcessed; 
@property (readonly) BOOL hasEnoughFacesProcessed; 
@property (readonly) PGGraphHighlightNode * highlightNode; 
@property (readonly) unsigned long long locationMobilityType; 
@property (readonly) double inhabitationScore;                                                        //@synthesize inhabitationScore=_inhabitationScore - In the implementation block
@property (readonly) BOOL hasHigherThanImprovedAssets;                                                //@synthesize hasHigherThanImprovedAssets=_hasHigherThanImprovedAssets - In the implementation block
@property (readonly) BOOL hasAssetsWithInterestingScenes;                                             //@synthesize hasAssetsWithInterestingScenes=_hasAssetsWithInterestingScenes - In the implementation block
@property (readonly) BOOL containsBetterScoringAsset;                                                 //@synthesize containsBetterScoringAsset=_containsBetterScoringAsset - In the implementation block
@property (readonly) double neighborScore; 
@property (readonly) PGGraphMomentNode * previousMomentNode; 
@property (readonly) PGGraphMomentNode * nextMomentNode; 
@property (readonly) NSSet * frequentLocationNodes; 
@property (readonly) BOOL happensAtFrequentLocation; 
@property (readonly) CLSHolidayCalendarEventRuleTraits * holidayCalendarEventRuleTraits; 
@property (readonly) long long breakoutOfRoutineType; 
@property (readonly) unsigned long long numberOfShinyGemAssets;                                       //@synthesize numberOfShinyGemAssets=_numberOfShinyGemAssets - In the implementation block
@property (readonly) unsigned long long numberOfRegularGemAssets;                                     //@synthesize numberOfRegularGemAssets=_numberOfRegularGemAssets - In the implementation block
@property (readonly) double behavioralScore;                                                          //@synthesize behavioralScore=_behavioralScore - In the implementation block
@property (readonly) NSString * UUID; 
@property (readonly) double contentScore;                                                             //@synthesize contentScore=_contentScore - In the implementation block
@property (readonly) BOOL isLongTrip; 
@property (readonly) BOOL isShortTrip; 
@property (readonly) BOOL isTrip; 
@property (readonly) BOOL babyIsPresent; 
@property (readonly) BOOL petIsPresent; 
@property (readonly) double timestampUTCStart;                                                        //@synthesize universalStartTimestamp=_universalStartTimestamp - In the implementation block
@property (readonly) double timestampUTCEnd;                                                          //@synthesize universalEndTimestamp=_universalEndTimestamp - In the implementation block
@property (readonly) BOOL isInteresting;                                                              //@synthesize isInteresting=_isInteresting - In the implementation block
@property (readonly) BOOL isInterestingWithAlternateJunking;                                          //@synthesize isInterestingWithAlternateJunking=_isInterestingWithAlternateJunking - In the implementation block
@property (readonly) BOOL isSmartInteresting;                                                         //@synthesize isSmartInteresting=_isSmartInteresting - In the implementation block
@property (readonly) PGGraphHighlightGroupNode * highlightGroupNode; 
@property (readonly) BOOL hasLocation; 
@property (nonatomic,readonly) NSString * uuid; 
@property (readonly) BOOL isAggregation; 
+(id)socialGroupInMoment;
+(id)inclusivePathFromTargetNodeDomain:(unsigned short)arg1 withName:(id)arg2 ;
+(id)petPresentInMoment;
+(id)filter;
+(id)contentScoreSortDescriptors;
+(id)businessOfMoment;
+(id)babyPresentInMoment;
+(id)dateOfMoment;
+(id)sceneOfMoment;
+(id)poiOfMoment;
+(id)personInMoment;
+(id)mobilityOfMoment;
+(id)meaningOfMoment;
+(id)pathFromTargetNodeDomain:(unsigned short)arg1 ;
+(id)partOfDayOfMoment;
+(id)addressOfMoment;
+(id)publicEventOfMoment;
+(id)inclusivePathToTargetNodeDomain:(unsigned short)arg1 withName:(id)arg2 ;
+(id)contentBasedPropertiesWithMoment:(id)arg1 ;
+(id)pathToTargetNodeDomain:(unsigned short)arg1 ;
+(id)frequentLocationOfMoment;
+(id)weekdayOfMoment;
+(id)firstAndLastMomentNodesInMomentNodes:(id)arg1 ;
+(id)meaningHierarchyOfMoment;
+(id)propertiesWithMoment:(id)arg1 ;
+(id)pathFromMoment;
+(id)pathToMoment;
+(id)scoreSortDescriptors;
+(id)weekendOfMoment;
+(id)roiOfMoment;
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
-(id)associatedNodesForRemoval;
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
-(BOOL)happensPartiallyAtMyHomeOrWork;
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
-(void)enumerateAddressNodesUsingBlock:(/*^block*/id)arg1 ;
-(NSDate *)localStartDate;
-(BOOL)isBreakoutOfRoutineHigh;
-(BOOL)isWeekend;
-(NSString *)uuid;
-(NSDate *)localEndDate;
-(NSString *)UUID;
-(void)enumerateBabyNodesUsingBlock:(/*^block*/id)arg1 ;
-(void)setNumberOfAssets:(unsigned long long)arg1 ;
-(double)timestampUTCEnd;
-(void)enumeratePetNodesUsingBlock:(/*^block*/id)arg1 ;
-(id)cityNodes;
-(void)enumeratePartsOfDayUsingBlock:(/*^block*/id)arg1 ;
-(id)countryNodes;
-(CLLocationCoordinate2D)pl_coordinate;
-(unsigned long long)pl_numberOfAssets;
-(double)meaningScore;
-(id)init;
-(PGGraphHighlightNode *)highlightNode;
-(NSDate *)universalStartDate;
-(void)_enumeratePartsOfDayWithThreshold:(float)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)setUniversalStartDate:(NSDate *)arg1 ;
-(id)earlierMomentNode:(id)arg1 ;
-(unsigned long long)_eventRulePeopleTrait;
-(BOOL)isMeaningful;
-(BOOL)happensAtFrequentLocation;
-(BOOL)hasHigherThanImprovedAssets;
-(double)inhabitationScore;
-(id)remoteAddressEdges;
-(long long)breakoutOfRoutineType;
-(void)setContainsNonJunkAssets:(BOOL)arg1 ;
-(unsigned long long)_partsOfDayWithThreshold:(float)arg1 ;
-(BOOL)hasMeanings;
-(id)weekendNode;
-(id)sameWeekendMoments;
-(void)enumeratePOINodesUsingBlock:(/*^block*/id)arg1 ;
-(void)setScenesProcessedRatio:(double)arg1 ;
-(unsigned short)domain;
-(void)enumerateConsolidatedAddressesUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)hasEnoughFacesProcessed;
-(id)sameMonthMoments;
-(unsigned long long)numberOfPersonNodes;
-(void)enumerateBusinessNodesUsingBlock:(/*^block*/id)arg1 ;
-(unsigned long long)locationMobilityType;
-(void)enumerateSignificantPartsOfDayUsingBlock:(/*^block*/id)arg1 ;
-(PGGraphMomentNode *)previousMomentNode;
-(NSString *)name;
-(id)addressEdges;
-(void)setNumberOfAssetsInExtendedCuration:(unsigned long long)arg1 ;
-(void)enumerateHighlightNodesUsingBlock:(/*^block*/id)arg1 ;
-(NSString *)description;
-(BOOL)hasAddressNodes;
-(void)enumeratePersonNodesUsingBlock:(/*^block*/id)arg1 ;
-(id)debugDictionary;
-(BOOL)containsNonJunkAssets;
-(BOOL)hasLocation;
-(BOOL)containsBetterScoringAsset;
-(CLLocation *)pl_location;
-(void)enumeratePublicEventNodesUsingBlock:(/*^block*/id)arg1 ;
-(id)preciseAddressEdges;
-(void)setFacesProcessedRatio:(double)arg1 ;
-(void)setLocalProperties:(id)arg1 ;
-(void)enumerateROINodesUsingBlock:(/*^block*/id)arg1 ;
-(unsigned long long)partsOfDay;
-(CLLocationCoordinate2D)bestLocationCoordinate;
-(unsigned long long)_eventRuleLocationTrait;
-(void)enumeratePartOfDayNodesUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)hasPersonNodes;
-(id)propertyDictionary;
-(unsigned long long)significantPartsOfDay;
-(NSSet *)frequentLocationNodes;
-(unsigned long long)numberOfAssetsInExtendedCuration;
-(void)enumeratePreciseAddressNodesUsingBlock:(/*^block*/id)arg1 ;
-(id)momentNodes;
-(BOOL)isInterestingForMemories;
-(void)setName:(NSString *)arg1 ;
-(void)enumerateSocialGroupNodesUsingBlock:(/*^block*/id)arg1 ;
-(unsigned long long)numberOfAssets;
-(long long)_compareToMomentNode:(id)arg1 withSortDescriptors:(id)arg2 ;
-(NSDate *)pl_endDate;
-(void)enumerateDateNodesUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateFrequentLocationNodesUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)hasEnoughScenesProcessed;
-(double)graphScore;
-(unsigned long long)totalNumberOfPersons;
-(CLSHolidayCalendarEventRuleTraits *)holidayCalendarEventRuleTraits;
-(void)enumerateMeaningfulEventsUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)_isMePresent;
-(id)personNodes;
-(void)mergeProperties:(id)arg1 ;
-(id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3 ;
-(BOOL)hasAssetsWithInterestingScenes;
-(void)enumerateCelebratedHolidayNodesUsingBlock:(/*^block*/id)arg1 ;
-(NSDate *)pl_startDate;
-(id)addressNodes;
-(double)behavioralScore;
-(double)scenesProcessedRatio;
-(id)meaningLabelsIncludingParents;
-(PGGraphMomentNode *)nextMomentNode;
-(id)label;
-(unsigned long long)numberOfAssetsWithPersons;
-(void)enumerateRemoteAddressNodesUsingBlock:(/*^block*/id)arg1 ;
-(id)bestAddressNode;
-(void)enumerateSceneNodesUsingBlock:(/*^block*/id)arg1 ;
-(id)lastWeekendMoments;
-(id)laterMomentNode:(id)arg1 ;
-(BOOL)hasProperties:(id)arg1 ;
-(double)facesProcessedRatio;
@end

