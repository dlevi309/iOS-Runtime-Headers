/*
* Generated on Monday, March 1, 2021 at 2:30:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/


#import <Preferences/Preferences-Structs.h>
@interface PSSystemConfigurationDynamicStoreEthernetWatcher : NSObject {

	SCDynamicStoreRef _dynamicStore;
	CFRunLoopSourceRef _dynamicStoreSource;

}
+(id)sharedManager;
-(id)init;
-(void)dealloc;
-(void)registerForEthernetAdapterNotifications;
-(id)ethernetNetworkInterfaces;
-(BOOL)isHiddenEthernetInterface:(SCNetworkInterfaceRef)arg1 ;
-(BOOL)hasEthernetNetworkInterfaces;
-(void)ethernetDynamicStoreDidChange;
@end

