/*
* Generated on Monday, March 1, 2021 at 2:34:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsML.framework/CoreSuggestionsML
*/


@class _PASRng;

@interface SGModelSampler : NSObject {

	double _positiveRate;
	double _negativeRate;
	_PASRng* _rng;

}
-(BOOL)shouldSampleForLabel:(id)arg1 ;
-(id)initWithPositiveRate:(double)arg1 negativeRate:(double)arg2 rng:(id)arg3 ;
@end

