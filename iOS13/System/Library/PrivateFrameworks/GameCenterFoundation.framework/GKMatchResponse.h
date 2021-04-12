/*
* Generated on Monday, March 1, 2021 at 2:34:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
*/

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class NSString, NSArray, NSData, NSDictionary, GKMatchRequestInternal, GKDispatchGroup;

@interface GKMatchResponse : GKInternalRepresentation {

	int _sequence;
	NSString* _rid;
	NSArray* _matches;
	NSData* _sessionToken;
	NSArray* _relayPushes;
	NSData* _cdxTicket;
	long long _state;
	NSDictionary* _serverRequest;
	GKMatchRequestInternal* _matchRequest;
	GKDispatchGroup* _matchingGroup;

}

@property (assign,nonatomic) long long state;                          //@synthesize state=_state - In the implementation block
@property (retain) NSString * rid;                                     //@synthesize rid=_rid - In the implementation block
@property (retain) NSArray * matches;                                  //@synthesize matches=_matches - In the implementation block
@property (retain) NSData * sessionToken;                              //@synthesize sessionToken=_sessionToken - In the implementation block
@property (retain) NSArray * relayPushes;                              //@synthesize relayPushes=_relayPushes - In the implementation block
@property (retain) NSData * cdxTicket;                                 //@synthesize cdxTicket=_cdxTicket - In the implementation block
@property (assign) GKDispatchGroup * matchingGroup;                    //@synthesize matchingGroup=_matchingGroup - In the implementation block
@property (retain) GKMatchRequestInternal * matchRequest;              //@synthesize matchRequest=_matchRequest - In the implementation block
@property (retain) NSDictionary * serverRequest;                       //@synthesize serverRequest=_serverRequest - In the implementation block
@property (readonly) int sequence;                                     //@synthesize sequence=_sequence - In the implementation block
+(id)secureCodedPropertyKeys;
-(void)dealloc;
-(BOOL)isCancelled;
-(BOOL)isFinished;
-(long long)state;
-(int)sequence;
-(void)setState:(long long)arg1 ;
-(BOOL)transitionToState:(long long)arg1 ;
-(NSArray *)matches;
-(void)setMatches:(NSArray *)arg1 ;
-(void)setSessionToken:(NSData *)arg1 ;
-(NSData *)sessionToken;
-(GKMatchRequestInternal *)matchRequest;
-(void)setMatchRequest:(GKMatchRequestInternal *)arg1 ;
-(NSString *)rid;
-(void)setRid:(NSString *)arg1 ;
-(NSData *)cdxTicket;
-(NSArray *)relayPushes;
-(int)_incrementSequence;
-(void)setRelayPushes:(NSArray *)arg1 ;
-(void)setCdxTicket:(NSData *)arg1 ;
-(NSDictionary *)serverRequest;
-(void)setServerRequest:(NSDictionary *)arg1 ;
-(GKDispatchGroup *)matchingGroup;
-(void)setMatchingGroup:(GKDispatchGroup *)arg1 ;
@end

