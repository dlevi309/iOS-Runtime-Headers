/*
* Generated on Monday, March 1, 2021 at 2:33:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDCloudZone.h>

@class HMDCloudShareGroup, NSMutableDictionary;

@interface HMDCloudHomeZone : HMDCloudZone {

	BOOL _sharedHome;
	HMDCloudShareGroup* _shareGroup;
	NSMutableDictionary* _perUserShareGroups;

}

@property (getter=isSharedHome,nonatomic,readonly) BOOL sharedHome;                   //@synthesize sharedHome=_sharedHome - In the implementation block
@property (nonatomic,retain) HMDCloudShareGroup * shareGroup;                         //@synthesize shareGroup=_shareGroup - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * perUserShareGroups;              //@synthesize perUserShareGroups=_perUserShareGroups - In the implementation block
+(id)zoneRootRecordName;
+(id)zoneSubscriptionName:(id)arg1 ;
+(id)zoneSharedRootRecordName;
+(void)createHomeZoneWithName:(id)arg1 owner:(id)arg2 cacheZone:(id)arg3 cloudCache:(id)arg4 completion:(/*^block*/id)arg5 ;
-(id)description;
-(void)setServerChangeToken:(id)arg1 ;
-(void)cloudRecordWithObjectID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)markMigratedObjectsAsMigrated;
-(void)fetchMigratedObjects:(/*^block*/id)arg1 ;
-(void)updateCloudRecord:(id)arg1 ;
-(BOOL)isRootRecord:(id)arg1 ;
-(void)cloudRecordWithObjectIDs:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)cloudRecordsForParentID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)allDescendentsCloudRecordsForParentID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateCloudRecord:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)addCloudRecord:(id)arg1 ownerID:(id)arg2 ;
-(id)createCloudZoneChangeTemporaryCache:(BOOL)arg1 ;
-(void)setShareGroup:(HMDCloudShareGroup *)arg1 ;
-(HMDCloudShareGroup *)shareGroup;
-(NSMutableDictionary *)perUserShareGroups;
-(BOOL)isSharedHome;
@end

