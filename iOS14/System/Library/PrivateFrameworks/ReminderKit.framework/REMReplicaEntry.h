/*
* Generated on Thursday, January 14, 2021 at 2:23:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id<REMReplicaManagerClient>)client;
-(void)setClient:(id<REMReplicaManagerClient>)arg1 ;
-(id)description;
-(unsigned)replicaUUIDIndex;
-(void)encodeIntoEntryArchive:(ReplicaEntry*)arg1 ;
-(id)initWithEntryArchive:(const ReplicaEntry*)arg1 ;
-(REMClockElementList *)clockElementList;
-(id)initWithReplicaUUIDIndex:(unsigned)arg1 clockElementList:(id)arg2 inUse:(BOOL)arg3 forClient:(id)arg4 ;
-(id)persistenceDescription;
-(BOOL)hasEqualPersistedPropertiesAs:(id)arg1 ;
-(void)setReplicaUUIDIndex:(unsigned)arg1 ;
-(void)setClockElementList:(REMClockElementList *)arg1 ;
-(void)setInUse:(BOOL)arg1 ;
-(BOOL)inUse;
@end

