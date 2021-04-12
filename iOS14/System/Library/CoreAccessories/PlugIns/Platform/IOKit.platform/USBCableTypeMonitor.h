/*
* Generated on Thursday, January 14, 2021 at 2:26:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/CoreAccessories/PlugIns/Platform/IOKit.platform/IOKit
*/


#import <IOKit/IOKit-Structs.h>
@class NSMutableArray;

@interface USBCableTypeMonitor : NSObject {

	unsigned long long _uid;
	NSMutableArray* _registeredUUIDs;
	IONotificationPortRef _ioUSB30XHCIRemovablePortNotifyPort;
	unsigned _ioUSB30XHCIRemovablePortNotification;
	unsigned _ioUSB30XHCIRemovablePortService;
	unsigned _ioUSB30XHCIRemovablePortMatchIterator;
	unsigned _ioUSB30XHCIRemovablePortTerminateIterator;

}
+(id)sharedMonitor;
+(int)usbCableType;
-(id)init;
-(void)dealloc;
-(void)startCableTypeMonitoringForUUID:(id)arg1 ;
-(void)stopCableTypeMonitoringForUUID:(id)arg1 ;
-(void)initUSB30XHCIRemovablePortNotifications;
-(void)cleanupUSB30XHCIRemovablePortNotifications;
-(void)sendUSBCableTypeChangedNotification;
@end

