/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/

#import <libobjc.A.dylib/REMReplicaManagerClient.h>

@protocol REMReplicaClockProviding, REMReplicaIDHelperOwner, REMReplicaManagerProviding;
@class NSString, NSUUID, REMReplicaIDSource, REMReplicaManager;

@interface REMReplicaIDHelper : NSObject <REMReplicaManagerClient> {

	id<REMReplicaClockProviding> _replicaClockProvider;
	REMReplicaIDSource* _replicaIDSource;
	id<REMReplicaIDHelperOwner> _owner;
	NSUUID* _acquiredReplicaUUID;
	id<REMReplicaManagerProviding> _lazilyCachedReplicaManagerProvider;

}

@property (nonatomic,retain) REMReplicaIDSource * replicaIDSource;                                           //@synthesize replicaIDSource=_replicaIDSource - In the implementation block
@property (assign,nonatomic,__weak) id<REMReplicaIDHelperOwner> owner;                                       //@synthesize owner=_owner - In the implementation block
@property (nonatomic,retain) NSUUID * acquiredReplicaUUID;                                                   //@synthesize acquiredReplicaUUID=_acquiredReplicaUUID - In the implementation block
@property (nonatomic,retain) id<REMReplicaManagerProviding> lazilyCachedReplicaManagerProvider;              //@synthesize lazilyCachedReplicaManagerProvider=_lazilyCachedReplicaManagerProvider - In the implementation block
@property (nonatomic,readonly) REMReplicaManager * replicaManager; 
@property (nonatomic,retain) id<REMReplicaClockProviding> replicaClockProvider;                              //@synthesize replicaClockProvider=_replicaClockProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * crdtID; 
@property (nonatomic,readonly) NSUUID * replicaUUID; 
+(id)replicaUUIDForCreation;
+(id)nonEditingReplicaUUID;
-(void)dealloc;
-(void)setOwner:(id<REMReplicaIDHelperOwner>)arg1 ;
-(id<REMReplicaIDHelperOwner>)owner;
-(NSString *)crdtID;
-(id)clockElementListForReplicaUUID:(id)arg1 ;
-(NSUUID *)replicaUUID;
-(REMReplicaIDSource *)replicaIDSource;
-(void)setReplicaIDSource:(REMReplicaIDSource *)arg1 ;
-(id)initWithReplicaIDSource:(id)arg1 owner:(id)arg2 replicaClockProvider:(id)arg3 ;
-(void)didCopy;
-(void)willEdit;
-(void)setReplicaClockProvider:(id<REMReplicaClockProviding>)arg1 ;
-(REMReplicaManager *)replicaManager;
-(NSUUID *)acquiredReplicaUUID;
-(void)setAcquiredReplicaUUID:(NSUUID *)arg1 ;
-(void)didSerialize;
-(id<REMReplicaManagerProviding>)lazilyCachedReplicaManagerProvider;
-(void)setLazilyCachedReplicaManagerProvider:(id<REMReplicaManagerProviding>)arg1 ;
-(id<REMReplicaClockProviding>)replicaClockProvider;
@end

