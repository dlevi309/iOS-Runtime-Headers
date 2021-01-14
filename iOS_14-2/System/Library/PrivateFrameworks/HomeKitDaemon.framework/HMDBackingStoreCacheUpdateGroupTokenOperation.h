/*
* Generated on Thursday, January 14, 2021 at 2:25:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDBackingStoreOperation.h>

@class HMDBackingStoreCacheGroup, CKServerChangeToken;

@interface HMDBackingStoreCacheUpdateGroupTokenOperation : HMDBackingStoreOperation {

	HMDBackingStoreCacheGroup* _record;
	CKServerChangeToken* _serverChangeToken;

}

@property (nonatomic,retain) HMDBackingStoreCacheGroup * record;                   //@synthesize record=_record - In the implementation block
@property (nonatomic,retain) CKServerChangeToken * serverChangeToken;              //@synthesize serverChangeToken=_serverChangeToken - In the implementation block
-(HMDBackingStoreCacheGroup *)record;
-(void)setServerChangeToken:(CKServerChangeToken *)arg1 ;
-(void)setRecord:(HMDBackingStoreCacheGroup *)arg1 ;
-(CKServerChangeToken *)serverChangeToken;
-(id)mainReturningError;
-(id)initWithGroup:(id)arg1 serverChangeToken:(id)arg2 resultBlock:(/*^block*/id)arg3 ;
@end

