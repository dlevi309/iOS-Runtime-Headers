/*
* Generated on Thursday, January 14, 2021 at 2:25:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

