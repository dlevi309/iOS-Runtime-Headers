/*
* Generated on Thursday, January 14, 2021 at 2:25:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGMemoryGenerator.h>

@class NSMutableArray, NSDate;

@interface PGRecentPastEventsMemoryGenerator : PGMemoryGenerator {

	NSMutableArray* _potentialMemories;
	NSDate* _localDate;

}

@property (nonatomic,retain) NSDate * localDate;              //@synthesize localDate=_localDate - In the implementation block
-(NSDate *)localDate;
-(id)initWithController:(id)arg1 ;
-(void)_postProcessMemory:(id)arg1 withPotentialMemory:(id)arg2 ;
-(id)_potentialMemoriesForDryTesting;
-(void)setLocalDate:(NSDate *)arg1 ;
-(id)_peopleSeenInPreviousWeekButNotInPreviousThreeMonthsWithLocalDate:(id)arg1 ;
-(id)_computePotentialMemoriesForPersonNodes:(id)arg1 ;
-(id)_computePotentialMemoriesForSubcategory:(unsigned long long)arg1 withLocalStartDate:(id)arg2 localEndDate:(id)arg3 ;
-(void)_computePotentialMemories;
-(id)generateMemories:(unsigned long long)arg1 ;
-(id)_createMemoryDebugWithPotentialMemory:(id)arg1 ;
@end

