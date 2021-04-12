/*
* Generated on Monday, March 1, 2021 at 2:35:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/


@class PGMemoryController;

@interface PGMemoryGenerator : NSObject {

	BOOL _isDebug;
	unsigned long long _duration;
	unsigned long long _precision;
	PGMemoryController* _controller;

}

@property (readonly) BOOL canFallbackToDejunkAndDedupeForShowMore; 
@property (assign) BOOL isDebug;                                                //@synthesize isDebug=_isDebug - In the implementation block
@property (assign) unsigned long long duration;                                 //@synthesize duration=_duration - In the implementation block
@property (assign) unsigned long long precision;                                //@synthesize precision=_precision - In the implementation block
@property (__weak,readonly) PGMemoryController * controller;                    //@synthesize controller=_controller - In the implementation block
+(long long)titleDateMatchingTypeForMemoryCategory:(unsigned long long)arg1 ;
+(id)assetPropertySetsForMemories;
-(unsigned long long)duration;
-(unsigned long long)precision;
-(void)setPrecision:(unsigned long long)arg1 ;
-(void)setDuration:(unsigned long long)arg1 ;
-(PGMemoryController *)controller;
-(id)initWithController:(id)arg1 ;
-(void)_enumeratePotentialMemoriesUsingBlock:(/*^block*/id)arg1 ;
-(void)_postProcessMemory:(id)arg1 withPotentialMemory:(id)arg2 ;
-(void)_generateExtendedCuratedSetForMemory:(id)arg1 withPotentialMemory:(id)arg2 ;
-(id)_potentialMemoriesForDryTesting;
-(BOOL)canFallbackToDejunkAndDedupeForShowMore;
-(id)generateMemories:(unsigned long long)arg1 ;
-(id)_createMemoryDebugWithPotentialMemory:(id)arg1 ;
-(BOOL)isDebug;
-(id)generateMemory;
-(id)generateAllMemories;
-(id)_generateMemoryForDryTesting;
-(void)setDefaultValuesIfNeededOnNewMemory:(id)arg1 withPotentialMemory:(id)arg2 ;
-(void)_generateDefaultTitleAndSubtitleForMemory:(id)arg1 withPotentialMemory:(id)arg2 ;
-(BOOL)_eventIsAcceptableForUpgrade:(id)arg1 ;
-(BOOL)canProceedAfterAttemptingWeekendUpgradeForPotentialMemory:(id)arg1 upgradedToWeekend:(BOOL*)arg2 ;
-(BOOL)canProceedAfterAttemptingMeaningfulEventUpgradeForPotentialMemory:(id)arg1 didUpgradeToWeekend:(BOOL)arg2 upgradedToMeaningfulEvent:(BOOL*)arg3 ;
-(BOOL)canProceedAfterAttemptingUpgradesForPotentialMemory:(id)arg1 ;
-(void)_enumerateBestScoringPotentialMemoriesInPotentialMemories:(id)arg1 attemptUpgradesBeforeSorting:(BOOL)arg2 usingBlock:(/*^block*/id)arg3 ;
-(unsigned long long)_numberOfIndependentMomentNodesInMomentNodes:(id)arg1 ;
-(id)_additionalInfoKeywordsForPotentialMemory:(id)arg1 ;
-(void)_mergeCurationSetsIfNeededForMemory:(id)arg1 ;
-(id)createMemoryWithPotentialMemory:(id)arg1 ;
-(void)setIsDebug:(BOOL)arg1 ;
@end

