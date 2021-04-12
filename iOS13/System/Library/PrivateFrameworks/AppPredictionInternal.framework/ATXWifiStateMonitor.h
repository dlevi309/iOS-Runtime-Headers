/*
* Generated on Monday, March 1, 2021 at 2:33:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/


@protocol OS_dispatch_queue;
#import <AppPredictionInternal/AppPredictionInternal-Structs.h>
@class NSObject, NSString, NSDate;

@interface ATXWifiStateMonitor : NSObject {

	WiFiManagerClientRef _manager;
	WiFiDeviceClientRef _device;
	NSObject*<OS_dispatch_queue> _queue;
	NSString* _lastSeenSSID;
	NSDate* _lastSeenDate;
	BOOL _isActive;

}

@property (nonatomic,readonly) NSString * SSID; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)_start;
-(NSString *)SSID;
@end

