/*
* Generated on Monday, March 1, 2021 at 2:33:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(CKServerChangeToken *)serverChangeToken;
-(void)setServerChangeToken:(CKServerChangeToken *)arg1 ;
-(HMDBackingStoreCacheGroup *)record;
-(void)setRecord:(HMDBackingStoreCacheGroup *)arg1 ;
-(id)mainReturningError;
-(id)initWithGroup:(id)arg1 serverChangeToken:(id)arg2 resultBlock:(/*^block*/id)arg3 ;
@end

