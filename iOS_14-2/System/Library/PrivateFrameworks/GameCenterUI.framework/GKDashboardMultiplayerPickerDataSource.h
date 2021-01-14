/*
* Generated on Thursday, January 14, 2021 at 2:23:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <GameCenterUI/GKCollectionDataSource.h>

@protocol GKDashboardNearbyBrowserDelegate, GKDashboardMultiplayerPickerDatasourceDelegate;
@class NSMutableDictionary, NSArray, NSObject, NSMutableArray, GKContactDataSource;

@interface GKDashboardMultiplayerPickerDataSource : GKCollectionDataSource {

	BOOL _showsAllFriends;
	BOOL _supportsNearby;
	BOOL _nearbyOnly;
	BOOL _browsingForNearbyPlayers;
	BOOL _didLoad;
	BOOL _excludesContacts;
	BOOL _showsAllSuggestions;
	NSMutableDictionary* _playerStates;
	NSArray* _searchPlayers;
	long long _maxSelectable;
	id<GKDashboardNearbyBrowserDelegate> _nearbyDelegate;
	/*^block*/id _nearbyPlayersChangedHandler;
	long long _friendSortFilterScope;
	NSObject*<GKDashboardMultiplayerPickerDatasourceDelegate> _delegate;
	NSArray* _contactPlayers;
	NSArray* _friendPlayers;
	NSArray* _suggestedPlayers;
	NSArray* _coreRecentPlayers;
	NSArray* _recentPlayers;
	NSMutableArray* _nearbyPlayers;
	NSArray* _hiddenPlayers;
	GKContactDataSource* _contactSource;

}

