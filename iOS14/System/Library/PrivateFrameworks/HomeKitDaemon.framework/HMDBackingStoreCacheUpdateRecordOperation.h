/*
* Generated on Thursday, January 14, 2021 at 2:25:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDBackingStoreOperation.h>

@class HMDBackingStoreCacheGroup, NSString, CKRecord, NSData, HMDBackingStoreModelObject;

@interface HMDBackingStoreCacheUpdateRecordOperation : HMDBackingStoreOperation {

	HMDBackingStoreCacheGroup* _group;
	NSString* _recordName;
	CKRecord* _record;
	NSData* _data;
	HMDBackingStoreModelObject* _model;
	unsigned long long _encoding;

}

@property (readonly) HMDBackingStoreCacheGroup * group;               //@synthesize group=_group - In the implementation block
@property (readonly) NSString * recordName;                           //@synthesize recordName=_recordName - In the implementation block
@property (readonly) CKRecord * record;                               //@synthesize record=_record - In the implementation block
@property (readonly) NSData * data;                                   //@synthesize data=_data - In the implementation block
@property (readonly) HMDBackingStoreModelObject * model;              //@synthesize model=_model - In the implementation block
@property (readonly) unsigned long long encoding;                     //@synthesize encoding=_encoding - In the implementation block
-(CKRecord *)record;
-(HMDBackingStoreCacheGroup *)group;
-(HMDBackingStoreModelObject *)model;
-(unsigned long long)encoding;
-(NSData *)data;
-(NSString *)recordName;
-(id)mainReturningError;
-(id)initWithGroup:(id)arg1 name:(id)arg2 record:(id)arg3 data:(id)arg4 encoding:(unsigned long long)arg5 model:(id)arg6 resultBlock:(/*^block*/id)arg7 ;
-(id)initWithGroup:(id)arg1 record:(id)arg2 data:(id)arg3 encoding:(unsigned long long)arg4 resultBlock:(/*^block*/id)arg5 ;
-(id)initWithGroup:(id)arg1 record:(id)arg2 resultBlock:(/*^block*/id)arg3 ;
-(id)initWithGroup:(id)arg1 name:(id)arg2 model:(id)arg3 resultBlock:(/*^block*/id)arg4 ;
@end

