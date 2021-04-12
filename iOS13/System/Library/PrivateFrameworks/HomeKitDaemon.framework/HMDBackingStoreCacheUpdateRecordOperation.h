/*
* Generated on Monday, March 1, 2021 at 2:33:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDBackingStoreOperation.h>

@class HMDBackingStoreCacheGroup, HMDBackingStoreCacheShareGroup, NSString, CKRecord, NSData, HMDBackingStoreModelObject;

@interface HMDBackingStoreCacheUpdateRecordOperation : HMDBackingStoreOperation {

	HMDBackingStoreCacheGroup* _group;
	HMDBackingStoreCacheShareGroup* _share;
	NSString* _recordName;
	CKRecord* _record;
	NSData* _data;
	HMDBackingStoreModelObject* _model;
	unsigned long long _encoding;

}

@property (readonly) HMDBackingStoreCacheGroup * group;                   //@synthesize group=_group - In the implementation block
@property (readonly) HMDBackingStoreCacheShareGroup * share;              //@synthesize share=_share - In the implementation block
@property (readonly) NSString * recordName;                               //@synthesize recordName=_recordName - In the implementation block
@property (readonly) CKRecord * record;                                   //@synthesize record=_record - In the implementation block
@property (readonly) NSData * data;                                       //@synthesize data=_data - In the implementation block
@property (readonly) HMDBackingStoreModelObject * model;                  //@synthesize model=_model - In the implementation block
@property (readonly) unsigned long long encoding;                         //@synthesize encoding=_encoding - In the implementation block
-(NSData *)data;
-(HMDBackingStoreModelObject *)model;
-(unsigned long long)encoding;
-(NSString *)recordName;
-(HMDBackingStoreCacheGroup *)group;
-(HMDBackingStoreCacheShareGroup *)share;
-(CKRecord *)record;
-(id)mainReturningError;
-(id)initWithGroup:(id)arg1 share:(id)arg2 name:(id)arg3 record:(id)arg4 data:(id)arg5 encoding:(unsigned long long)arg6 model:(id)arg7 resultBlock:(/*^block*/id)arg8 ;
-(id)initWithGroup:(id)arg1 record:(id)arg2 data:(id)arg3 encoding:(unsigned long long)arg4 resultBlock:(/*^block*/id)arg5 ;
-(id)initWithShareGroup:(id)arg1 record:(id)arg2 data:(id)arg3 encoding:(unsigned long long)arg4 resultBlock:(/*^block*/id)arg5 ;
-(id)initWithGroup:(id)arg1 record:(id)arg2 resultBlock:(/*^block*/id)arg3 ;
-(id)initWithShareGroup:(id)arg1 record:(id)arg2 resultBlock:(/*^block*/id)arg3 ;
-(id)initWithGroup:(id)arg1 name:(id)arg2 model:(id)arg3 resultBlock:(/*^block*/id)arg4 ;
-(id)initWithShareGroup:(id)arg1 name:(id)arg2 model:(id)arg3 resultBlock:(/*^block*/id)arg4 ;
@end

