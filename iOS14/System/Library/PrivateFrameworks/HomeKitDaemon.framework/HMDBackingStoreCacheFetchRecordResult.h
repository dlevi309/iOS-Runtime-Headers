/*
* Generated on Thursday, January 14, 2021 at 2:25:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>

@class HMDBackingStoreCacheGroup, NSData, CKRecord, NSUUID;

@interface HMDBackingStoreCacheFetchRecordResult : HMFObject {

	HMDBackingStoreCacheGroup* _group;
	NSData* _data;
	CKRecord* _record;
	unsigned long long _encoding;
	NSUUID* _uuid;

}

@property (nonatomic,readonly) HMDBackingStoreCacheGroup * group;              //@synthesize group=_group - In the implementation block
@property (nonatomic,readonly) NSData * data;                                  //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) CKRecord * record;                              //@synthesize record=_record - In the implementation block
@property (nonatomic,readonly) unsigned long long encoding;                    //@synthesize encoding=_encoding - In the implementation block
@property (nonatomic,readonly) NSUUID * uuid;                                  //@synthesize uuid=_uuid - In the implementation block
-(CKRecord *)record;
-(HMDBackingStoreCacheGroup *)group;
-(NSUUID *)uuid;
-(unsigned long long)encoding;
-(id)description;
-(NSData *)data;
-(id)initWithGroup:(id)arg1 record:(id)arg2 data:(id)arg3 encoding:(unsigned long long)arg4 uuid:(id)arg5 ;
@end

