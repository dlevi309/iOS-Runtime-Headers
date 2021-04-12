/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

