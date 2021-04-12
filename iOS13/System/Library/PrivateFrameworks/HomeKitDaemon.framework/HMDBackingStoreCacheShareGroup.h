/*
* Generated on Monday, March 1, 2021 at 2:33:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>

@class HMDBackingStoreCacheGroup, NSString, CKShare, NSArray;

@interface HMDBackingStoreCacheShareGroup : HMFObject {

	long long _shareID;
	HMDBackingStoreCacheGroup* _group;
	NSString* _rootRecordName;
	NSString* _targetOwner;
	CKShare* _share;
	NSArray* _users;

}

@property (assign) long long shareID;                                       //@synthesize shareID=_shareID - In the implementation block
@property (__weak,readonly) HMDBackingStoreCacheGroup * group;              //@synthesize group=_group - In the implementation block
@property (readonly) NSString * rootRecordName;                             //@synthesize rootRecordName=_rootRecordName - In the implementation block
@property (readonly) NSString * targetOwner;                                //@synthesize targetOwner=_targetOwner - In the implementation block
@property (readonly) CKShare * share;                                       //@synthesize share=_share - In the implementation block
@property (readonly) NSArray * users;                                       //@synthesize users=_users - In the implementation block
-(HMDBackingStoreCacheGroup *)group;
-(NSArray *)users;
-(CKShare *)share;
-(long long)shareID;
-(void)setShareID:(long long)arg1 ;
-(id)dumpDebug;
-(NSString *)rootRecordName;
-(NSString *)targetOwner;
-(id)initWithShareID:(long long)arg1 group:(id)arg2 rootRecord:(id)arg3 targetOwner:(id)arg4 share:(id)arg5 users:(id)arg6 ;
@end

