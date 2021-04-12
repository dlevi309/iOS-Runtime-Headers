/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDSyncSession.h>

@class NSSet, HDCloudSyncSequenceRecord;

@interface HDCloudSyncSession : HDSyncSession {

	NSSet* _excludedSyncStores;
	HDCloudSyncSequenceRecord* _sequenceRecord;

}

@property (nonatomic,retain) HDCloudSyncSequenceRecord * sequenceRecord;              //@synthesize sequenceRecord=_sequenceRecord - In the implementation block
-(HDCloudSyncSequenceRecord *)sequenceRecord;
-(long long)maxEncodedBytesPerMessageForSyncEntityClass:(Class)arg1 ;
-(id)newChangeWithSyncEntityClass:(Class)arg1 ;
-(id)excludedSyncStores;
-(void)setExcludedSyncStores:(id)arg1 ;
-(void)setSequenceRecord:(HDCloudSyncSequenceRecord *)arg1 ;
@end

