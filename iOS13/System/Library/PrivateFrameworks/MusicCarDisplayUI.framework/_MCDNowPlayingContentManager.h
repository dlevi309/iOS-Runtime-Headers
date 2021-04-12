/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
*/

#import <MusicCarDisplayUI/MusicCarDisplayUI-Structs.h>
#import <libobjc.A.dylib/MPRequestResponseControllerDelegate.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <libobjc.A.dylib/CARSessionObserving.h>
#import <libobjc.A.dylib/MCDNowPlayingContentManagerProtocol.h>
#import <libobjc.A.dylib/MCDNowPlayingViewControllerDataSource.h>
#import <libobjc.A.dylib/MCDNowPlayingViewControllerDelegate.h>

@protocol MCDNowPlayingDataSource, MCDNowPlayingContentManagerDelegate;
@class MPModelSong, MPModelPlaylistEntry, MPModelPlaylist, MPModelRadioStation, NSString, MPRequestResponseController, UIImage, MPArtworkCatalog, CARSessionStatus, UIAlertController, MSVTimer, MPCPlayerResponse, UITableView, MPCPlayerResponseItem;

@interface _MCDNowPlayingContentManager : NSObject <MPRequestResponseControllerDelegate, UITableViewDelegate, UITableViewDataSource, CARSessionObserving, MCDNowPlayingContentManagerProtocol, MCDNowPlayingViewControllerDataSource, MCDNowPlayingViewControllerDelegate> {

	BOOL limitedUI;
	Class tableCellClass;
	MPModelSong* currentPlayingSong;
	MPModelPlaylistEntry* currentPlayingPlaylistEntry;
	MPModelPlaylist* currentPlayingPlaylist;
	MPModelRadioStation* currentPlayingRadioStation;
	MPRequestResponseController* _requestController;
	UIImage* _albumArtwork;
	MPArtworkCatalog* _artworkCatalog;
	id<MCDNowPlayingDataSource> _dataSource;
	NSString* _bundleID;
	CARSessionStatus* _carSessionStatus;
	UIAlertController* _alertController;
	MSVTimer* _artworkTimer;
	id<MCDNowPlayingContentManagerDelegate> _delegate;
	MPCPlayerResponse* _lastReceivedResponse;
	UITableView* _tableView;
	MPCPlayerResponseItem* _nowPlayingItem;

}

