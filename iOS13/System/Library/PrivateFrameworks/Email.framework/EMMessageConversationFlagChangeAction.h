/*
* Generated on Monday, March 1, 2021 at 2:32:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
*/

#import <Email/EMMessageChangeAction.h>

@interface EMMessageConversationFlagChangeAction : EMMessageChangeAction {

	long long _conversationNotificationLevel;
	long long _originalConversationNotificationLevel;
	long long _conversationID;

}

@property (nonatomic,readonly) long long conversationNotificationLevel;                      //@synthesize conversationNotificationLevel=_conversationNotificationLevel - In the implementation block
@property (nonatomic,readonly) long long originalConversationNotificationLevel;              //@synthesize originalConversationNotificationLevel=_originalConversationNotificationLevel - In the implementation block
@property (assign) long long conversationID;                                                 //@synthesize conversationID=_conversationID - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)signpostType;
-(long long)conversationID;
-(void)setConversationID:(long long)arg1 ;
-(long long)conversationNotificationLevel;
-(id)initWithConversationID:(long long)arg1 conversationNotificationLevel:(long long)arg2 originalConversationNotificationLevel:(long long)arg3 ;
-(id)initWithMessage:(id)arg1 conversationNotificationLevel:(long long)arg2 ;
-(long long)originalConversationNotificationLevel;
@end

