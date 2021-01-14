/*
* Generated on Thursday, January 14, 2021 at 2:24:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
*/


@class GKTurnBasedParticipant, GKTurnBasedMatch, GKTurnBasedExchangeInternal, NSArray, NSString, NSData, NSDate;

@interface GKTurnBasedExchange : NSObject {

	GKTurnBasedParticipant* _sender;
	GKTurnBasedMatch* _match;
	GKTurnBasedExchangeInternal* _internal;
	NSArray* _replies;
	NSArray* _recipients;

}

@property (nonatomic,retain) NSArray * recipients;                         //@synthesize recipients=_recipients - In the implementation block
@property (nonatomic,retain) NSArray * replies;                            //@synthesize replies=_replies - In the implementation block
@property (nonatomic,retain) NSString * exchangeID; 
@property (nonatomic,retain) GKTurnBasedParticipant * sender;              //@synthesize sender=_sender - In the implementation block
@property (nonatomic,retain) NSData * data; 
@property (nonatomic,retain) NSDate * timeoutDate; 
@property (nonatomic,retain) NSDate * completionDate; 
@property (retain) GKTurnBasedExchangeInternal * internal;                 //@synthesize internal=_internal - In the implementation block
@property (assign,nonatomic,__weak) GKTurnBasedMatch * match;              //@synthesize match=_match - In the implementation block
@property (nonatomic,readonly) char status; 
@property (nonatomic,readonly) NSString * message; 
@property (nonatomic,readonly) NSDate * sendDate; 
+(id)instanceMethodSignatureForSelector:(SEL)arg1 ;
+(BOOL)instancesRespondToSelector:(SEL)arg1 ;
-(void)setInternal:(GKTurnBasedExchangeInternal *)arg1 ;
-(NSArray *)recipients;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(GKTurnBasedParticipant *)sender;
-(NSString *)message;
-(void)setSender:(GKTurnBasedParticipant *)arg1 ;
-(id)init;
-(void)setRecipients:(NSArray *)arg1 ;
-(GKTurnBasedMatch *)match;
-(GKTurnBasedExchangeInternal *)internal;
-(id)valueForUndefinedKey:(id)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(void)setMatch:(GKTurnBasedMatch *)arg1 ;
-(id)description;
-(id)initWithInternalRepresentation:(id)arg1 ;
-(NSArray *)replies;
-(unsigned long long)hash;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(char)status;
-(void)setReplies:(NSArray *)arg1 ;
-(void)_updateInternalFromMatchInternal:(id)arg1 ;
-(void)cancelWithLocalizableMessageKey:(id)arg1 arguments:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)replyWithLocalizableMessageKey:(id)arg1 arguments:(id)arg2 data:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
@end

