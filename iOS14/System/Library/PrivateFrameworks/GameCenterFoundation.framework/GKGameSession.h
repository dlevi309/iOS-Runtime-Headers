/*
* Generated on Thursday, January 14, 2021 at 2:24:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, GKCloudPlayer, NSArray, NSDate, NSMutableDictionary;

@interface GKGameSession : NSObject <NSSecureCoding> {

	NSString* _identifier;
	NSString* _title;
	GKCloudPlayer* _owner;
	NSArray* _players;
	NSDate* _lastModifiedDate;
	GKCloudPlayer* _lastModifiedPlayer;
	long long _maxNumberOfConnectedPlayers;
	NSString* _serverChangeTag;
	NSMutableDictionary* _playerStates;

}

@property (nonatomic,retain) NSString * identifier; 
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) GKCloudPlayer * owner; 
@property (nonatomic,retain) NSArray * players; 
@property (nonatomic,retain) NSDate * lastModifiedDate; 
@property (nonatomic,retain) GKCloudPlayer * lastModifiedPlayer; 
@property (nonatomic,retain) NSString * serverChangeTag; 
@property (assign,nonatomic) long long maxNumberOfConnectedPlayers; 
@property (nonatomic,retain) NSMutableDictionary * playerStates; 
@property (nonatomic,retain) NSString * identifier;                              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * title;                                   //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) GKCloudPlayer * owner;                              //@synthesize owner=_owner - In the implementation block
@property (nonatomic,retain) NSArray * players;                                  //@synthesize players=_players - In the implementation block
@property (nonatomic,retain) NSDate * lastModifiedDate;                          //@synthesize lastModifiedDate=_lastModifiedDate - In the implementation block
@property (nonatomic,retain) GKCloudPlayer * lastModifiedPlayer;                 //@synthesize lastModifiedPlayer=_lastModifiedPlayer - In the implementation block
@property (nonatomic,retain) NSString * serverChangeTag;                         //@synthesize serverChangeTag=_serverChangeTag - In the implementation block
@property (assign,nonatomic) long long maxNumberOfConnectedPlayers;              //@synthesize maxNumberOfConnectedPlayers=_maxNumberOfConnectedPlayers - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * playerStates;                 //@synthesize playerStates=_playerStates - In the implementation block
@property (nonatomic,readonly) NSArray * badgedPlayers; 
+(BOOL)supportsSecureCoding;
+(void)getSessionsForZone:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(void)postSession:(id)arg1 player:(id)arg2 didSaveData:(id)arg3 ;
+(void)getZonesWithCompletionHandler:(/*^block*/id)arg1 ;
+(void)removeSessionWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(void)postSession:(id)arg1 didReceiveData:(id)arg2 fromPlayer:(id)arg3 ;
+(void)createSessionInContainer:(id)arg1 withTitle:(id)arg2 maxConnectedPlayers:(long long)arg3 completionHandler:(/*^block*/id)arg4 ;
+(void)postSession:(id)arg1 didReceiveMessage:(id)arg2 withData:(id)arg3 fromPlayer:(id)arg4 ;
+(void)postSession:(id)arg1 didAddPlayer:(id)arg2 ;
+(void)loadSessionsInContainer:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(id)gk_sessionEventListeners;
+(void)removeEventListener:(id)arg1 ;
+(void)postSession:(id)arg1 player:(id)arg2 didChangeConnectionState:(long long)arg3 ;
+(void)addEventListener:(id)arg1 ;
+(void)postSession:(id)arg1 didRemovePlayer:(id)arg2 ;
+(void)loadSessionWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSArray *)players;
-(GKCloudPlayer *)owner;
-(NSDate *)lastModifiedDate;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)loadDataWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)description;
-(void)setPlayers:(NSArray *)arg1 ;
-(void)setLastModifiedDate:(NSDate *)arg1 ;
-(void)setPlayerStates:(NSMutableDictionary *)arg1 ;
-(void)setOwner:(GKCloudPlayer *)arg1 ;
-(NSMutableDictionary *)playerStates;
-(id)initWithCoder:(id)arg1 ;
-(id)_gkDescriptionWithChildren:(long long)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)updateWithSession:(id)arg1 ;
-(NSString *)title;
-(void)getShareURLWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)saveData:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)descriptionSubstitutionMap;
-(void)setLastModifiedPlayer:(GKCloudPlayer *)arg1 ;
-(void)setServerChangeTag:(NSString *)arg1 ;
-(void)setMaxNumberOfConnectedPlayers:(long long)arg1 ;
-(GKCloudPlayer *)lastModifiedPlayer;
-(NSString *)serverChangeTag;
-(long long)maxNumberOfConnectedPlayers;
-(void)setConnectionState:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)playersWithConnectionState:(long long)arg1 ;
-(void)sendData:(id)arg1 withTransportType:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)sendMessageWithLocalizedFormatKey:(id)arg1 arguments:(id)arg2 data:(id)arg3 toPlayers:(id)arg4 badgePlayers:(BOOL)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)clearBadgeForPlayers:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSArray *)badgedPlayers;
@end

