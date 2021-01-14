/*
* Generated on Thursday, January 14, 2021 at 2:23:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,readonly) NSString * crdtID; 
@property (nonatomic,readonly) NSUUID * replicaUUID; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)replicaUUIDForCreation;
+(id)nonEditingReplicaUUID;
-(void)didCopy;
-(REMReplicaIDSource *)replicaIDSource;
-(void)setReplicaIDSource:(REMReplicaIDSource *)arg1 ;
-(id<REMReplicaIDHelperOwner>)owner;
-(void)willEdit;
-(REMReplicaManager *)replicaManager;
-(NSUUID *)acquiredReplicaUUID;
-(void)setAcquiredReplicaUUID:(NSUUID *)arg1 ;
-(void)didSerialize;
-(id<REMReplicaManagerProviding>)lazilyCachedReplicaManagerProvider;
-(void)setLazilyCachedReplicaManagerProvider:(id<REMReplicaManagerProviding>)arg1 ;
-(id<REMReplicaClockProviding>)replicaClockProvider;
-(NSString *)crdtID;
-(void)setOwner:(id<REMReplicaIDHelperOwner>)arg1 ;
-(id)clockElementListForReplicaUUID:(id)arg1 ;
-(NSUUID *)replicaUUID;
-(id)initWithReplicaIDSource:(id)arg1 owner:(id)arg2 replicaClockProvider:(id)arg3 ;
-(void)setReplicaClockProvider:(id<REMReplicaClockProviding>)arg1 ;
-(void)dealloc;
@end

