/*
* Generated on Monday, March 1, 2021 at 2:33:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/


@interface _CPLTimingStatistic : NSObject {

	unsigned long long _recordCount;
	unsigned long long _batchCount;
	unsigned long long _errorCount;
	unsigned long long _cancelCount;
	double _duration;

}
-(id)description;
-(void)updateWithDuration:(double)arg1 recordCount:(unsigned long long)arg2 error:(BOOL)arg3 cancelled:(BOOL)arg4 ;
@end

