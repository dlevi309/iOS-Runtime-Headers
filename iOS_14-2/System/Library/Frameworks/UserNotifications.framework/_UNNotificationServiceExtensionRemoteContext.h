/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
*/

#import <UserNotifications/UserNotifications-Structs.h>
#import <UserNotifications/_UNNotificationServiceExtensionContext.h>
#import <libobjc.A.dylib/_UNNotificationServiceExtensionRemoteXPCInterface.h>

@class UNNotificationServiceExtension, NSString;

@interface _UNNotificationServiceExtensionRemoteContext : _UNNotificationServiceExtensionContext <_UNNotificationServiceExtensionRemoteXPCInterface> {

	atomic_flag _hasRepliedFlag;
	UNNotificationServiceExtension* _extensionInstance;

}

@property (nonatomic,retain) UNNotificationServiceExtension * extensionInstance;              //@synthesize extensionInstance=_extensionInstance - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)setExtensionInstance:(UNNotificationServiceExtension *)arg1 ;
-(UNNotificationServiceExtension *)extensionInstance;
-(id)initWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 contextUUID:(id)arg3 ;
-(id)_stageAttachmentsForNotificationContent:(id)arg1 ;
-(void)serviceExtensionTimeWillExpire;
-(void)didReceiveNotificationRequest:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)serviceExtensionPerformCleanup;
@end

