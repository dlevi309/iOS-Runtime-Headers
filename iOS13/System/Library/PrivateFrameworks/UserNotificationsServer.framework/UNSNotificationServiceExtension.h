/*
* Generated on Monday, March 1, 2021 at 2:34:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
*/


@protocol OS_dispatch_queue;
@class NSExtension, NSObject, LSPlugInKitProxy;

@interface UNSNotificationServiceExtension : NSObject {

	NSExtension* _extension;
	double _serviceTime;
	double _graceTime;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) LSPlugInKitProxy * proxy; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
+(id)_extensionIdentifiersCurrentlyAllowedAccessToNotificationCenter;
+(void)_allowAccessToNotificationCenterForServiceExtensionWithIdentifier:(id)arg1 ;
+(void)_disallowAccessToNotificationCenterForServiceExtensionWithIdentifier:(id)arg1 ;
+(BOOL)isAccessToNotificationCenterAllowedForServiceExtensionWithIdentifier:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(LSPlugInKitProxy *)proxy;
-(id)_initWithExtension:(id)arg1 serviceTime:(double)arg2 graceTime:(double)arg3 ;
-(id)mutateContentForNotificationRequest:(id)arg1 error:(id*)arg2 ;
@end

