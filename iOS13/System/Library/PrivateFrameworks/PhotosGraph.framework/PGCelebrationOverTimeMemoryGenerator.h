/*
* Generated on Monday, March 1, 2021 at 2:35:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGMemoryGenerator.h>

@class NSDate, NSSet;

@interface PGCelebrationOverTimeMemoryGenerator : PGMemoryGenerator {

	NSDate* _localDate;
	NSSet* _upcomingHolidayNames;

}

@property (nonatomic,retain) NSDate * localDate;                        //@synthesize localDate=_localDate - In the implementation block
@property (nonatomic,retain) NSSet * upcomingHolidayNames;              //@synthesize upcomingHolidayNames=_upcomingHolidayNames - In the implementation block
-(void)_enumeratePotentialMemoriesUsingBlock:(/*^block*/id)arg1 ;
-(void)_postProcessMemory:(id)arg1 withPotentialMemory:(id)arg2 ;
-(id)_potentialMemoriesForDryTesting;
-(NSDate *)localDate;
-(void)setLocalDate:(NSDate *)arg1 ;
-(id)_holidayNodeForMomentNodes:(id)arg1 ;
-(NSSet *)upcomingHolidayNames;
-(void)setUpcomingHolidayNames:(NSSet *)arg1 ;
@end

