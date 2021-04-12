/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
*/

#import <libobjc.A.dylib/ASDServiceProvider.h>

@class ASDServiceBroker, ASDNotificationCenter, NSString;

@interface ASDAppLibrary : NSObject <ASDServiceProvider> {

	ASDServiceBroker* _serviceBroker;
	ASDNotificationCenter* _notificationCenter;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)interface;
+(long long)launchApp:(id)arg1 ;
+(long long)launchApp:(id)arg1 onPairedDevice:(id)arg2 ;
+(void)launchApp:(id)arg1 withResultHandler:(/*^block*/id)arg2 ;
+(void)launchApp:(id)arg1 onPairedDevice:(id)arg2 withResultHandler:(/*^block*/id)arg3 ;
+(long long)launchMessagesExtensionForApp:(id)arg1 ;
+(void)launchMessagesExtensionForApp:(id)arg1 withResultHandler:(/*^block*/id)arg2 ;
+(void)uninstallApp:(id)arg1 withResultHandler:(/*^block*/id)arg2 ;
-(id)init;
-(id)_initWithServiceBroker:(id)arg1 notificationCenter:(id)arg2 ;
@end

