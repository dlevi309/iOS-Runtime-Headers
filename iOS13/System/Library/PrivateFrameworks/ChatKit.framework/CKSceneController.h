/*
* Generated on Monday, March 1, 2021 at 2:31:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)_starkManagerSharedInstance;
-(id)messagesSceneDelegate;
@end

