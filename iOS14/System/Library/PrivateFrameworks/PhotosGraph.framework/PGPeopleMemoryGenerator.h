/*
* Generated on Thursday, January 14, 2021 at 2:25:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGFeaturedMemoryGenerator.h>

@class NSString, NSSet;

@interface PGPeopleMemoryGenerator : PGFeaturedMemoryGenerator {

	NSString* _peopleUUID;
	NSSet* _personNodes;
	NSSet* _birthdayPersonUUIDs;
	long long _year;
	NSSet* _extraFeatures;

}

@property (nonatomic,retain) NSString * peopleUUID;                    //@synthesize peopleUUID=_peopleUUID - In the implementation block
@property (nonatomic,retain) NSSet * personNodes;                      //@synthesize personNodes=_personNodes - In the implementation block
@property (nonatomic,retain) NSSet * birthdayPersonUUIDs;              //@synthesize birthdayPersonUUIDs=_birthdayPersonUUIDs - In the implementation block
@property (assign,nonatomic) long long year;                           //@synthesize year=_year - In the implementation block
@property (assign,nonatomic) NSSet * extraFeatures;                    //@synthesize extraFeatures=_extraFeatures - In the implementation block
-(void)setYear:(long long)arg1 ;
-(long long)year;
-(NSSet *)personNodes;
-(void)_enumeratePotentialMemoriesUsingBlock:(/*^block*/id)arg1 ;
-(unsigned long long)durationForCuration;
-(unsigned long long)durationForExtendedCuration;
-(BOOL)semanticalDedupingEnabledForExtendedCuration;
-(void)_postProcessMemory:(id)arg1 withPotentialMemory:(id)arg2 ;
-(id)_potentialMemoriesForDryTesting;
-(BOOL)canFallbackToDejunkAndDedupeForShowMore;
-(void)_potentialMemoriesWithPeopleNode:(id)arg1 inYear:(long long)arg2 result:(/*^block*/id)arg3 ;
-(BOOL)_upcomingBirthdayWillCollideWithPotentialMemory:(id)arg1 ;
-(NSString *)peopleUUID;
-(void)setPeopleUUID:(NSString *)arg1 ;
-(void)setPersonNodes:(NSSet *)arg1 ;
-(NSSet *)birthdayPersonUUIDs;
-(void)setBirthdayPersonUUIDs:(NSSet *)arg1 ;
-(NSSet *)extraFeatures;
-(void)setExtraFeatures:(NSSet *)arg1 ;
@end

