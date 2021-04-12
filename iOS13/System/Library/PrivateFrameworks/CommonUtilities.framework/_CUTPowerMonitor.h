/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

