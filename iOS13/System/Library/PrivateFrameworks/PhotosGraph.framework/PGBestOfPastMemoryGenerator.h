/*
* Generated on Monday, March 1, 2021 at 2:35:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGMemoryGenerator.h>

@class NSDate;

@interface PGBestOfPastMemoryGenerator : PGMemoryGenerator {

	NSDate* _localStartDate;
	NSDate* _localEndDate;

}

@property (assign,nonatomic) NSDate * localStartDate;              //@synthesize localStartDate=_localStartDate - In the implementation block
@property (assign,nonatomic) NSDate * localEndDate;                //@synthesize localEndDate=_localEndDate - In the implementation block
-(NSDate *)localStartDate;
-(NSDate *)localEndDate;
-(void)setLocalStartDate:(NSDate *)arg1 ;
-(void)setLocalEndDate:(NSDate *)arg1 ;
-(void)_enumeratePotentialMemoriesUsingBlock:(/*^block*/id)arg1 ;
-(void)_postProcessMemory:(id)arg1 withPotentialMemory:(id)arg2 ;
-(id)_potentialMemoriesForDryTesting;
@end

