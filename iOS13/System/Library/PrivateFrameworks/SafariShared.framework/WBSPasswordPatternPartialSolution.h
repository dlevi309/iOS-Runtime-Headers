/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


@class WBSPasswordPatternMatch;

@interface WBSPasswordPatternPartialSolution : NSObject {

	WBSPasswordPatternMatch* _patternMatch;
	double _guessesRequiredWithoutPatternCountPenalty;
	double _guessesRequiredWithPatternCountPenalty;

}

@property (nonatomic,readonly) WBSPasswordPatternMatch * patternMatch;                        //@synthesize patternMatch=_patternMatch - In the implementation block
@property (nonatomic,readonly) double guessesRequiredWithoutPatternCountPenalty;              //@synthesize guessesRequiredWithoutPatternCountPenalty=_guessesRequiredWithoutPatternCountPenalty - In the implementation block
@property (nonatomic,readonly) double guessesRequiredWithPatternCountPenalty;                 //@synthesize guessesRequiredWithPatternCountPenalty=_guessesRequiredWithPatternCountPenalty - In the implementation block
-(id)initWithPatternMatch:(id)arg1 guessesRequiredWithoutPatternCountPenalty:(double)arg2 withPatternCountPenalty:(double)arg3 ;
-(WBSPasswordPatternMatch *)patternMatch;
-(double)guessesRequiredWithoutPatternCountPenalty;
-(double)guessesRequiredWithPatternCountPenalty;
@end

