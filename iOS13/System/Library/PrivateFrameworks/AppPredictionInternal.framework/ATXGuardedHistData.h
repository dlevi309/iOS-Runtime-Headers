/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/


@class ATXHistogramData;

@interface ATXGuardedHistData : NSObject {

	ATXHistogramData* _histogramData;
	unsigned short _bucketCount;
	BOOL _filter;

}
-(id)initWithHistogramData:(id)arg1 bucketCount:(unsigned short)arg2 filter:(BOOL)arg3 ;
@end

