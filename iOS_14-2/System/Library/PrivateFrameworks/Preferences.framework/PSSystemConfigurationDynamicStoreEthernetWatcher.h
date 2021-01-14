/*
* Generated on Thursday, January 14, 2021 at 2:20:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/


#import <Preferences/Preferences-Structs.h>
@interface PSSystemConfigurationDynamicStoreEthernetWatcher : NSObject {

	SCDynamicStoreRef _dynamicStore;
	CFRunLoopSourceRef _dynamicStoreSource;

}
+(id)sharedManager;
-(id)init;
-(void)registerForEthernetAdapterNotifications;
-(id)ethernetNetworkInterfaces;
-(BOOL)hasEthernetNetworkInterfaces;
-(void)ethernetDynamicStoreDidChange;
-(BOOL)isHiddenEthernetInterface:(SCNetworkInterfaceRef)arg1 ;
-(void)dealloc;
@end

