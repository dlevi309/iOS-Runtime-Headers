/*
* Generated on Thursday, January 14, 2021 at 2:25:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGFeaturedMemoryGenerator.h>

@class NSDate, NSString;

@interface PGMeaningfulEventMemoryGenerator : PGFeaturedMemoryGenerator {

	BOOL _skipsCollectionTitle;
	NSDate* _lowerBoundLocalDate;
	unsigned long long _eventType;
	unsigned long long _meaning;
	NSString* _meaningfulEventUUID;
	unsigned long long _memoryCategory;

}

@property (nonatomic,retain) NSDate * lowerBoundLocalDate;                   //@synthesize lowerBoundLocalDate=_lowerBoundLocalDate - In the implementation block
@property (assign,nonatomic) unsigned long long eventType;                   //@synthesize eventType=_eventType - In the implementation block
@property (assign,nonatomic) unsigned long long meaning;                     //@synthesize meaning=_meaning - In the implementation block
@property (nonatomic,retain) NSString * meaningfulEventUUID;                 //@synthesize meaningfulEventUUID=_meaningfulEventUUID - In the implementation block
@property (assign,nonatomic) BOOL skipsCollectionTitle;                      //@synthesize skipsCollectionTitle=_skipsCollectionTitle - In the implementation block
@property (assign,nonatomic) unsigned long long memoryCategory;              //@synthesize memoryCategory=_memoryCategory - In the implementation block
-(void)setEventType:(unsigned long long)arg1 ;
-(unsigned long long)eventType;
-(id)initWithController:(id)arg1 ;
-(unsigned long long)meaning;
-(void)_enumeratePotentialMemoriesUsingBlock:(/*^block*/id)arg1 ;
-(unsigned long long)durationForCuration;
-(void)_postProcessMemory:(id)arg1 withPotentialMemory:(id)arg2 ;
-(id)_potentialMemoriesForDryTesting;
-(NSDate *)lowerBoundLocalDate;
-(void)setLowerBoundLocalDate:(NSDate *)arg1 ;
-(void)setMeaning:(unsigned long long)arg1 ;
-(unsigned long long)memoryCategory;
-(void)setMemoryCategory:(unsigned long long)arg1 ;
-(id)_additionalInfoKeywordsForPotentialMemory:(id)arg1 ;
-(NSString *)meaningfulEventUUID;
-(void)setMeaningfulEventUUID:(NSString *)arg1 ;
-(BOOL)skipsCollectionTitle;
-(void)setSkipsCollectionTitle:(BOOL)arg1 ;
@end

