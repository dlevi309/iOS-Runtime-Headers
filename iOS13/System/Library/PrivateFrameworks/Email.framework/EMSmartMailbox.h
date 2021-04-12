/*
* Generated on Monday, March 1, 2021 at 2:32:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
*/

#import <Email/EMMailbox.h>

@class EMMailboxScope;

@interface EMSmartMailbox : EMMailbox {

	/*^block*/id _predicateGenerator;
	EMMailboxScope* _mailboxScope;
	long long _smartMailboxType;

}

@property (nonatomic,readonly) EMMailboxScope * mailboxScope;              //@synthesize mailboxScope=_mailboxScope - In the implementation block
@property (nonatomic,readonly) long long smartMailboxType;                 //@synthesize smartMailboxType=_smartMailboxType - In the implementation block
+(id)unifiedMailboxOfType:(long long)arg1 name:(id)arg2 additionalPredicate:(id)arg3 ;
+(id)vipMailboxWithMailboxScope:(id)arg1 ;
+(id)flaggedMailboxWithMailboxScope:(id)arg1 ;
+(id)unreadMailboxWithMailboxScope:(id)arg1 ;
+(id)hasAttachmentsMailboxWithMailboxScope:(id)arg1 ;
+(id)notifyThreadsMailboxWithMailboxScope:(id)arg1 ;
+(id)todayMailboxWithMailboxScope:(id)arg1 ;
+(id)muteThreadsMailboxWithMailboxScope:(id)arg1 ;
+(id)includesMeMailboxWithMailboxScope:(id)arg1 ;
+(id)unifiedMailboxOfType:(long long)arg1 name:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(EMMailboxScope *)mailboxScope;
-(BOOL)isSmartMailbox;
-(long long)smartMailboxType;
-(BOOL)supportsSelectAll;
-(BOOL)_shouldArchiveByDefault;
-(id)makePredicate;
-(id)initWithType:(long long)arg1 mailboxType:(long long)arg2 name:(id)arg3 mailboxScope:(id)arg4 predicateGenerator:(/*^block*/id)arg5 ;
@end

