/*
* Generated on Thursday, January 14, 2021 at 2:27:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
*/


@protocol BLTAbstractIDSDevice <NSObject>
@property (nonatomic,readonly) BOOL isDefaultPairedDevice; 
@property (nonatomic,readonly) BOOL isNearby; 
@property (nonatomic,readonly) BOOL isConnected; 
@property (nonatomic,readonly) BOOL isCloudReachable; 
@required
-(BOOL)isConnected;
-(BOOL)isNearby;
-(BOOL)isDefaultPairedDevice;
-(BOOL)isCloudReachable;

@end

