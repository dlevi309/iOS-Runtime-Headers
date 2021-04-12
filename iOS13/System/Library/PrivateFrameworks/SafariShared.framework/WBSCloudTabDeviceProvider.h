/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/

@class NSArray, NSDate;


@protocol WBSCloudTabDeviceProvider <NSObject>
@property (nonatomic,copy,readonly) NSArray * syncedCloudTabDevices; 
@property (nonatomic,copy,readonly) NSDate * dateOfLastCloudTabDevicesUpdate; 
@required
-(NSDate *)dateOfLastCloudTabDevicesUpdate;
-(NSArray *)syncedCloudTabDevices;
-(void)synchronizeCloudTabDevicesWithCompletionHandler:(/*^block*/id)arg1;

@end

