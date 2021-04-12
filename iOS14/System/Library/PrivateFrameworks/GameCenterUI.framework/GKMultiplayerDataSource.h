/*
* Generated on Thursday, January 14, 2021 at 2:23:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <GameCenterUI/GKBasicCollectionViewDataSource.h>

@protocol GKMultiplayerDataSourceDelegate;
@class NSMutableOrderedSet, NSMutableDictionary, NSArray;

@interface GKMultiplayerDataSource : GKBasicCollectionViewDataSource {

	BOOL _automatchAddedToMinInHeader;
	BOOL _removingEnabled;
	BOOL _invitingEnabled;
	BOOL _autoMatching;
	id<GKMultiplayerDataSourceDelegate> _delegate;
	long long _minPlayers;
	long long _maxPlayers;
	long long _automatchPlayerCount;
	NSMutableOrderedSet* _players;
	NSMutableDictionary* _playerStatus;
	NSMutableOrderedSet* _orderedPlayerIDList;

}

@property (nonatomic,retain) NSMutableDictionary * playerStatus;                               //@synthesize playerStatus=_playerStatus - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * players;                                    //@synthesize players=_players - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * orderedPlayerIDList;                        //@synthesize orderedPlayerIDList=_orderedPlayerIDList - In the implementation block
@property (assign,nonatomic,__weak) id<GKMultiplayerDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long minPlayers;                                             //@synthesize minPlayers=_minPlayers - In the implementation block
@property (assign,nonatomic) long long maxPlayers;                                             //@synthesize maxPlayers=_maxPlayers - In the implementation block
@property (assign,nonatomic) long long automatchPlayerCount;                                   //@synthesize automatchPlayerCount=_automatchPlayerCount - In the implementation block
@property (assign,nonatomic) BOOL automatchAddedToMinInHeader;                                 //@synthesize automatchAddedToMinInHeader=_automatchAddedToMinInHeader - In the implementation block
@property (assign,nonatomic) BOOL removingEnabled;                                             //@synthesize removingEnabled=_removingEnabled - In the implementation block
@property (assign,nonatomic) BOOL invitingEnabled;                                             //@synthesize invitingEnabled=_invitingEnabled - In the implementation block
@property (nonatomic,readonly) BOOL autoMatching;                                              //@synthesize autoMatching=_autoMatching - In the implementation block
@property (nonatomic,readonly) BOOL canCancelCurrentMatchmaking; 
@property (nonatomic,readonly) BOOL haveNonGuestPlayers; 
@property (nonatomic,readonly) NSArray * participants; 
-(id)init;
-(NSMutableOrderedSet *)players;
-(id<GKMultiplayerDataSourceDelegate>)delegate;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)minPlayers;
-(long long)maxPlayers;
-(long long)maxAvailablePlayers;
-(void)setInvitingEnabled:(BOOL)arg1 ;
-(void)revertFailedPlayers;
-(id)playersToBeInvited;
-(NSMutableDictionary *)playerStatus;
-(void)setDelegate:(id<GKMultiplayerDataSourceDelegate>)arg1 ;
-(NSArray *)participants;
-(id)playersWithStatus:(long long)arg1 ;
-(void)refreshStatusForParticipant:(id)arg1 ;
-(void)setPlayers:(NSMutableOrderedSet *)arg1 ;
-(id)currentPlayers;
-(BOOL)removingEnabled;
-(BOOL)invitingEnabled;
-(void)updateParticipants;
-(NSMutableOrderedSet *)orderedPlayerIDList;
-(void)updateDataStructuresForRemovedPlayer:(id)arg1 ;
-(BOOL)shouldUpdateStatus:(long long)arg1 withNewStatus:(long long)arg2 ;
-(BOOL)shouldRevertStatus:(long long)arg1 ;
-(void)refreshParticipantsStatuses;
-(void)restoreOrderOfPlayers;
-(id)participantForPlayer:(id)arg1 ;
-(id)participantForAutoMatchNumber:(long long)arg1 ;
-(id)currentPlayersNotInvitedViaMessages;
-(BOOL)automatchAddedToMinInHeader;
-(void)setAutomatchAddedToMinInHeader:(BOOL)arg1 ;
-(BOOL)autoMatching;
-(void)setPlayerStatus:(NSMutableDictionary *)arg1 ;
-(void)setOrderedPlayerIDList:(NSMutableOrderedSet *)arg1 ;
-(void)didChangeMode;
-(void)setMinPlayers:(long long)arg1 ;
-(void)setMaxPlayers:(long long)arg1 ;
-(void)addPlayers:(id)arg1 withStatus:(long long)arg2 complete:(/*^block*/id)arg3 ;
-(id)playersInvited;
-(void)setRemovingEnabled:(BOOL)arg1 ;
-(BOOL)havePendingPlayers;
-(BOOL)haveNonGuestPlayers;
-(void)setAutomatchPlayerCount:(long long)arg1 complete:(/*^block*/id)arg2 ;
-(void)replaceContactPlayers:(id)arg1 withNormalPlayers:(id)arg2 complete:(/*^block*/id)arg3 ;
-(long long)statusForPlayer:(id)arg1 ;
-(id)firstInvitedContactPlayer;
-(void)setStatus:(long long)arg1 forPlayers:(id)arg2 complete:(/*^block*/id)arg3 ;
-(void)addPlayers:(id)arg1 withStatus:(long long)arg2 replaceAutomatches:(BOOL)arg3 complete:(/*^block*/id)arg4 ;
-(void)failedToInvitePlayers;
-(long long)automatchPlayerCount;
-(id)guestPlayers;
-(NSRange)playerRange;
-(void)removePlayers:(id)arg1 complete:(/*^block*/id)arg2 ;
-(id)currentRemotePlayers;
-(BOOL)canCancelCurrentMatchmaking;
-(id)readyPlayers;
-(void)refreshContentsForDataType:(unsigned)arg1 userInfo:(id)arg2 updateNotifier:(id)arg3 ;
-(void)configureCollectionView:(id)arg1 ;
-(void)setParticipantsWithPlayers:(id)arg1 automatchPlayerCount:(long long)arg2 andStatuses:(id)arg3 complete:(/*^block*/id)arg4 ;
-(void)setAutomatchPlayerCount:(long long)arg1 ;
@end

