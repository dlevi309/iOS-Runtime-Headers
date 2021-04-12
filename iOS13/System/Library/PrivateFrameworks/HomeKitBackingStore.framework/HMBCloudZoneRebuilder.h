/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

