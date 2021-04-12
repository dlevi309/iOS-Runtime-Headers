/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MailServices.framework/MailServices
*/

#import <MailServices/MSMailDefaultService.h>

@class NSString, NSArray;

@interface MSPushRegistration : MSMailDefaultService {

	NSString* _bundleIdentifier;
	NSString* _accountIdentifier;
	NSString* _notificationNamePrefix;
	NSArray* _mailboxNames;

}

@property (nonatomic,copy) NSString * bundleIdentifier;                    //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * accountIdentifier;                   //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (nonatomic,copy) NSString * notificationNamePrefix;              //@synthesize notificationNamePrefix=_notificationNamePrefix - In the implementation block
@property (nonatomic,copy) NSArray * mailboxNames;                         //@synthesize mailboxNames=_mailboxNames - In the implementation block
-(id)init;
-(NSString *)accountIdentifier;
-(NSString *)bundleIdentifier;
-(void)setAccountIdentifier:(NSString *)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)registerForPush:(/*^block*/id)arg1 ;
-(NSString *)notificationNamePrefix;
-(void)setNotificationNamePrefix:(NSString *)arg1 ;
-(NSArray *)mailboxNames;
-(void)setMailboxNames:(NSArray *)arg1 ;
@end

