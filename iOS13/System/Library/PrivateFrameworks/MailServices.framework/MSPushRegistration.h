/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)bundleIdentifier;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(NSString *)accountIdentifier;
-(void)setAccountIdentifier:(NSString *)arg1 ;
-(void)setNotificationNamePrefix:(NSString *)arg1 ;
-(void)setMailboxNames:(NSArray *)arg1 ;
-(void)registerForPush:(/*^block*/id)arg1 ;
-(NSString *)notificationNamePrefix;
-(NSArray *)mailboxNames;
@end

