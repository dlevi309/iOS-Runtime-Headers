/*
* Generated on Thursday, January 14, 2021 at 2:26:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
*/


@protocol OS_dispatch_queue, OS_dispatch_group;
@class NSMutableDictionary, ATUserDefaults, NSObject, ATClientController;

@interface ATDeviceDiskUsageProvider : NSObject {

	NSMutableDictionary* _diskUsageInfo;
	ATUserDefaults* _defaults;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _usageInfoAccessQueue;
	NSObject*<OS_dispatch_group> _usageUpdateGroup;
	ATClientController* _clientController;

}
+(id)sharedInstance;
-(id)init;
-(void)_updatePurgeableStorageUsage;
-(void)getCurrentUsageWithUpdatedDataClasses:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)_diskUsageForDataClass:(id)arg1 ;
-(void)_loadCurrentDiskUsage;
-(void)getUpdatedUsageWithCompletion:(/*^block*/id)arg1 ;
-(id)getCurrentUsage;
@end

