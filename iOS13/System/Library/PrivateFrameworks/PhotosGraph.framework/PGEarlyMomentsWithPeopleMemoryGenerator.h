/*
* Generated on Monday, March 1, 2021 at 2:35:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGMemoryGenerator.h>

@class NSDate;

@interface PGEarlyMomentsWithPeopleMemoryGenerator : PGMemoryGenerator {

	BOOL _shouldGenerateAllMemories;
	NSDate* _localDate;

}

@property (nonatomic,retain) NSDate * localDate;                          //@synthesize localDate=_localDate - In the implementation block
@property (assign,nonatomic) BOOL shouldGenerateAllMemories;              //@synthesize shouldGenerateAllMemories=_shouldGenerateAllMemories - In the implementation block
+(unsigned long long)numberOfPotentialMemoriesForGraph:(id)arg1 ;
+(id)earlyMomentsByPeopleNodes:(id)arg1 ;
-(void)_enumeratePotentialMemoriesUsingBlock:(/*^block*/id)arg1 ;
-(void)_postProcessMemory:(id)arg1 withPotentialMemory:(id)arg2 ;
-(id)_potentialMemoriesForDryTesting;
-(NSDate *)localDate;
-(void)setLocalDate:(NSDate *)arg1 ;
-(void)_enumerateEarlyMomentsWithPeopleForLocalDate:(id)arg1 enumerationBlock:(/*^block*/id)arg2 ;
-(BOOL)shouldGenerateAllMemories;
-(void)setShouldGenerateAllMemories:(BOOL)arg1 ;
@end

