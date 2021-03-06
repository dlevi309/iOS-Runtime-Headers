/*
* Generated on Monday, March 1, 2021 at 2:35:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PhotosGraph-Structs.h>
#import <PhotosGraph/PGFeaturedMemoryGenerator.h>

@interface PGHobbyMemoryGenerator : PGFeaturedMemoryGenerator {

	BOOL _onlyOverTheYears;
	BOOL _keepsOnlyIsInteresting;
	long long _hobbyType;

}

@property (assign,nonatomic) long long hobbyType;                      //@synthesize hobbyType=_hobbyType - In the implementation block
@property (assign,nonatomic) BOOL onlyOverTheYears;                    //@synthesize onlyOverTheYears=_onlyOverTheYears - In the implementation block
@property (assign,nonatomic) BOOL keepsOnlyIsInteresting;              //@synthesize keepsOnlyIsInteresting=_keepsOnlyIsInteresting - In the implementation block
-(id)confidenceThresholdByWhitelistedSceneIdentifier;
-(id)confidenceThresholdByBlacklistedSceneIdentifier;
-(void)_potentialHobbyMemoryForHobby:(id)arg1 results:(/*^block*/id)arg2 ;
-(void)_randomEnumerateOverLifeTimePotentialMemories:(id)arg1 andYearPotentialMemories:(id)arg2 rejectedNumbers:(SCD_Struct_PG0*)arg3 enumerationBlock:(/*^block*/id)arg4 ;
-(void)_enumerateBestPotentialMemoriesInLifeTimePotentialMemories:(id)arg1 andYearPotentialMemories:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)_enumeratePotentialMemoriesUsingBlock:(/*^block*/id)arg1 ;
-(void)_postProcessMemory:(id)arg1 withPotentialMemory:(id)arg2 ;
-(void)_generateExtendedCuratedSetForMemory:(id)arg1 withPotentialMemory:(id)arg2 ;
-(id)_potentialMemoriesForDryTesting;
-(BOOL)canFallbackToDejunkAndDedupeForShowMore;
-(long long)hobbyType;
-(void)setHobbyType:(long long)arg1 ;
-(BOOL)onlyOverTheYears;
-(void)setOnlyOverTheYears:(BOOL)arg1 ;
-(BOOL)keepsOnlyIsInteresting;
-(void)setKeepsOnlyIsInteresting:(BOOL)arg1 ;
@end

