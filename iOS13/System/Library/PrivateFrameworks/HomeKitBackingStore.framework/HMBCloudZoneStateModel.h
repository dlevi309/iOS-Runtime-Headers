/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
*/

#import <HomeKitBackingStore/HMBCloudStateModel.h>

@class HMBCloudZone, HMBCloudZoneRebuilderStatus, NSData, HMBCloudZoneID, NSNumber, NSSet;

@interface HMBCloudZoneStateModel : HMBCloudStateModel {

	HMBCloudZone* _cloudZone;
	HMBCloudZoneRebuilderStatus* _rebuilderStatus;

}

@property (nonatomic,retain) NSData * subscriptionsData; 
@property (__weak) HMBCloudZone * cloudZone;                                             //@synthesize cloudZone=_cloudZone - In the implementation block
@property (nonatomic,retain) HMBCloudZoneID * zoneID; 
@property (nonatomic,retain) NSNumber * needsZoneCreation; 
@property (nonatomic,retain) NSNumber * needsZoneDeletion; 
@property (nonatomic,retain) NSSet * subscriptions; 
@property (nonatomic,retain) HMBCloudZoneRebuilderStatus * rebuilderStatus;              //@synthesize rebuilderStatus=_rebuilderStatus - In the implementation block
+(id)hmbProperties;
-(NSSet *)subscriptions;
-(void)setSubscriptions:(NSSet *)arg1 ;
-(HMBCloudZoneRebuilderStatus *)rebuilderStatus;
-(id)initWithModelID:(id)arg1 parentModelID:(id)arg2 ;
-(HMBCloudZone *)cloudZone;
-(void)setCloudZone:(HMBCloudZone *)arg1 ;
-(void)setRebuilderStatus:(HMBCloudZoneRebuilderStatus *)arg1 ;
@end

