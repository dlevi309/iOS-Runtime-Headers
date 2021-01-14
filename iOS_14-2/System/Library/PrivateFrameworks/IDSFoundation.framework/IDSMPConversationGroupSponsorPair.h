/*
* Generated on Thursday, January 14, 2021 at 2:22:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/


@class IDSMPConversationKey, NSString;

@interface IDSMPConversationGroupSponsorPair : NSObject {

	IDSMPConversationKey* _conversationKey;
	NSString* _sponsorAlias;

}

@property (nonatomic,readonly) IDSMPConversationKey * conversationKey;              //@synthesize conversationKey=_conversationKey - In the implementation block
@property (nonatomic,readonly) NSString * sponsorAlias;                             //@synthesize sponsorAlias=_sponsorAlias - In the implementation block
-(IDSMPConversationKey *)conversationKey;
-(NSString *)sponsorAlias;
-(id)initWithConversationKey:(id)arg1 sponsorAlias:(id)arg2 ;
@end