@property (nonatomic,retain) MPRequestResponseController * requestController;                      //@synthesize requestController=_requestController - In the implementation block
@property (nonatomic,retain) UIImage * albumArtwork;                                               //@synthesize albumArtwork=_albumArtwork - In the implementation block
@property (nonatomic,retain) MPArtworkCatalog * artworkCatalog;                                    //@synthesize artworkCatalog=_artworkCatalog - In the implementation block
@property (assign,nonatomic,__weak) id<MCDNowPlayingDataSource> dataSource;                        //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) NSString * bundleID;                                                  //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,retain) CARSessionStatus * carSessionStatus;                                  //@synthesize carSessionStatus=_carSessionStatus - In the implementation block
@property (nonatomic,retain) UIAlertController * alertController;                                  //@synthesize alertController=_alertController - In the implementation block
@property (nonatomic,retain) MPModelSong * currentPlayingSong; 
@property (nonatomic,retain) MPModelPlaylistEntry * currentPlayingPlaylistEntry; 
@property (nonatomic,retain) MPModelPlaylist * currentPlayingPlaylist; 
@property (nonatomic,retain) MPModelRadioStation * currentPlayingRadioStation; 
@property (nonatomic,retain) MSVTimer * artworkTimer;                                              //@synthesize artworkTimer=_artworkTimer - In the implementation block
@property (assign,nonatomic,__weak) id<MCDNowPlayingContentManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) MPCPlayerResponse * lastReceivedResponse;                             //@synthesize lastReceivedResponse=_lastReceivedResponse - In the implementation block
@property (assign,nonatomic,__weak) UITableView * tableView;                                       //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) MPCPlayerResponseItem * nowPlayingItem;                               //@synthesize nowPlayingItem=_nowPlayingItem - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL limitedUI; 
@property (assign,nonatomic,__weak) Class tableCellClass; 
@property (nonatomic,copy,readonly) NSString * nowPlayingBundleID; 
-(void)dealloc;
-(id<MCDNowPlayingContentManagerDelegate>)delegate;
-(void)setDelegate:(id<MCDNowPlayingContentManagerDelegate>)arg1 ;
-(NSString *)bundleID;
-(void)setBundleID:(NSString *)arg1 ;
-(id<MCDNowPlayingDataSource>)dataSource;
-(void)setDataSource:(id<MCDNowPlayingDataSource>)arg1 ;
-(void)setAlertController:(UIAlertController *)arg1 ;
-(UIAlertController *)alertController;
-(UITableView *)tableView;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2 ;
-(void)setTableView:(UITableView *)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(BOOL)limitedUI;
-(void)setLimitedUI:(BOOL)arg1 ;
-(MPArtworkCatalog *)artworkCatalog;
-(MPCPlayerResponseItem *)nowPlayingItem;
-(void)setNowPlayingItem:(MPCPlayerResponseItem *)arg1 ;
-(void)sessionDidConnect:(id)arg1 ;
-(void)_limitedUIChanged:(id)arg1 ;
-(void)controller:(id)arg1 defersResponseReplacement:(/*^block*/id)arg2 ;
-(Class)tableCellClass;
-(MPCPlayerResponse *)lastReceivedResponse;
-(void)setLastReceivedResponse:(MPCPlayerResponse *)arg1 ;
-(void)_performRequest;
-(CARSessionStatus *)carSessionStatus;
-(id)_setupRequest;
-(NSString *)nowPlayingBundleID;
-(void)setArtworkCatalog:(MPArtworkCatalog *)arg1 ;
-(void)_showPlaceholderArtwork;
-(void)setArtworkTimer:(MSVTimer *)arg1 ;
-(MSVTimer *)artworkTimer;
-(MPRequestResponseController *)requestController;
-(void)viewWillDisappear;
-(MPModelSong *)currentPlayingSong;
-(id)initWithDelegate:(id)arg1 dataSource:(id)arg2 bundleID:(id)arg3 ;
-(void)beginRequestObservation;
-(void)endRequestObservation;
-(void)setCarSessionStatus:(CARSessionStatus *)arg1 ;
-(BOOL)_shouldShowPlaybackQueueForItemCount:(long long)arg1 ;
-(void)setCurrentPlayingPlaylist:(MPModelPlaylist *)arg1 ;
-(void)setCurrentPlayingRadioStation:(MPModelRadioStation *)arg1 ;
-(void)setCurrentPlayingSong:(MPModelSong *)arg1 ;
-(void)processArtworkForCurrentlyPlayingSong;
-(void)setCurrentPlayingPlaylistEntry:(MPModelPlaylistEntry *)arg1 ;
-(void)_processResponse:(id)arg1 error:(id)arg2 ;
-(void)setAlbumArtwork:(UIImage *)arg1 ;
-(UIImage *)albumArtwork;
-(void)_performChangeRequest:(id)arg1 ;
-(id)nowPlayingViewControllerGetPlaybackRate:(id)arg1 ;
-(MPModelPlaylistEntry *)currentPlayingPlaylistEntry;
-(MPModelPlaylist *)currentPlayingPlaylist;
-(MPModelRadioStation *)currentPlayingRadioStation;
-(void)setTableCellClass:(Class)arg1 ;
-(id)artistTextForNowPlayingController:(id)arg1 ;
-(id)albumTextForNowPlayingController:(id)arg1 ;
-(id)titleForNowPlayingController:(id)arg1 ;
-(id)backgroundArtForNowPlayingController:(id)arg1 ;
-(BOOL)nowPlayingViewControllerIsShowingExplicitTrack:(id)arg1 ;
-(SCD_Struct_MC1)durationSnapshotForNowPlayingViewController:(id)arg1 ;
-(BOOL)nowPlayingViewControllerIsPlaying:(id)arg1 ;
-(long long)shuffleTypeForNowPlayingViewController:(id)arg1 ;
-(long long)repeatTypeForNowPlayingViewController:(id)arg1 ;
-(BOOL)nowPlayingViewControllerCanShuffle:(id)arg1 ;
-(void)nowPlayingViewControllerToggleShuffle:(id)arg1 ;
-(BOOL)nowPlayingViewControllerCanRepeat:(id)arg1 ;
-(void)nowPlayingViewControllerToggleRepeat:(id)arg1 ;
-(BOOL)nowPlayingViewControllerCanShowChangePlaybackRate:(id)arg1 ;
-(void)nowPlayingViewControllerChangePlaybackRate:(id)arg1 ;
-(void)modelResponseDidInvalidate:(id)arg1 ;
-(void)setRequestController:(MPRequestResponseController *)arg1 ;
@end

