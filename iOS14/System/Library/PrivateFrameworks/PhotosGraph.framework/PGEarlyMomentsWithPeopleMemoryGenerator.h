/*
* Generated on Thursday, January 14, 2021 at 2:25:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)earlyMomentNodesByPersonNodeWithPersonNodes:(id)arg1 ;
-(NSDate *)localDate;
-(void)_enumeratePotentialMemoriesUsingBlock:(/*^block*/id)arg1 ;
-(void)_postProcessMemory:(id)arg1 withPotentialMemory:(id)arg2 ;
-(id)_potentialMemoriesForDryTesting;
-(void)setLocalDate:(NSDate *)arg1 ;
-(void)_enumerateEarlyMomentsWithPeopleForLocalDate:(id)arg1 enumerationBlock:(/*^block*/id)arg2 ;
-(BOOL)shouldGenerateAllMemories;
-(void)setShouldGenerateAllMemories:(BOOL)arg1 ;
@end

