/*
* Generated on Thursday, January 14, 2021 at 2:26:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
*/

#import <libobjc.A.dylib/UNUserNotificationCenterDelegate.h>

@class WFUserNotificationManager, NSString;

@interface WFDialogNotificationManager : NSObject <UNUserNotificationCenterDelegate> {

	WFUserNotificationManager* _userNotificationManager;

}

@property (nonatomic,readonly) WFUserNotificationManager * userNotificationManager;              //@synthesize userNotificationManager=_userNotificationManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)categoryIdentifiers;
+(id)dialogNotificationConfirmationCategory;
+(id)dialogNotificationCategory;
-(void)postNotificationWithRequest:(id)arg1 presentationMode:(unsigned long long)arg2 runningContext:(id)arg3 ;
-(unsigned long long)vcShortcutPresentationModeFromWFDialogPresentationMode:(unsigned long long)arg1 ;
-(void)removeStaleNotifications;
-(id)initWithUserNotificationManager:(id)arg1 ;
-(WFUserNotificationManager *)userNotificationManager;
-(void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
@end

