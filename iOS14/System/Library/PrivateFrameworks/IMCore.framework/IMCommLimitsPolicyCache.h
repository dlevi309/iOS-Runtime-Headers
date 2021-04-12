/*
* Generated on Thursday, January 14, 2021 at 2:24:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
*/


@class NSMutableDictionary;

@interface IMCommLimitsPolicyCache : NSObject {

	NSMutableDictionary* _conversationContextToParticipantIDsHash;
	NSMutableDictionary* _participantIDsHashToConversationContext;
	NSMutableDictionary* _participantIDsHashToChatIdentifier;
	NSMutableDictionary* _chatIdentifierToParticipantIDsHash;

}

@property (nonatomic,retain) NSMutableDictionary * conversationContextToParticipantIDsHash;              //@synthesize conversationContextToParticipantIDsHash=_conversationContextToParticipantIDsHash - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * participantIDsHashToConversationContext;              //@synthesize participantIDsHashToConversationContext=_participantIDsHashToConversationContext - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * participantIDsHashToChatIdentifier;                   //@synthesize participantIDsHashToChatIdentifier=_participantIDsHashToChatIdentifier - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * chatIdentifierToParticipantIDsHash;                   //@synthesize chatIdentifierToParticipantIDsHash=_chatIdentifierToParticipantIDsHash - In the implementation block
-(id)init;
-(id)conversationContextForChat:(id)arg1 ;
-(NSMutableDictionary *)participantIDsHashToChatIdentifier;
-(NSMutableDictionary *)chatIdentifierToParticipantIDsHash;
-(NSMutableDictionary *)participantIDsHashToConversationContext;
-(NSMutableDictionary *)conversationContextToParticipantIDsHash;
-(id)chatForParticipantIDsHash:(id)arg1 ;
-(void)addTrackingForChat:(id)arg1 participantIDsHash:(id)arg2 ;
-(void)removeTrackingForChat:(id)arg1 ;
-(BOOL)isFetchingCommLimitsPolicyForChat:(id)arg1 ;
-(id)chatForConversationContext:(id)arg1 ;
-(void)addTrackingForConversationContext:(id)arg1 forParticipantIDsHash:(id)arg2 ;
-(void)addSentinelContextForParticipantIDsHash:(id)arg1 ;
-(id)contextForParticipantIDsHash:(id)arg1 ;
-(void)setConversationContextToParticipantIDsHash:(NSMutableDictionary *)arg1 ;
-(void)setParticipantIDsHashToConversationContext:(NSMutableDictionary *)arg1 ;
-(void)setParticipantIDsHashToChatIdentifier:(NSMutableDictionary *)arg1 ;
-(void)setChatIdentifierToParticipantIDsHash:(NSMutableDictionary *)arg1 ;
@end

