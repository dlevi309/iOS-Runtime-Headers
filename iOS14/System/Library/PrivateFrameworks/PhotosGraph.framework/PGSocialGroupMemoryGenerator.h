/*
* Generated on Thursday, January 14, 2021 at 2:25:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGFeaturedMemoryGenerator.h>

@class NSSet;

@interface PGSocialGroupMemoryGenerator : PGFeaturedMemoryGenerator {

	long long _socialGroupID;
	long long _year;
	NSSet* _extraFeatures;

}

@property (assign,nonatomic) long long socialGroupID;              //@synthesize socialGroupID=_socialGroupID - In the implementation block
@property (assign,nonatomic) long long year;                       //@synthesize year=_year - In the implementation block
@property (assign,nonatomic) NSSet * extraFeatures;                //@synthesize extraFeatures=_extraFeatures - In the implementation block
-(void)setYear:(long long)arg1 ;
-(long long)year;
-(long long)socialGroupID;
-(void)_enumeratePotentialMemoriesUsingBlock:(/*^block*/id)arg1 ;
-(unsigned long long)durationForCuration;
-(unsigned long long)durationForExtendedCuration;
-(BOOL)semanticalDedupingEnabledForExtendedCuration;
-(void)_postProcessMemory:(id)arg1 withPotentialMemory:(id)arg2 ;
-(id)_potentialMemoriesForDryTesting;
-(BOOL)canFallbackToDejunkAndDedupeForShowMore;
-(NSSet *)extraFeatures;
-(void)setExtraFeatures:(NSSet *)arg1 ;
-(void)_potentialMemoriesWithSocialGroupNode:(id)arg1 inYear:(long long)arg2 result:(/*^block*/id)arg3 ;
-(void)setSocialGroupID:(long long)arg1 ;
@end