@property (nonatomic,retain) NSArray * contactPlayers;                                                               //@synthesize contactPlayers=_contactPlayers - In the implementation block
@property (nonatomic,retain) NSArray * friendPlayers;                                                                //@synthesize friendPlayers=_friendPlayers - In the implementation block
@property (nonatomic,retain) NSArray * suggestedPlayers;                                                             //@synthesize suggestedPlayers=_suggestedPlayers - In the implementation block
@property (nonatomic,retain) NSArray * coreRecentPlayers;                                                            //@synthesize coreRecentPlayers=_coreRecentPlayers - In the implementation block
@property (nonatomic,retain) NSArray * recentPlayers;                                                                //@synthesize recentPlayers=_recentPlayers - In the implementation block
@property (nonatomic,retain) NSMutableArray * nearbyPlayers;                                                         //@synthesize nearbyPlayers=_nearbyPlayers - In the implementation block
@property (nonatomic,retain) NSArray * searchPlayers;                                                                //@synthesize searchPlayers=_searchPlayers - In the implementation block
@property (assign,nonatomic) long long maxSelectable;                                                                //@synthesize maxSelectable=_maxSelectable - In the implementation block
@property (nonatomic,retain) NSArray * hiddenPlayers;                                                                //@synthesize hiddenPlayers=_hiddenPlayers - In the implementation block
@property (assign,nonatomic) BOOL browsingForNearbyPlayers;                                                          //@synthesize browsingForNearbyPlayers=_browsingForNearbyPlayers - In the implementation block
@property (assign,nonatomic) BOOL didLoad;                                                                           //@synthesize didLoad=_didLoad - In the implementation block
@property (assign,nonatomic) BOOL excludesContacts;                                                                  //@synthesize excludesContacts=_excludesContacts - In the implementation block
@property (assign,nonatomic) BOOL showsAllSuggestions;                                                               //@synthesize showsAllSuggestions=_showsAllSuggestions - In the implementation block
@property (nonatomic,readonly) BOOL isShowingNearbyInstructionCell; 
@property (nonatomic,readonly) BOOL hasFriends; 
@property (nonatomic,retain) GKContactDataSource * contactSource;                                                    //@synthesize contactSource=_contactSource - In the implementation block
@property (nonatomic,readonly) NSArray * selectedPlayers; 
@property (nonatomic,retain) NSMutableDictionary * playerStates;                                                     //@synthesize playerStates=_playerStates - In the implementation block
@property (nonatomic,readonly) long long unmodifiedItemCount; 
@property (assign,nonatomic) BOOL showsAllFriends;                                                                   //@synthesize showsAllFriends=_showsAllFriends - In the implementation block
@property (assign,nonatomic) BOOL supportsNearby;                                                                    //@synthesize supportsNearby=_supportsNearby - In the implementation block
@property (assign,nonatomic) BOOL nearbyOnly;                                                                        //@synthesize nearbyOnly=_nearbyOnly - In the implementation block
@property (assign,nonatomic) id<GKDashboardNearbyBrowserDelegate> nearbyDelegate;                                    //@synthesize nearbyDelegate=_nearbyDelegate - In the implementation block
@property (nonatomic,copy) id nearbyPlayersChangedHandler;                                                           //@synthesize nearbyPlayersChangedHandler=_nearbyPlayersChangedHandler - In the implementation block
@property (assign,nonatomic) long long friendSortFilterScope;                                                        //@synthesize friendSortFilterScope=_friendSortFilterScope - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<GKDashboardMultiplayerPickerDatasourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3 ;
-(BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(NSObject*<GKDashboardMultiplayerPickerDatasourceDelegate>)delegate;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfItemsInSection:(long long)arg1 ;
-(id)alternateSearchKeyForSection:(long long)arg1 ;
-(id)headerTextForSection:(long long)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3 ;
-(long long)itemCount;
-(double)preferredCollectionHeight;
-(BOOL)nearbyOnly;
-(void)setDelegate:(NSObject*<GKDashboardMultiplayerPickerDatasourceDelegate>)arg1 ;
-(id)initWithMaxSelectable:(long long)arg1 hiddenPlayers:(id)arg2 nearbyOnly:(BOOL)arg3 ;
-(void)setShowsAllFriends:(BOOL)arg1 ;
-(void)setupCollectionView:(id)arg1 ;
-(void)loadDataWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setNearbyPlayersChangedHandler:(id)arg1 ;
-(BOOL)supportsNearby;
-(void)setSupportsNearby:(BOOL)arg1 ;
-(void)setNearbyDelegate:(id<GKDashboardNearbyBrowserDelegate>)arg1 ;
-(id)firstIndexPathForPlayer:(id)arg1 ;
-(long long)unmodifiedItemCount;
-(id)indexPathForFirstPlayer;
-(id)indexPathsForPlayer:(id)arg1 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)setDidLoad:(BOOL)arg1 ;
-(void)setNearbyPlayer:(id)arg1 reachable:(BOOL)arg2 ;
-(void)setBrowsingForNearbyPlayers:(BOOL)arg1 ;
-(BOOL)didLoad;
-(void)setPlayerStates:(NSMutableDictionary *)arg1 ;
-(id)playerForIndexPath:(id)arg1 ;
-(long long)friendSortFilterScope;
-(void)setFriendSortFilterScope:(long long)arg1 ;
-(BOOL)isPlayerAtIndexPathCoreRecent:(id)arg1 ;
-(unsigned long long)cornerMaskForItemAtIndexPath:(id)arg1 ;
-(id<GKDashboardNearbyBrowserDelegate>)nearbyDelegate;
-(void)setSearchPlayers:(NSArray *)arg1 ;
-(NSArray *)selectedPlayers;
-(id)searchKeyForSection:(long long)arg1 ;
-(void)searchTextHasChanged;
-(NSMutableDictionary *)playerStates;
-(NSArray *)searchPlayers;
-(long long)maxSelectable;
-(BOOL)hasFriends;
-(GKContactDataSource *)contactSource;
-(void)setContactSource:(GKContactDataSource *)arg1 ;
-(void)clearSelection;
-(NSArray *)friendPlayers;
-(void)setFriendPlayers:(NSArray *)arg1 ;
-(void)setRecentPlayers:(NSArray *)arg1 ;
-(NSArray *)recentPlayers;
-(void)setMaxSelectable:(long long)arg1 ;
-(void)setHiddenPlayers:(NSArray *)arg1 ;
-(void)setNearbyPlayers:(NSMutableArray *)arg1 ;
-(void)setSuggestedPlayers:(NSArray *)arg1 ;
-(void)setContactPlayers:(NSArray *)arg1 ;
-(void)setNearbyOnly:(BOOL)arg1 ;
-(void)setExcludesContacts:(BOOL)arg1 ;
-(void)setShowsAllSuggestions:(BOOL)arg1 ;
-(id)fullContactWithIdentifier:(id)arg1 ;
-(void)sortPlayersByRecentlyPlayed:(id)arg1 ;
-(void)sortPlayersByNickname:(id)arg1 ;
-(void)setCoreRecentPlayers:(NSArray *)arg1 ;
-(NSArray *)coreRecentPlayers;
-(id)filterHiddenPlayersPredicate;
-(NSMutableArray *)nearbyPlayers;
-(NSArray *)suggestedPlayers;
-(NSArray *)hiddenPlayers;
-(id)playersForSection:(long long)arg1 ignoreSearch:(BOOL)arg2 ;
-(NSArray *)contactPlayers;
-(BOOL)isShowingNearbyInstructionCell;
-(id)playerForPlayerID:(id)arg1 ;
-(BOOL)isShowingAddFriendsFooter;
-(BOOL)_canShowMoreSuggestions;
-(void)setNearbyPlayerID:(id)arg1 reachable:(BOOL)arg2 ;
-(id)nearbyPlayersChangedHandler;
-(BOOL)showsAllSuggestions;
-(double)playerCellHeightInCollectionView:(id)arg1 ;
-(unsigned long long)cornerMaskForSectionHeader;
-(id)attributedFriendFilterTitle;
-(CGSize)boundingSizeForItemsInCollectionView:(id)arg1 ;
-(BOOL)cellSelectableStateAtIndexPath:(id)arg1 playerState:(unsigned long long)arg2 ;
-(BOOL)showsAllFriends;
-(BOOL)browsingForNearbyPlayers;
-(BOOL)excludesContacts;
@end

