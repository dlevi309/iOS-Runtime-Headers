/*
* Generated on Thursday, January 14, 2021 at 2:27:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsML.framework/CoreSuggestionsML
*/


@class _PASRng;

@interface SGQuickResponsesRanking : NSObject {

	_PASRng* _rng;

}
-(id)initWithSeed:(unsigned long long)arg1 ;
-(id)resultsForModelScores:(id)arg1 responseCount:(unsigned long long)arg2 config:(id)arg3 ;
-(id)classResultsForScores:(id)arg1 numResponses:(id)arg2 responseCount:(unsigned long long)arg3 config:(id)arg4 ;
-(id)indexesForScores:(id)arg1 numResponses:(id)arg2 ;
-(id)semanticClassesForResults:(id)arg1 scores:(id)arg2 numResponses:(id)arg3 config:(id)arg4 ;
-(id)semanticClassesForCategory:(unsigned long long)arg1 responseCount:(unsigned long long)arg2 config:(id)arg3 ;
@end

