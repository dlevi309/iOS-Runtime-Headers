/*
* Generated on Monday, March 1, 2021 at 2:35:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)_enumeratePotentialMemoriesUsingBlock:(/*^block*/id)arg1 ;
-(void)_postProcessMemory:(id)arg1 withPotentialMemory:(id)arg2 ;
-(void)_generateExtendedCuratedSetForMemory:(id)arg1 withPotentialMemory:(id)arg2 ;
-(id)_potentialMemoriesForDryTesting;
-(BOOL)canFallbackToDejunkAndDedupeForShowMore;
-(NSSet *)extraFeatures;
-(void)setExtraFeatures:(NSSet *)arg1 ;
-(void)_potentialMemoriesWithSocialGroupNode:(id)arg1 inYear:(long long)arg2 result:(/*^block*/id)arg3 ;
-(long long)socialGroupID;
-(void)setSocialGroupID:(long long)arg1 ;
@end

