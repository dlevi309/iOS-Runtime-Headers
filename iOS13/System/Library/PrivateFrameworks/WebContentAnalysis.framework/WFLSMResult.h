/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WebContentAnalysis.framework/WebContentAnalysis
*/


#import <WebContentAnalysis/WebContentAnalysis-Structs.h>
@class NSMutableArray, NSNumber;

@interface WFLSMResult : NSObject {

	NSMutableArray* categoryJudgements;
	NSNumber* threshold;

}

@property (copy) NSNumber * threshold; 
+(id)LSMResultWithLSMResultRef:(LSMResultRef)arg1 threshold:(id)arg2 ;
+(id)extractScoresFromLSMResults:(LSMResultRef)arg1 ;
-(void)dealloc;
-(id)description;
-(id)debugDescription;
-(BOOL)isRestricted;
-(NSNumber *)threshold;
-(void)setThreshold:(NSNumber *)arg1 ;
-(long long)numberOfCategories;
-(id)initWithLSMResultRef:(LSMResultRef)arg1 threshold:(id)arg2 ;
-(long long)bestMatchingCategory;
-(float)scoreForCategory:(long long)arg1 ;
-(void)setScore:(float)arg1 forCategory:(long long)arg2 ;
@end

