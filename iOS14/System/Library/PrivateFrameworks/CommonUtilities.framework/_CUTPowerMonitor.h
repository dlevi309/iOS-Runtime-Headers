/*
* Generated on Thursday, January 14, 2021 at 2:21:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CommonUtilities.framework/CommonUtilities
*/


#import <CommonUtilities/CommonUtilities-Structs.h>
@class NSHashTable;

@interface _CUTPowerMonitor : NSObject {

	CFRunLoopSourceRef _batteryRunLoopSource;
	IONotificationPortRef _batteryIONotifyPort;
	unsigned _batteryNotificationRef;
	unsigned _pmConnection;
	IONotificationPortRef _pmPort;
	unsigned _pmNotifier;
	unsigned _batteryEntry;
	NSHashTable* _delegates;
	double _currentLevel;
	BOOL _isExternalPowerConnected;

}
@end

