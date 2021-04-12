/*
* Generated on Monday, March 1, 2021 at 2:34:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
*/


@class GKTurnBasedParticipant, GKTurnBasedExchangeReplyInternal, GKTurnBasedMatch, NSData, NSString, NSDate;

@interface GKTurnBasedExchangeReply : NSObject {

	GKTurnBasedParticipant* _recipient;
	GKTurnBasedExchangeReplyInternal* _internal;
	GKTurnBasedMatch* _matchWeak;

}

@property (nonatomic,retain) GKTurnBasedParticipant * recipient;              //@synthesize recipient=_recipient - In the implementation block
@property (nonatomic,retain) NSData * data; 
@property (retain) GKTurnBasedExchangeReplyInternal * internal;               //@synthesize internal=_internal - In the implementation block
@property (assign,nonatomic) GKTurnBasedMatch * match;                        //@synthesize matchWeak=_matchWeak - In the implementation block
@property (nonatomic,readonly) NSString * message; 
@property (nonatomic,readonly) NSDate * replyDate; 
+(BOOL)instancesRespondToSelector:(SEL)arg1 ;
+(id)instanceMethodSignatureForSelector:(SEL)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(id)initWithInternalRepresentation:(id)arg1 ;
-(NSString *)message;
-(GKTurnBasedExchangeReplyInternal *)internal;
-(void)setInternal:(GKTurnBasedExchangeReplyInternal *)arg1 ;
-(void)setRecipient:(GKTurnBasedParticipant *)arg1 ;
-(GKTurnBasedParticipant *)recipient;
-(GKTurnBasedMatch *)match;
-(void)setMatch:(GKTurnBasedMatch *)arg1 ;
@end

