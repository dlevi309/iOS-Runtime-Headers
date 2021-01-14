/*
* Generated on Thursday, January 14, 2021 at 2:25:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
*/

@class NAFuture, HMBCloudZoneRebuilderStatus;


@protocol HMBCloudZoneRebuilder
@property (nonatomic,readonly) NAFuture * rebuildCompleteFuture; 
@property (copy,readonly) HMBCloudZoneRebuilderStatus * rebuilderStatus; 
@property (getter=isZoneRebuildInProgress,nonatomic,readonly) BOOL zoneRebuildInProgress; 
@required
-(void)rebuild;
-(HMBCloudZoneRebuilderStatus *)rebuilderStatus;
-(NAFuture *)rebuildCompleteFuture;
-(id)zoneStartUp;
-(void)handleIdentityLost;
-(BOOL)isZoneRebuildInProgress;
-(void)handleZoneChanged;

@end

