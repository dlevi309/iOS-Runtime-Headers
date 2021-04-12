/*
* Generated on Thursday, January 14, 2021 at 2:24:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthHearingDaemon.framework/HealthHearingDaemon
*/


#import <HealthHearingDaemon/HealthHearingDaemon-Structs.h>
@class NSMutableArray;

@interface HDHeadphoneAudioExposureBucketCollection : NSObject {

	NSMutableArray* _storage;
	os_unfair_lock_s _lock;
	BOOL _dirty;

}

@property (assign,getter=isDirty,nonatomic) BOOL dirty;              //@synthesize dirty=_dirty - In the implementation block
-(void)clear;
-(void)setDirty:(BOOL)arg1 ;
-(BOOL)isDirty;
-(id)init;
-(id)snapshotStatisticsForNowDate:(id)arg1 error:(id*)arg2 ;
-(void)insertBuckets:(id)arg1 ;
-(id)copyWithEarliestStartDate:(id)arg1 resetDoseToZero:(BOOL)arg2 error:(id*)arg3 ;
-(id)initWithBuckets:(id)arg1 ;
-(id)_lock_snapshotStatisticsForNowDate:(id)arg1 error:(id*)arg2 ;
-(id)_lock_updateWithSampleBatch:(id)arg1 error:(id*)arg2 ;
-(void)pruneWithNowDate:(id)arg1 ;
-(id)_updateWithSampleBatch:(id)arg1 needsRebuild:(BOOL*)arg2 error:(id*)arg3 ;
-(id)_bucketsWithEarliestStartDate:(id)arg1 resetDoseToZero:(BOOL)arg2 error:(id*)arg3 ;
-(id)unitTesting_snapshotBuckets;
@end

