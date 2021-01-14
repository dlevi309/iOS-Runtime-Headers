/*
* Generated on Thursday, January 14, 2021 at 2:25:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface HDActivityAWDActivityCompanionSharingEvent : PBCodable <NSCopying> {

	long long _numberOfFriends;
	long long _numberOfFriendsAwaitingResponse;
	long long _numberOfFriendsHiddenFromMe;
	long long _numberOfFriendsMuted;
	long long _numberOfFriendsMyDataHidden;
	long long _numberOfFriendsPendingMyResponse;
	unsigned long long _timestamp;
	int _maxFriendDuration;
	int _medianFriendDuration;
	int _minFriendDuration;
	SCD_Struct_HD38 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                            //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasNumberOfFriends; 
@property (assign,nonatomic) long long numberOfFriends;                               //@synthesize numberOfFriends=_numberOfFriends - In the implementation block
@property (assign,nonatomic) BOOL hasMedianFriendDuration; 
@property (assign,nonatomic) int medianFriendDuration;                                //@synthesize medianFriendDuration=_medianFriendDuration - In the implementation block
@property (assign,nonatomic) BOOL hasMinFriendDuration; 
@property (assign,nonatomic) int minFriendDuration;                                   //@synthesize minFriendDuration=_minFriendDuration - In the implementation block
@property (assign,nonatomic) BOOL hasMaxFriendDuration; 
@property (assign,nonatomic) int maxFriendDuration;                                   //@synthesize maxFriendDuration=_maxFriendDuration - In the implementation block
@property (assign,nonatomic) BOOL hasNumberOfFriendsMyDataHidden; 
@property (assign,nonatomic) long long numberOfFriendsMyDataHidden;                   //@synthesize numberOfFriendsMyDataHidden=_numberOfFriendsMyDataHidden - In the implementation block
@property (assign,nonatomic) BOOL hasNumberOfFriendsHiddenFromMe; 
@property (assign,nonatomic) long long numberOfFriendsHiddenFromMe;                   //@synthesize numberOfFriendsHiddenFromMe=_numberOfFriendsHiddenFromMe - In the implementation block
@property (assign,nonatomic) BOOL hasNumberOfFriendsMuted; 
@property (assign,nonatomic) long long numberOfFriendsMuted;                          //@synthesize numberOfFriendsMuted=_numberOfFriendsMuted - In the implementation block
@property (assign,nonatomic) BOOL hasNumberOfFriendsAwaitingResponse; 
@property (assign,nonatomic) long long numberOfFriendsAwaitingResponse;               //@synthesize numberOfFriendsAwaitingResponse=_numberOfFriendsAwaitingResponse - In the implementation block
@property (assign,nonatomic) BOOL hasNumberOfFriendsPendingMyResponse; 
@property (assign,nonatomic) long long numberOfFriendsPendingMyResponse;              //@synthesize numberOfFriendsPendingMyResponse=_numberOfFriendsPendingMyResponse - In the implementation block
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(long long)numberOfFriends;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setNumberOfFriends:(long long)arg1 ;
-(void)setHasNumberOfFriends:(BOOL)arg1 ;
-(BOOL)hasNumberOfFriends;
-(int)medianFriendDuration;
-(void)setMedianFriendDuration:(int)arg1 ;
-(void)setHasMedianFriendDuration:(BOOL)arg1 ;
-(BOOL)hasMedianFriendDuration;
-(id)medianFriendDurationAsString:(int)arg1 ;
-(int)StringAsMedianFriendDuration:(id)arg1 ;
-(int)minFriendDuration;
-(void)setMinFriendDuration:(int)arg1 ;
-(void)setHasMinFriendDuration:(BOOL)arg1 ;
-(BOOL)hasMinFriendDuration;
-(id)minFriendDurationAsString:(int)arg1 ;
-(int)StringAsMinFriendDuration:(id)arg1 ;
-(int)maxFriendDuration;
-(void)setMaxFriendDuration:(int)arg1 ;
-(void)setHasMaxFriendDuration:(BOOL)arg1 ;
-(BOOL)hasMaxFriendDuration;
-(id)maxFriendDurationAsString:(int)arg1 ;
-(int)StringAsMaxFriendDuration:(id)arg1 ;
-(void)setNumberOfFriendsMyDataHidden:(long long)arg1 ;
-(void)setHasNumberOfFriendsMyDataHidden:(BOOL)arg1 ;
-(BOOL)hasNumberOfFriendsMyDataHidden;
-(void)setNumberOfFriendsHiddenFromMe:(long long)arg1 ;
-(void)setHasNumberOfFriendsHiddenFromMe:(BOOL)arg1 ;
-(BOOL)hasNumberOfFriendsHiddenFromMe;
-(void)setNumberOfFriendsMuted:(long long)arg1 ;
-(void)setHasNumberOfFriendsMuted:(BOOL)arg1 ;
-(BOOL)hasNumberOfFriendsMuted;
-(void)setNumberOfFriendsAwaitingResponse:(long long)arg1 ;
-(void)setHasNumberOfFriendsAwaitingResponse:(BOOL)arg1 ;
-(BOOL)hasNumberOfFriendsAwaitingResponse;
-(void)setNumberOfFriendsPendingMyResponse:(long long)arg1 ;
-(void)setHasNumberOfFriendsPendingMyResponse:(BOOL)arg1 ;
-(BOOL)hasNumberOfFriendsPendingMyResponse;
-(long long)numberOfFriendsMyDataHidden;
-(long long)numberOfFriendsHiddenFromMe;
-(long long)numberOfFriendsMuted;
-(long long)numberOfFriendsAwaitingResponse;
-(long long)numberOfFriendsPendingMyResponse;
@end
