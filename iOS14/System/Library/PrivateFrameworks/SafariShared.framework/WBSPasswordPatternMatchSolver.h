/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


@class NSString, NSSet, NSMutableDictionary;

@interface WBSPasswordPatternMatchSolver : NSObject {

	NSString* _password;
	NSSet* _patternMatches;
	NSMutableDictionary* _partialSolutions;

}
-(void)_updatePartialSolutionsWithPatternMatch:(id)arg1 patternCount:(unsigned long long)arg2 ;
-(id)initWithPassword:(id)arg1 patternMatches:(id)arg2 ;
-(id)optimalEvaluation;
-(id)_unwindSolution;
-(id)_partialSolutionWithEndIndex:(unsigned long long)arg1 patternCount:(unsigned long long)arg2 ;
-(void)_enumeratePartialSolutionsWithEndIndex:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)_setPartialSolution:(id)arg1 withEndIndex:(unsigned long long)arg2 patternCount:(unsigned long long)arg3 ;
-(id)_exhaustiveSearchPatternWithStartIndex:(unsigned long long)arg1 endIndex:(unsigned long long)arg2 ;
-(void)_updateExhaustiveSearchPartialSolutionsAtEndIndex:(unsigned long long)arg1 ;
@end

