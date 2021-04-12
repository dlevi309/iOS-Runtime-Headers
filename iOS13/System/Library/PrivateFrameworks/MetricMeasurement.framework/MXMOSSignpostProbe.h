/*
* Generated on Monday, March 1, 2021 at 2:35:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MetricMeasurement.framework/MetricMeasurement
*/

#import <MetricMeasurement/MXMProbe.h>

@protocol OS_dispatch_semaphore;
@class SignpostSupportObjectExtractor, NSURL, NSDate, NSObject, MXMMutableSampleData;

@interface MXMOSSignpostProbe : MXMProbe {

	SignpostSupportObjectExtractor* _extractor;
	unsigned long long _mode;
	NSURL* _logArchivePath;
	NSDate* _startDate;
	NSDate* _endDate;
	NSObject*<OS_dispatch_semaphore> _finishedProcessingSema;
	MXMMutableSampleData* _data;

}
+(id)probeHostLive;
+(id)probeHostSystemLogArchiveWithRelativeTimeInterval:(double)arg1 ;
+(id)probeHostSystemLogArchiveWithStartDate:(id)arg1 endDate:(id)arg2 ;
+(id)probeWithLogArchivePath:(id)arg1 ;
+(id)probeWithLogArchivePath:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 ;
-(void)_beginUpdates;
-(id)initWithMode:(unsigned long long)arg1 ;
-(void)_stopUpdates;
-(id)sampleWithTimeout:(double)arg1 stopReason:(unsigned long long*)arg2 ;
-(id)initWithMode:(unsigned long long)arg1 logArchive:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 ;
-(void)_setupProcessingBlocks;
-(void)_buildData:(id)arg1 attributes:(id)arg2 signpostEvent:(id)arg3 ;
-(void)_buildData:(id)arg1 signpostInterval:(id)arg2 ;
-(void)_buildData:(id)arg1 signpostAnimationInterval:(id)arg2 ;
-(id)_buildSampleSetWithData:(id)arg1 tag:(id)arg2 unit:(id)arg3 attributes:(id)arg4 signpostObject:(id)arg5 ;
-(void)_setupProcessingFilter;
-(id)initWithLogArchive:(id)arg1 ;
-(id)initWithLogArchive:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 ;
@end

