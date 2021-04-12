/*
* Generated on Thursday, January 14, 2021 at 2:25:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKContainer, HDCloudSyncZone, HDCloudSyncStoreRecord, HDCloudSyncStore;

@interface HDCloudSyncTarget : NSObject <NSCopying> {

	long long _purpose;
	CKContainer* _container;
	HDCloudSyncZone* _zone;
	HDCloudSyncStoreRecord* _storeRecord;
	HDCloudSyncStore* _store;
	unsigned long long _options;

}

@property (nonatomic,readonly) long long purpose;                                 //@synthesize purpose=_purpose - In the implementation block
@property (nonatomic,readonly) CKContainer * container;                           //@synthesize container=_container - In the implementation block
@property (nonatomic,readonly) HDCloudSyncZone * zone;                            //@synthesize zone=_zone - In the implementation block
@property (nonatomic,readonly) HDCloudSyncStoreRecord * storeRecord;              //@synthesize storeRecord=_storeRecord - In the implementation block
@property (nonatomic,readonly) HDCloudSyncStore * store;                          //@synthesize store=_store - In the implementation block
@property (nonatomic,readonly) unsigned long long options;                        //@synthesize options=_options - In the implementation block
-(HDCloudSyncZone *)zone;
-(long long)purpose;
-(id)init;
-(HDCloudSyncStore *)store;
-(unsigned long long)options;
-(id)description;
-(unsigned long long)hash;
-(CKContainer *)container;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithPurpose:(long long)arg1 container:(id)arg2 zone:(id)arg3 storeRecord:(id)arg4 store:(id)arg5 options:(unsigned long long)arg6 ;
-(HDCloudSyncStoreRecord *)storeRecord;
-(id)targetByAddingOptions:(unsigned long long)arg1 ;
@end

