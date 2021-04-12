/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/


@protocol REMReplicaManagerClient;
#import <ReminderKit/ReminderKit-Structs.h>
@class REMClockElementList;

@interface REMReplicaEntry : NSObject {

	BOOL _inUse;
	unsigned _replicaUUIDIndex;
	REMClockElementList* _clockElementList;
	id<REMReplicaManagerClient> _client;

}

@property (assign,nonatomic) unsigned replicaUUIDIndex;                           //@synthesize replicaUUIDIndex=_replicaUUIDIndex - In the implementation block
@property (nonatomic,retain) REMClockElementList * clockElementList;              //@synthesize clockElementList=_clockElementList - In the implementation block
@property (assign,nonatomic) BOOL inUse;                                          //@synthesize inUse=_inUse - In the implementation block
@property (assign,nonatomic) id<REMReplicaManagerClient> client;                  //@synthesize client=_client - In the implementation block
-(id)description;
-(id<REMReplicaManagerClient>)client;
-(void)setClient:(id<REMReplicaManagerClient>)arg1 ;
-(void)setInUse:(BOOL)arg1 ;
-(BOOL)inUse;
-(void)encodeIntoEntryArchive:(ReplicaEntry*)arg1 ;
-(id)initWithEntryArchive:(const ReplicaEntry*)arg1 ;
-(unsigned)replicaUUIDIndex;
-(REMClockElementList *)clockElementList;
-(id)initWithReplicaUUIDIndex:(unsigned)arg1 clockElementList:(id)arg2 inUse:(BOOL)arg3 forClient:(id)arg4 ;
-(id)persistenceDescription;
-(BOOL)hasEqualPersistedPropertiesAs:(id)arg1 ;
-(void)setReplicaUUIDIndex:(unsigned)arg1 ;
-(void)setClockElementList:(REMClockElementList *)arg1 ;
@end

