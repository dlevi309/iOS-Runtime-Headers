/*
* Generated on Thursday, January 14, 2021 at 2:25:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGFeaturedMemoryGenerator.h>

@interface PGSocialGroupOverTimeMemoryGenerator : PGFeaturedMemoryGenerator {

	unsigned long long _numberOfInsufficientlyFacedRejects;
	unsigned long long _numberOfBuildFailureRejects;
	long long _socialGroupID;

}

@property (assign,nonatomic) long long socialGroupID;              //@synthesize socialGroupID=_socialGroupID - In the implementation block
-(long long)socialGroupID;
-(void)_enumeratePotentialMemoriesUsingBlock:(/*^block*/id)arg1 ;
-(unsigned long long)durationForExtendedCuration;
-(void)_postProcessMemory:(id)arg1 withPotentialMemory:(id)arg2 ;
-(id)_potentialMemoriesForDryTesting;
-(BOOL)canFallbackToDejunkAndDedupeForShowMore;
-(void)setSocialGroupID:(long long)arg1 ;
-(id)_computeOverTheTimeFacedAssetsForPersonUUIDs:(id)arg1 inFacedAssets:(id)arg2 ;
@end

