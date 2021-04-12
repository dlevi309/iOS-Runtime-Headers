/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 contextUUID:(id)arg3 ;
-(UNNotificationServiceExtension *)extensionInstance;
-(id)_stageAttachmentsForNotificationContent:(id)arg1 ;
-(void)serviceExtensionTimeWillExpire;
-(void)setExtensionInstance:(UNNotificationServiceExtension *)arg1 ;
-(void)didReceiveNotificationRequest:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)serviceExtensionPerformCleanup;
@end

