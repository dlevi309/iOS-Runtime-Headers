/*
* Generated on Thursday, January 14, 2021 at 2:25:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDSyncSession.h>

@class NSSet, HDCloudSyncSequenceRecord;

@interface HDCloudSyncSession : HDSyncSession {

	NSSet* _excludedSyncStores;
	HDCloudSyncSequenceRecord* _sequenceRecord;

}

@property (nonatomic,retain) HDCloudSyncSequenceRecord * sequenceRecord;              //@synthesize sequenceRecord=_sequenceRecord - In the implementation block
-(void)setSequenceRecord:(HDCloudSyncSequenceRecord *)arg1 ;
-(HDCloudSyncSequenceRecord *)sequenceRecord;
-(long long)maxEncodedBytesPerCodableChangeForSyncEntityClass:(Class)arg1 ;
-(long long)maxEncodedBytesPerChangeSetForSyncEntityClass:(Class)arg1 ;
-(id)newChangeWithSyncEntityClass:(Class)arg1 ;
-(id)excludedSyncStores;
-(void)setExcludedSyncStores:(id)arg1 ;
@end

