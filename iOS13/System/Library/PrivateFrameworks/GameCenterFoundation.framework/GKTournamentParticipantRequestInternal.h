/*
* Generated on Monday, March 1, 2021 at 2:34:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
*/

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class NSArray;

@interface GKTournamentParticipantRequestInternal : GKInternalRepresentation {

	BOOL _friendsOnly;
	NSArray* _participantStates;
	long long _startIndex;
	long long _count;

}

@property (nonatomic,retain) NSArray * participantStates;              //@synthesize participantStates=_participantStates - In the implementation block
@property (assign,nonatomic) BOOL friendsOnly;                         //@synthesize friendsOnly=_friendsOnly - In the implementation block
@property (assign,nonatomic) long long startIndex;                     //@synthesize startIndex=_startIndex - In the implementation block
@property (assign,nonatomic) long long count;                          //@synthesize count=_count - In the implementation block
+(id)secureCodedPropertyKeys;
-(long long)count;
-(void)setCount:(long long)arg1 ;
-(long long)startIndex;
-(void)setStartIndex:(long long)arg1 ;
-(void)setParticipantStates:(NSArray *)arg1 ;
-(NSArray *)participantStates;
-(BOOL)friendsOnly;
-(void)setFriendsOnly:(BOOL)arg1 ;
@end

