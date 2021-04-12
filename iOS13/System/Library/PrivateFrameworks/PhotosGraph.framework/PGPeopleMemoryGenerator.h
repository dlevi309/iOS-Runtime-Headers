/*
* Generated on Monday, March 1, 2021 at 2:35:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGFeaturedMemoryGenerator.h>

@class NSString, NSSet;

@interface PGPeopleMemoryGenerator : PGFeaturedMemoryGenerator {

	NSString* _peopleUUID;
	NSSet* _peopleNodes;
	NSSet* _birthdayPersonUUIDs;
	long long _year;
	NSSet* _extraFeatures;

}

@property (nonatomic,retain) NSString * peopleUUID;                    //@synthesize peopleUUID=_peopleUUID - In the implementation block
@property (nonatomic,retain) NSSet * peopleNodes;                      //@synthesize peopleNodes=_peopleNodes - In the implementation block
@property (nonatomic,retain) NSSet * birthdayPersonUUIDs;              //@synthesize birthdayPersonUUIDs=_birthdayPersonUUIDs - In the implementation block
@property (assign,nonatomic) long long year;                           //@synthesize year=_year - In the implementation block
@property (assign,nonatomic) NSSet * extraFeatures;                    //@synthesize extraFeatures=_extraFeatures - In the implementation block
-(void)setYear:(long long)arg1 ;
-(long long)year;
-(void)_enumeratePotentialMemoriesUsingBlock:(/*^block*/id)arg1 ;
-(void)_postProcessMemory:(id)arg1 withPotentialMemory:(id)arg2 ;
-(void)_generateExtendedCuratedSetForMemory:(id)arg1 withPotentialMemory:(id)arg2 ;
-(id)_potentialMemoriesForDryTesting;
-(BOOL)canFallbackToDejunkAndDedupeForShowMore;
-(void)_potentialMemoriesWithPeopleNode:(id)arg1 inYear:(long long)arg2 result:(/*^block*/id)arg3 ;
-(BOOL)_upcomingBirthdayWillCollideWithPotentialMemory:(id)arg1 ;
-(NSString *)peopleUUID;
-(void)setPeopleUUID:(NSString *)arg1 ;
-(NSSet *)peopleNodes;
-(void)setPeopleNodes:(NSSet *)arg1 ;
-(NSSet *)birthdayPersonUUIDs;
-(void)setBirthdayPersonUUIDs:(NSSet *)arg1 ;
-(NSSet *)extraFeatures;
-(void)setExtraFeatures:(NSSet *)arg1 ;
@end

