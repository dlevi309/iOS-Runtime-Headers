/*
* Generated on Monday, March 1, 2021 at 2:35:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGMemoryGenerator.h>

@class NSDate;

@interface PGFeaturedMemoryGenerator : PGMemoryGenerator {

	BOOL _usesLowRequirements;
	BOOL _oldMemory;
	NSDate* _upperBoundLocalDate;

}

@property (nonatomic,retain) NSDate * upperBoundLocalDate;              //@synthesize upperBoundLocalDate=_upperBoundLocalDate - In the implementation block
@property (assign,nonatomic) BOOL usesLowRequirements;                  //@synthesize usesLowRequirements=_usesLowRequirements - In the implementation block
@property (assign,nonatomic) BOOL oldMemory;                            //@synthesize oldMemory=_oldMemory - In the implementation block
-(NSDate *)upperBoundLocalDate;
-(void)setUpperBoundLocalDate:(NSDate *)arg1 ;
-(BOOL)usesLowRequirements;
-(void)setUsesLowRequirements:(BOOL)arg1 ;
-(BOOL)oldMemory;
-(void)setOldMemory:(BOOL)arg1 ;
@end

