/*
* Generated on Thursday, January 14, 2021 at 2:25:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@protocol OS_dispatch_queue;
@class HDProfile, NSObject, _DPStringRecorder, _DPBitValueRecorder;

@interface HDDiffPrivReporter : NSObject {

	HDProfile* _profile;
	NSObject*<OS_dispatch_queue> _queue;
	_DPStringRecorder* _recorder;
	_DPBitValueRecorder* _randomBitRecorder;

}
+(BOOL)isAvailable;
+(id)reportableTypes;
-(id)initWithProfile:(id)arg1 ;
-(id)_typesInMonthWithDataForTypes:(id)arg1 now:(id)arg2 error:(id*)arg3 ;
-(BOOL)_recordTypesUsedInPastMonth:(id)arg1 ;
-(BOOL)_recordRandomBit;
-(BOOL)reportWithCurrentDate:(id)arg1 error:(id*)arg2 ;
@end

