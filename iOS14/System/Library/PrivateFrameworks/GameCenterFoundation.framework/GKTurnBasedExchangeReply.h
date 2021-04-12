/*
* Generated on Thursday, January 14, 2021 at 2:24:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
*/


@class GKTurnBasedParticipant, GKTurnBasedExchangeReplyInternal, GKTurnBasedMatch, NSData, NSString, NSDate;

@interface GKTurnBasedExchangeReply : NSObject {

	GKTurnBasedParticipant* _recipient;
	GKTurnBasedExchangeReplyInternal* _internal;
	GKTurnBasedMatch* _match;

}

@property (nonatomic,retain) GKTurnBasedParticipant * recipient;              //@synthesize recipient=_recipient - In the implementation block
@property (nonatomic,retain) NSData * data; 
@property (retain) GKTurnBasedExchangeReplyInternal * internal;               //@synthesize internal=_internal - In the implementation block
@property (assign,nonatomic,__weak) GKTurnBasedMatch * match;                 //@synthesize match=_match - In the implementation block
@property (nonatomic,readonly) NSString * message; 
@property (nonatomic,readonly) NSDate * replyDate; 
+(id)instanceMethodSignatureForSelector:(SEL)arg1 ;
+(BOOL)instancesRespondToSelector:(SEL)arg1 ;
-(void)setInternal:(GKTurnBasedExchangeReplyInternal *)arg1 ;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(void)setRecipient:(GKTurnBasedParticipant *)arg1 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(NSString *)message;
-(id)init;
-(GKTurnBasedMatch *)match;
-(GKTurnBasedExchangeReplyInternal *)internal;
-(id)valueForUndefinedKey:(id)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(void)setMatch:(GKTurnBasedMatch *)arg1 ;
-(id)description;
-(id)initWithInternalRepresentation:(id)arg1 ;
-(unsigned long long)hash;
-(GKTurnBasedParticipant *)recipient;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

