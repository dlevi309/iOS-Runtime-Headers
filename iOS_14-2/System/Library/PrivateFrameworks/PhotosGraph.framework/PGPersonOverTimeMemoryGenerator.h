/*
* Generated on Thursday, January 14, 2021 at 2:25:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGFeaturedMemoryGenerator.h>

@class NSString;

@interface PGPersonOverTimeMemoryGenerator : PGFeaturedMemoryGenerator {

	unsigned long long _numberOfInsufficientlyFacedRejects;
	unsigned long long _numberOfBuildFailureRejects;
	NSString* _personUUID;
	NSString* _personName;

}

@property (nonatomic,retain) NSString * personUUID;              //@synthesize personUUID=_personUUID - In the implementation block
@property (nonatomic,retain) NSString * personName;              //@synthesize personName=_personName - In the implementation block
-(NSString *)personUUID;
-(void)setPersonUUID:(NSString *)arg1 ;
-(NSString *)personName;
-(void)setPersonName:(NSString *)arg1 ;
-(void)_enumeratePotentialMemoriesUsingBlock:(/*^block*/id)arg1 ;
-(unsigned long long)durationForExtendedCuration;
-(void)_postProcessMemory:(id)arg1 withPotentialMemory:(id)arg2 ;
-(id)_potentialMemoriesForDryTesting;
-(BOOL)canFallbackToDejunkAndDedupeForShowMore;
-(id)_computeOverTheTimeFacedAssetsForPersonWithUUID:(id)arg1 inFacedAssets:(id)arg2 ;
@end

