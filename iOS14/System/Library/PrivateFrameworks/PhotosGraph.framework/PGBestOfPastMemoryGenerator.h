/*
* Generated on Thursday, January 14, 2021 at 2:25:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setLocalEndDate:(NSDate *)arg1 ;
-(void)setLocalStartDate:(NSDate *)arg1 ;
-(NSDate *)localStartDate;
-(NSDate *)localEndDate;
-(void)_enumeratePotentialMemoriesUsingBlock:(/*^block*/id)arg1 ;
-(void)_postProcessMemory:(id)arg1 withPotentialMemory:(id)arg2 ;
-(id)_potentialMemoriesForDryTesting;
-(id)keyAssetCurationOptions;
@end

