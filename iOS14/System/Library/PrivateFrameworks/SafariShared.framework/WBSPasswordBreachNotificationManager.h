/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


@class UNUserNotificationCenter;

@interface WBSPasswordBreachNotificationManager : NSObject {

	UNUserNotificationCenter* _notificationCenter;

}
-(id)init;
-(void)addBreachNotificationForSavedPasswords:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)_contentWithSavedPasswords:(id)arg1 ;
-(id)_titleForSavedPasswords:(id)arg1 ;
-(id)_bodyForSavedPasswords:(id)arg1 ;
@end

