/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@protocol OS_dispatch_queue;
@class HDProfile, NSObject;

@interface HDConceptIndexer : NSObject {

	HDProfile* _profile;
	NSObject*<OS_dispatch_queue> _syncQueue;

}
+(BOOL)insertConceptIndexEntries:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
+(id)sampleQueryDescriptionsFollowingAnchor:(id)arg1 ;
+(id)indexSample:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
-(id)init;
-(id)initWithProfile:(id)arg1 ;
-(BOOL)resetWithError:(id*)arg1 ;
-(BOOL)processSamplesWithLimit:(unsigned long long)arg1 countOfSamplesProcessed:(long long*)arg2 error:(id*)arg3 ;
-(BOOL)_syncQueue_processSamplesWithLimit:(long long)arg1 countOfSamplesProcessed:(long long*)arg2 error:(id*)arg3 ;
-(BOOL)_syncQueue_processUpdatedSamplesWithLimit:(long long)arg1 countOfSamplesProcessed:(long long*)arg2 error:(id*)arg3 ;
-(BOOL)_syncQueue_processDeletedSamplesWithLimit:(long long)arg1 sampleType:(id)arg2 countOfSamplesProcessed:(long long*)arg3 error:(id*)arg4 ;
-(BOOL)_syncQueue_resetWithError:(id*)arg1 ;
@end

