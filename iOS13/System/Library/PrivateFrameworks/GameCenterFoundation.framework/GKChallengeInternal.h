/*
* Generated on Monday, March 1, 2021 at 2:34:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
*/

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class NSString, NSDate, NSOrderedSet, GKGameInternal, GKPlayerInternal;

@interface GKChallengeInternal : GKInternalRepresentation {

	NSString* _challengeID;
	NSString* _message;
	NSDate* _issueDate;
	NSDate* _completionDate;
	NSOrderedSet* _compatibleBundleIDs;
	GKGameInternal* _game;
	GKPlayerInternal* _issuingPlayer;
	GKPlayerInternal* _receivingPlayer;
	long long _state;
	NSString* _bundleID;

}

@property (nonatomic,retain) NSString * challengeID;                          //@synthesize challengeID=_challengeID - In the implementation block
@property (nonatomic,retain) NSString * bundleID;                             //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,retain) NSDate * issueDate;                              //@synthesize issueDate=_issueDate - In the implementation block
@property (nonatomic,retain) NSDate * completionDate;                         //@synthesize completionDate=_completionDate - In the implementation block
@property (assign,nonatomic) long long state;                                 //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSOrderedSet * compatibleBundleIDs;              //@synthesize compatibleBundleIDs=_compatibleBundleIDs - In the implementation block
@property (nonatomic,retain) NSString * message;                              //@synthesize message=_message - In the implementation block
@property (nonatomic,retain) GKGameInternal * game;                           //@synthesize game=_game - In the implementation block
@property (nonatomic,retain) GKPlayerInternal * issuingPlayer;                //@synthesize issuingPlayer=_issuingPlayer - In the implementation block
@property (nonatomic,retain) GKPlayerInternal * receivingPlayer;              //@synthesize receivingPlayer=_receivingPlayer - In the implementation block
@property (nonatomic,readonly) unsigned long long type; 
@property (nonatomic,readonly) NSString * titleText; 
@property (nonatomic,readonly) NSString * subtitleText; 
+(id)internalRepresentation;
+(id)secureCodedPropertyKeys;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(unsigned long long)type;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)state;
-(NSString *)bundleID;
-(void)setBundleID:(NSString *)arg1 ;
-(void)setState:(long long)arg1 ;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)titleText;
-(NSString *)subtitleText;
-(void)setCompletionDate:(NSDate *)arg1 ;
-(NSDate *)completionDate;
-(GKGameInternal *)game;
-(void)setGame:(GKGameInternal *)arg1 ;
-(NSDate *)issueDate;
-(GKPlayerInternal *)issuingPlayer;
-(void)setIssueDate:(NSDate *)arg1 ;
-(id)serverRepresentation;
-(id)descriptionSubstitutionMap;
-(GKPlayerInternal *)receivingPlayer;
-(void)setIssuingPlayer:(GKPlayerInternal *)arg1 ;
-(NSString *)challengeID;
-(id)serverRepresentationForReceivingPlayer:(id)arg1 ;
-(id)findLocalGameBundleID;
-(void)setChallengeID:(NSString *)arg1 ;
-(void)setReceivingPlayer:(GKPlayerInternal *)arg1 ;
-(NSOrderedSet *)compatibleBundleIDs;
-(void)setCompatibleBundleIDs:(NSOrderedSet *)arg1 ;
@end

