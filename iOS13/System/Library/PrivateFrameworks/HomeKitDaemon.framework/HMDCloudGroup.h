/*
* Generated on Monday, March 1, 2021 at 2:33:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>

@class HMDCloudCache, HMDCloudZone, NSUUID, HMDBackingStoreCacheGroup, NSMutableDictionary, NSString, HMDCloudRecord, CKRecordID;

@interface HMDCloudGroup : HMFObject {

	HMDCloudCache* _cache;
	HMDCloudZone* _cloudZone;
	NSUUID* _ownerID;
	NSUUID* _identifier;
	HMDBackingStoreCacheGroup* _backingStoreGroup;
	NSMutableDictionary* _objectIDToRecordNameMap;

}

@property (nonatomic,readonly) NSString * rootRecordName; 
@property (nonatomic,retain) HMDBackingStoreCacheGroup * backingStoreGroup;                //@synthesize backingStoreGroup=_backingStoreGroup - In the implementation block
@property (nonatomic,readonly) NSUUID * parentIdentifier; 
@property (nonatomic,readonly) NSUUID * rootRecordObjectID; 
@property (nonatomic,readonly) NSMutableDictionary * objectIDToRecordNameMap;              //@synthesize objectIDToRecordNameMap=_objectIDToRecordNameMap - In the implementation block
@property (nonatomic,readonly) HMDCloudRecord * rootRecord; 
@property (assign,nonatomic,__weak) HMDCloudCache * cache;                                 //@synthesize cache=_cache - In the implementation block
@property (assign,nonatomic,__weak) HMDCloudZone * cloudZone;                              //@synthesize cloudZone=_cloudZone - In the implementation block
@property (nonatomic,readonly) CKRecordID * privateZoneRootRecordID; 
@property (nonatomic,readonly) NSUUID * ownerID;                                           //@synthesize ownerID=_ownerID - In the implementation block
@property (nonatomic,readonly) NSUUID * identifier;                                        //@synthesize identifier=_identifier - In the implementation block
+(id)shortDescription;
+(void)createGroupWithRootRecordName:(id)arg1 owner:(id)arg2 subscriptionName:(id)arg3 cloudZone:(id)arg4 completion:(/*^block*/id)arg5 ;
-(id)init;
-(id)description;
-(NSUUID *)identifier;
-(void)setCache:(HMDCloudCache *)arg1 ;
-(HMDCloudCache *)cache;
-(id)shortDescription;
-(HMDCloudRecord *)rootRecord;
-(NSUUID *)ownerID;
-(NSUUID *)parentIdentifier;
-(void)addCloudRecord:(id)arg1 ;
-(HMDCloudZone *)cloudZone;
-(void)setCloudZone:(HMDCloudZone *)arg1 ;
-(void)cloudRecordWithObjectID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSString *)rootRecordName;
-(void)updateCloudRecord:(id)arg1 ;
-(id)cloudRecordWithObjectID:(id)arg1 ;
-(id)cloudRecordWithName:(id)arg1 ;
-(BOOL)isRootRecord:(id)arg1 ;
-(void)fetchCloudRecordMap:(/*^block*/id)arg1 ;
-(void)cloudRecordWithObjectIDs:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)rootRecordModelObject;
-(void)deleteCloudRecord:(id)arg1 ;
-(BOOL)isRootRecordName:(id)arg1 ;
-(id)initWithBackingStoreCacheGroup:(id)arg1 cloudZone:(id)arg2 ;
-(void)rootRecordCompletionHandler:(/*^block*/id)arg1 ;
-(void)cloudRecordWithNames:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)cloudRecordWithName:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)__cloudRecordWithObjectID:(id)arg1 ;
-(void)cloudRecordsForParentID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)allDescendentsCloudRecordsForParentID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(HMDBackingStoreCacheGroup *)backingStoreGroup;
-(CKRecordID *)privateZoneRootRecordID;
-(void)updateCloudRecord:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)deleteCloudRecordNames:(id)arg1 ;
-(NSUUID *)rootRecordObjectID;
-(void)_cloudRecordsForParentIDs:(id)arg1 recursive:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setBackingStoreGroup:(HMDBackingStoreCacheGroup *)arg1 ;
-(NSMutableDictionary *)objectIDToRecordNameMap;
@end

