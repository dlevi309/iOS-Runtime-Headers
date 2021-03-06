/*
* Generated on Thursday, January 14, 2021 at 2:24:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)rid;
-(void)setMatches:(NSArray *)arg1 ;
-(BOOL)transitionToState:(long long)arg1 ;
-(BOOL)isFinished;
-(void)setSessionToken:(NSData *)arg1 ;
-(void)setRid:(NSString *)arg1 ;
-(NSData *)sessionToken;
-(NSArray *)matches;
-(int)sequence;
-(void)setState:(long long)arg1 ;
-(long long)state;
-(GKMatchRequestInternal *)matchRequest;
-(void)setMatchRequest:(GKMatchRequestInternal *)arg1 ;
-(BOOL)isCancelled;
-(void)dealloc;
-(NSData *)cdxTicket;
-(NSArray *)relayPushes;
-(int)_incrementSequence;
-(BOOL)isTimeout;
-(BOOL)isNetworkError;
-(void)setRelayPushes:(NSArray *)arg1 ;
-(void)setCdxTicket:(NSData *)arg1 ;
-(NSDictionary *)serverRequest;
-(void)setServerRequest:(NSDictionary *)arg1 ;
-(GKDispatchGroup *)matchingGroup;
-(void)setMatchingGroup:(GKDispatchGroup *)arg1 ;
@end

