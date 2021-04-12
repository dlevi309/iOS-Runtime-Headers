/*
* Generated on Monday, March 1, 2021 at 2:33:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)getUpdatedUsageWithCompletion:(/*^block*/id)arg1 ;
-(void)_loadCurrentDiskUsage;
-(void)getCurrentUsageWithUpdatedDataClasses:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)getCurrentUsage;
-(id)_diskUsageForDataClass:(id)arg1 ;
-(void)_updatePurgeableStorageUsage;
@end

