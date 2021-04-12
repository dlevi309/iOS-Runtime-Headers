/*
* Generated on Thursday, January 14, 2021 at 2:21:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <libobjc.A.dylib/UNUserNotificationCenterDelegate.h>

@class NSString;

@interface CKSceneController : NSObject <UNUserNotificationCenterDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)userNotificationCenter:(id)arg1 willPresentNotification:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(id)_suppressionContextsForChatIdentifier:(id)arg1 personCentricID:(id)arg2 ;
-(id)messagesSceneDelegate;
-(id)messagesControllersFromAllScenes;
@end

