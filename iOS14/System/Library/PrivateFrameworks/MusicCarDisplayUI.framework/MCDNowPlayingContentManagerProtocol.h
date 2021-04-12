/*
* Generated on Thursday, January 14, 2021 at 2:28:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
*/

@class MPModelSong, MPModelPlaylistEntry, MPModelPlaylist, MPModelRadioStation, NSString;


@protocol MCDNowPlayingContentManagerProtocol
@property (assign,nonatomic) BOOL limitedUI; 
@property (nonatomic,readonly) long long playerState; 
@property (nonatomic,readonly) MPModelSong * currentPlayingSong; 
@property (nonatomic,readonly) MPModelPlaylistEntry * currentPlayingPlaylistEntry; 
@property (nonatomic,readonly) MPModelPlaylist * currentPlayingPlaylist; 
@property (nonatomic,readonly) MPModelRadioStation * currentPlayingRadioStation; 
@property (assign,nonatomic,__weak) Class tableCellClass; 
@property (nonatomic,copy,readonly) NSString * nowPlayingBundleID; 
@required
-(BOOL)limitedUI;
-(void)setLimitedUI:(BOOL)arg1;
-(long long)playerState;
-(NSString *)nowPlayingBundleID;
-(void)viewWillDisappear;
-(MPModelSong *)currentPlayingSong;
-(id)initWithDelegate:(id)arg1 dataSource:(id)arg2 bundleID:(id)arg3;
-(void)beginRequestObservation;
-(void)endRequestObservation;
-(Class)tableCellClass;
-(MPModelPlaylistEntry *)currentPlayingPlaylistEntry;
-(MPModelPlaylist *)currentPlayingPlaylist;
-(MPModelRadioStation *)currentPlayingRadioStation;
-(void)setTableCellClass:(Class)arg1;

@end

