/*
* Generated on Monday, March 1, 2021 at 2:30:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/


@class IDSMPConversationKey, NSString;

@interface IDSMPConversationGroupSponsorPair : NSObject {

	IDSMPConversationKey* _conversationKey;
	NSString* _sponsorAlias;

}

@property (nonatomic,readonly) IDSMPConversationKey * conversationKey;              //@synthesize conversationKey=_conversationKey - In the implementation block
@property (nonatomic,readonly) NSString * sponsorAlias;                             //@synthesize sponsorAlias=_sponsorAlias - In the implementation block
-(NSString *)sponsorAlias;
-(id)initWithConversationKey:(id)arg1 sponsorAlias:(id)arg2 ;
-(IDSMPConversationKey *)conversationKey;
@end

