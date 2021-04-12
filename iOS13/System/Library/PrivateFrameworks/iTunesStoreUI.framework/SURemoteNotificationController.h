/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/


@interface SURemoteNotificationController : NSObject

@property (nonatomic,readonly) unsigned long long enabledNotificationTypes; 
+(id)sharedInstance;
-(id)init;
-(unsigned long long)enabledNotificationTypes;
-(void)handleRegistrationFailureWithError:(id)arg1 ;
-(void)handleRegistrationSuccessWithToken:(id)arg1 ;
-(void)handleNotificationDictionary:(id)arg1 ;
@end

