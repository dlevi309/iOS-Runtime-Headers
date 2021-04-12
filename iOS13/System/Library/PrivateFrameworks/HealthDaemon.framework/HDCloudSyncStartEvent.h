/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDCloudSyncEvent.h>
#import <libobjc.A.dylib/HDAnalyticSubmissionEvent.h>

@class NSNumber, NSString;

@interface HDCloudSyncStartEvent : HDCloudSyncEvent <HDAnalyticSubmissionEvent> {

	NSNumber* _countSinceLastSuccess;
	NSNumber* _timeIntervalSinceLastSuccess;

}

@property (nonatomic,copy,readonly) NSNumber * countSinceLastSuccess;                     //@synthesize countSinceLastSuccess=_countSinceLastSuccess - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * timeIntervalSinceLastSuccess;              //@synthesize timeIntervalSinceLastSuccess=_timeIntervalSinceLastSuccess - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)startEventForOperation:(long long)arg1 operationIdentifier:(id)arg2 configuration:(id)arg3 container:(id)arg4 cloudKitIdentifier:(id)arg5 ;
+(id)startEventWithProfile:(id)arg1 operation:(long long)arg2 operationIdentifier:(id)arg3 reason:(long long)arg4 options:(unsigned long long)arg5 syncContainerPrefix:(id)arg6 containerIdentifier:(id)arg7 cloudKitIdentifier:(id)arg8 syncIdentifier:(id)arg9 repositorySettings:(unsigned long long)arg10 ;
-(NSString *)description;
-(NSNumber *)countSinceLastSuccess;
-(id)initWithProfile:(id)arg1 operation:(long long)arg2 reason:(long long)arg3 options:(unsigned long long)arg4 syncCirclePrefix:(id)arg5 containerID:(id)arg6 cloudKitIdentifier:(id)arg7 syncID:(id)arg8 operationID:(id)arg9 cloudKitManateeEnabled:(BOOL)arg10 internalSettingManateeEnabled:(BOOL)arg11 ;
-(unsigned)AWDMetricID;
-(id)codableRepresentationForAWDSubmission;
-(NSNumber *)timeIntervalSinceLastSuccess;
@end

