/*
* Generated on Monday, March 1, 2021 at 2:34:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@protocol OS_dispatch_queue;
@class HDProfile, NSObject, _DPStringRecorder;

@interface HDDiffPrivReporter : NSObject {

	HDProfile* _profile;
	NSObject*<OS_dispatch_queue> _queue;
	_DPStringRecorder* _recorder;

}
+(BOOL)isAvailable;
+(id)reportableTypes;
-(id)initWithProfile:(id)arg1 ;
-(id)_typesInMonthWithDataForTypes:(id)arg1 now:(id)arg2 error:(id*)arg3 ;
-(BOOL)_recordTypesUsedInPastMonth:(id)arg1 ;
-(BOOL)reportWithCurrentDate:(id)arg1 error:(id*)arg2 ;
@end

