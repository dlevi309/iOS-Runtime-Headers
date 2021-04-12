/*
* Generated on Thursday, January 14, 2021 at 2:27:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
*/


@protocol OS_dispatch_queue;
@class NSString, NSObject, IDSKVStore;

@interface IMDCKMockRecordZone : NSObject {

	NSString* _identifier;
	NSObject*<OS_dispatch_queue> _queue;
	IDSKVStore* _recordStore;

}

@property (nonatomic,readonly) NSString * identifier;                           //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) IDSKVStore * recordStore;                          //@synthesize recordStore=_recordStore - In the implementation block
-(IDSKVStore *)recordStore;
-(void)handleOperation:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSString *)identifier;
-(id)initWithIdentifier:(id)arg1 ;
-(void)dealloc;
-(void)setRecordStore:(IDSKVStore *)arg1 ;
-(id)_kvStorePath;
-(void)_handleFetchZoneChangesOperation:(id)arg1 ;
-(void)_handleModifyRecordsOperation:(id)arg1 ;
-(id)_fetchRecordZoneChangesOptionsFromOperation:(id)arg1 ;
-(unsigned long long)_fetchResultLimit:(id)arg1 ;
-(id)_ckRecordFromData:(id)arg1 ;
-(id)_serializedCKRecordData:(id)arg1 ;
@end

