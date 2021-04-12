/*
* Generated on Monday, March 1, 2021 at 2:35:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PhotosGraph-Structs.h>
#import <KnowledgeGraphKit/MANode.h>

@class NSDateComponents;

@interface PGGraphNode : MANode

@property (nonatomic,retain) NSDateComponents * birthdayDateComponents; 
@property (nonatomic,retain) NSDateComponents * potentialBirthdayDateComponents; 
@property (nonatomic,retain) NSDateComponents * anniversaryDateComponents; 
+(id)addressNodesFromEventNodes:(id)arg1 ;
+(id)sortEventsByDateSortDescriptors;
+(id)_specialDateDateComponentsFromTimeInterval:(double)arg1 ;
+(double)specialDateTimeIntervalForDateComponents:(id)arg1 ;
+(id)_specialDateComponentsForDate:(id)arg1 ;
+(double)specialDateTimeIntervalForDate:(id)arg1 ;
+(id)stringValueForPartOfDay:(unsigned long long)arg1 ;
+(unsigned long long)partOfDayForPartOfDayNode:(id)arg1 ;
-(id)name;
-(id)UUID;
-(unsigned long long)numberOfAssets;
-(id)nextEvent;
-(long long)timeValue;
-(double)graphScore;
-(id)_stringValueForPropertyWithKey:(id)arg1 ;
-(id)keywordDescription;
-(BOOL)isInteresting;
-(BOOL)isSmartInteresting;
-(unsigned long long)totalNumberOfPersons;
-(void)enumerateDeepNeighborsWithLabel:(id)arg1 usingOutEdges:(BOOL)arg2 inDomain:(unsigned short)arg3 andBlock:(/*^block*/id)arg4 ;
-(id)firstDeepNeighborWithLabel:(id)arg1 usingOutEdges:(BOOL)arg2 inDomain:(unsigned short)arg3 ;
-(unsigned long long)countOfDeepNeighborsWithLabel:(id)arg1 usingOutEdges:(BOOL)arg2 inDomain:(unsigned short)arg3 ;
-(id)deepNeighborsWithLabel:(id)arg1 usingOutEdges:(BOOL)arg2 inDomain:(unsigned short)arg3 ;
-(id)nameAsSocialGroupNode;
-(BOOL)isFrequentSocialGroup;
-(void)_enumerateDeepNeighborsWithLabel:(id)arg1 domain:(unsigned short)arg2 edgeType:(unsigned long long)arg3 excluding:(id)arg4 shouldStop:(BOOL*)arg5 block:(/*^block*/id)arg6 ;
-(void)_enumerateDeepNeighborsWithLabel:(id)arg1 domain:(unsigned short)arg2 edgeType:(unsigned long long)arg3 shouldStop:(BOOL*)arg4 block:(/*^block*/id)arg5 ;
-(double)timestampUTCStart;
-(double)timestampUTCEnd;
-(double)timestampTZStart;
-(double)timestampTZEnd;
-(id)previousEvent;
-(CLLocationCoordinate2D)bestLocationCoordinate;
-(unsigned long long)partOfDay;
-(unsigned long long)significantPartsOfDay;
-(void)enumeratePartOfDayUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateSignificantPartsOfDayUsingBlock:(/*^block*/id)arg1 ;
-(id)matchingDescription;
-(id)bestAddressNode;
-(unsigned long long)_partOfDayWithThreshold:(float)arg1 ;
-(void)_enumeratePartOfDayWithThreshold:(float)arg1 usingBlock:(/*^block*/id)arg2 ;
-(NSDateComponents *)birthdayDateComponents;
-(NSDateComponents *)potentialBirthdayDateComponents;
-(NSDateComponents *)anniversaryDateComponents;
-(void)setBirthdayDateComponents:(NSDateComponents *)arg1 ;
-(void)setPotentialBirthdayDateComponents:(NSDateComponents *)arg1 ;
-(void)setAnniversaryDateComponents:(NSDateComponents *)arg1 ;
@end

