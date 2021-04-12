/*
* Generated on Monday, March 1, 2021 at 2:33:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>

@class HMDBackingStoreCacheShareGroup, HMDBackingStoreCacheGroup, NSData, CKRecord, NSUUID;

@interface HMDBackingStoreCacheFetchRecordResult : HMFObject {

	HMDBackingStoreCacheShareGroup* _share;
	HMDBackingStoreCacheGroup* _group;
	NSData* _data;
	CKRecord* _record;
	unsigned long long _encoding;
	NSUUID* _uuid;

}

@property (nonatomic,readonly) HMDBackingStoreCacheShareGroup * share;              //@synthesize share=_share - In the implementation block
@property (nonatomic,readonly) HMDBackingStoreCacheGroup * group;                   //@synthesize group=_group - In the implementation block
@property (nonatomic,readonly) NSData * data;                                       //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) CKRecord * record;                                   //@synthesize record=_record - In the implementation block
@property (nonatomic,readonly) unsigned long long encoding;                         //@synthesize encoding=_encoding - In the implementation block
@property (nonatomic,readonly) NSUUID * uuid;                                       //@synthesize uuid=_uuid - In the implementation block
-(id)description;
-(NSData *)data;
-(NSUUID *)uuid;
-(unsigned long long)encoding;
-(HMDBackingStoreCacheGroup *)group;
-(HMDBackingStoreCacheShareGroup *)share;
-(CKRecord *)record;
-(id)initWithGroup:(id)arg1 share:(id)arg2 record:(id)arg3 data:(id)arg4 encoding:(unsigned long long)arg5 uuid:(id)arg6 ;
@end

