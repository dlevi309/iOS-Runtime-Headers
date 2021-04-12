/*
* Generated on Monday, March 1, 2021 at 2:34:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDCloudSyncEvent.h>
#import <libobjc.A.dylib/HDAnalyticSubmissionEvent.h>

@class NSNumber, NSError, NSString;

@interface HDCloudSyncEndEvent : HDCloudSyncEvent <HDAnalyticSubmissionEvent> {

	double _duration;
	long long _result;
	NSNumber* _countSinceLastSuccess;
	NSNumber* _timeIntervalSinceLastSuccess;
	NSError* _error;
	NSError* _underlyingError;

}

@property (nonatomic,readonly) double duration;                                           //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) long long result;                                          //@synthesize result=_result - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * countSinceLastSuccess;                     //@synthesize countSinceLastSuccess=_countSinceLastSuccess - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * timeIntervalSinceLastSuccess;              //@synthesize timeIntervalSinceLastSuccess=_timeIntervalSinceLastSuccess - In the implementation block
@property (nonatomic,copy,readonly) NSError * error;                                      //@synthesize error=_error - In the implementation block
@property (nonatomic,copy,readonly) NSError * underlyingError;                            //@synthesize underlyingError=_underlyingError - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_endEventWithProfile:(id)arg1 operation:(long long)arg2 reason:(long long)arg3 options:(unsigned long long)arg4 syncCirclePrefix:(id)arg5 containerID:(id)arg6 cloudKitIdentifier:(id)arg7 syncID:(id)arg8 operationID:(id)arg9 startTime:(id)arg10 result:(long long)arg11 cloudKitManateeEnabled:(BOOL)arg12 internalSettingManateeEnabled:(BOOL)arg13 error:(id)arg14 ;
+(BOOL)_errorAndUnderlyingErrorForError:(id)arg1 errorOut:(out id*)arg2 underlyingErrorOut:(out id*)arg3 ;
+(id)endEventForOperation:(long long)arg1 operationIdentifier:(id)arg2 configuration:(id)arg3 container:(id)arg4 cloudKitIdentifier:(id)arg5 startTime:(id)arg6 result:(long long)arg7 error:(id)arg8 ;
+(id)endEventForStartEvent:(id)arg1 result:(long long)arg2 error:(id)arg3 ;
-(NSString *)description;
-(NSError *)error;
-(long long)result;
-(double)duration;
-(NSError *)underlyingError;
-(NSNumber *)countSinceLastSuccess;
-(unsigned)AWDMetricID;
-(id)codableRepresentationForAWDSubmission;
-(NSNumber *)timeIntervalSinceLastSuccess;
-(id)initWithProfile:(id)arg1 operation:(long long)arg2 reason:(long long)arg3 options:(unsigned long long)arg4 syncCirclePrefix:(id)arg5 containerID:(id)arg6 cloudKitIdentifier:(id)arg7 syncID:(id)arg8 operationID:(id)arg9 duration:(double)arg10 result:(long long)arg11 error:(id)arg12 underlyingError:(id)arg13 countSinceLastSuccess:(id)arg14 timeIntervalSinceLastSuccess:(id)arg15 cloudKitManateeEnabled:(BOOL)arg16 internalSettingManateeEnabled:(BOOL)arg17 ;
@end
