/*
* Generated on Thursday, January 14, 2021 at 2:25:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

