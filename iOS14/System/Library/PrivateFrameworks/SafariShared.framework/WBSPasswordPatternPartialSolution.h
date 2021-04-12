/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(WBSPasswordPatternMatch *)patternMatch;
-(id)initWithPatternMatch:(id)arg1 guessesRequiredWithoutPatternCountPenalty:(double)arg2 withPatternCountPenalty:(double)arg3 ;
-(double)guessesRequiredWithoutPatternCountPenalty;
-(double)guessesRequiredWithPatternCountPenalty;
@end

