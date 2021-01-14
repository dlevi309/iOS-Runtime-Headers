/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/

#import <libobjc.A.dylib/EFLoggable.h>

@protocol EMUserProfileProvider;
@class MFMailboxProvider, EMBlockedSenderManager, NSString;

@interface MFMessageTransformer : NSObject <EFLoggable> {

	MFMailboxProvider* _mailboxProvider;
	id<EMUserProfileProvider> _userProfileProvider;
	EMBlockedSenderManager* _blockedSenderManager;

}

@property (nonatomic,readonly) MFMailboxProvider * mailboxProvider;                        //@synthesize mailboxProvider=_mailboxProvider - In the implementation block
@property (nonatomic,readonly) id<EMUserProfileProvider> userProfileProvider;              //@synthesize userProfileProvider=_userProfileProvider - In the implementation block
@property (nonatomic,readonly) EMBlockedSenderManager * blockedSenderManager;              //@synthesize blockedSenderManager=_blockedSenderManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)log;
-(id)transformLegacyMailMessage:(id)arg1 mailboxScope:(id)arg2 loaderBlock:(/*^block*/id)arg3 ;
-(id)initWithMailboxProvider:(id)arg1 userProfileProvider:(id)arg2 blockedSenderManager:(id)arg3 ;
-(id)transformLegacyMailMessages:(id)arg1 mailboxScope:(id)arg2 ;
-(id)_transformLegacyMailMessage:(id)arg1 mailboxScope:(id)arg2 duplicateInfo:(id)arg3 loaderBlock:(/*^block*/id)arg4 ;
-(id<EMUserProfileProvider>)userProfileProvider;
-(EMBlockedSenderManager *)blockedSenderManager;
-(MFMailboxProvider *)mailboxProvider;
@end

