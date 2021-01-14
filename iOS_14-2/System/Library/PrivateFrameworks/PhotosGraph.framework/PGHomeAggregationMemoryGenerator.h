/*
* Generated on Thursday, January 14, 2021 at 2:25:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGFeaturedMemoryGenerator.h>

@class NSDate;

@interface PGHomeAggregationMemoryGenerator : PGFeaturedMemoryGenerator {

	NSDate* _localDate;

}

@property (nonatomic,retain) NSDate * localDate;              //@synthesize localDate=_localDate - In the implementation block
+(id)_monthNodeForMomentNode:(id)arg1 ;
+(unsigned long long)numberOfPotentialMemoriesWithGraph:(id)arg1 ;
-(NSDate *)localDate;
-(void)_enumeratePotentialMemoriesUsingBlock:(/*^block*/id)arg1 ;
-(void)_postProcessMemory:(id)arg1 withPotentialMemory:(id)arg2 ;
-(id)_potentialMemoriesForDryTesting;
-(void)setLocalDate:(NSDate *)arg1 ;
-(id)_lastMonthPotentialMemories;
@end

