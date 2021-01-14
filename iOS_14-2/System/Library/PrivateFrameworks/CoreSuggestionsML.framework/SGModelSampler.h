/*
* Generated on Thursday, January 14, 2021 at 2:27:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsML.framework/CoreSuggestionsML
*/


@class _PASRng;

@interface SGModelSampler : NSObject {

	double _positiveRate;
	double _dynamicLabelRate;
	double _negativeRate;
	_PASRng* _rng;

}
-(BOOL)shouldSampleForLabel:(id)arg1 isDynamicLabel:(BOOL)arg2 ;
-(id)initWithPositiveRate:(double)arg1 dynamicLabelRate:(double)arg2 negativeRate:(double)arg3 rng:(id)arg4 ;
@end

