/*
* Generated on Thursday, January 14, 2021 at 2:25:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGFeaturedMemoryGenerator.h>

@class NSDate;

@interface PGThrowbackThursdayMemoryGenerator : PGFeaturedMemoryGenerator {

	NSDate* _localDate;

}

@property (retain) NSDate * localDate;              //@synthesize localDate=_localDate - In the implementation block
-(NSDate *)localDate;
-(void)_enumeratePotentialMemoriesUsingBlock:(/*^block*/id)arg1 ;
-(void)_postProcessMemory:(id)arg1 withPotentialMemory:(id)arg2 ;
-(id)_potentialMemoriesForDryTesting;
-(void)setLocalDate:(NSDate *)arg1 ;
-(id)_oldWeekInHistoryMomentNodesForLocalDate:(id)arg1 ;
@end

