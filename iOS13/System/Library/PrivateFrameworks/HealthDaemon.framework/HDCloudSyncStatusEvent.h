/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDCloudSyncEvent.h>
#import <libobjc.A.dylib/HDAnalyticSubmissionEvent.h>

@class NSNumber, NSString;

@interface HDCloudSyncStatusEvent : HDCloudSyncEvent <HDAnalyticSubmissionEvent> {

	NSNumber* _timeSinceUploadSuccess;
	NSNumber* _timeSinceDownloadSuccess;
	NSNumber* _timeSinceLastUploadForwardProgress;
	NSNumber* _timeUntilRebaseRequired;
	NSNumber* _baseLineEpoch;
	NSNumber* _hasEncounteredGapInCurrentEpoch;
	NSNumber* _emptyZoneCount;

}

@property (nonatomic,copy,readonly) NSNumber * timeSinceUploadSuccess;                          //@synthesize timeSinceUploadSuccess=_timeSinceUploadSuccess - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * timeSinceDownloadSuccess;                        //@synthesize timeSinceDownloadSuccess=_timeSinceDownloadSuccess - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * timeSinceLastUploadForwardProgress;              //@synthesize timeSinceLastUploadForwardProgress=_timeSinceLastUploadForwardProgress - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * timeUntilRebaseRequired;                         //@synthesize timeUntilRebaseRequired=_timeUntilRebaseRequired - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * baseLineEpoch;                                   //@synthesize baseLineEpoch=_baseLineEpoch - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * hasEncounteredGapInCurrentEpoch;                 //@synthesize hasEncounteredGapInCurrentEpoch=_hasEncounteredGapInCurrentEpoch - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * emptyZoneCount;                                  //@synthesize emptyZoneCount=_emptyZoneCount - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_persistedSyncStateForConfiguration:(id)arg1 ;
+(id)_lastSuccessfulPullDateForConfiguration:(id)arg1 ;
+(id)statusEventWithConfiguration:(id)arg1 cloudKitIdentifier:(id)arg2 ;
-(NSString *)description;
-(unsigned)AWDMetricID;
-(id)codableRepresentationForAWDSubmission;
-(id)initWithProfile:(id)arg1 operation:(long long)arg2 reason:(long long)arg3 options:(unsigned long long)arg4 syncCirclePrefix:(id)arg5 containerID:(id)arg6 cloudKitIdentifier:(id)arg7 syncID:(id)arg8 operationID:(id)arg9 syncState:(id)arg10 lastSuccessfulPullDate:(id)arg11 lastPushForwardProgressDate:(id)arg12 cloudKitManateeEnabled:(BOOL)arg13 internalSettingManateeEnabled:(BOOL)arg14 ;
-(NSNumber *)hasEncounteredGapInCurrentEpoch;
-(NSNumber *)baseLineEpoch;
-(NSNumber *)emptyZoneCount;
-(NSNumber *)timeSinceDownloadSuccess;
-(NSNumber *)timeSinceLastUploadForwardProgress;
-(NSNumber *)timeSinceUploadSuccess;
-(NSNumber *)timeUntilRebaseRequired;
@end

