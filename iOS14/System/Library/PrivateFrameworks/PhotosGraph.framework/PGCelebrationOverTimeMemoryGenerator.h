/*
* Generated on Thursday, January 14, 2021 at 2:25:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSDate *)localDate;
-(void)_enumeratePotentialMemoriesUsingBlock:(/*^block*/id)arg1 ;
-(void)_postProcessMemory:(id)arg1 withPotentialMemory:(id)arg2 ;
-(id)_potentialMemoriesForDryTesting;
-(void)setLocalDate:(NSDate *)arg1 ;
-(id)_holidayNodeForMomentNodes:(id)arg1 ;
-(NSSet *)upcomingHolidayNames;
-(void)setUpcomingHolidayNames:(NSSet *)arg1 ;
@end

