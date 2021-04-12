/*
* Generated on Thursday, January 14, 2021 at 2:21:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/MPRemoteCommandDelegate_Internal.h>

@protocol OS_dispatch_queue;
@class NSMutableArray, NSObject, MRPlayerPath, MPRemoteCommand, MPSkipIntervalCommand, MPRatingCommand, MPChangePlaybackRateCommand, MPFeedbackCommand, MPChangePlaybackPositionCommand, MPChangeRepeatModeCommand, MPChangeShuffleModeCommand, MPAdvanceShuffleModeCommand, MPAdvanceRepeatModeCommand, MPSetPlaybackQueueCommand, MPInsertIntoPlaybackQueueCommand, MPReorderQueueCommand, MPSetPlaybackSessionCommand, MPPreloadPlaybackSessionCommand, MPSetPriorityForPlaybackSessionCommand, MPChangeQueueEndActionCommand, NSString;

@interface MPRemoteCommandCenter : NSObject <MPRemoteCommandDelegate_Internal> {

	NSMutableArray* _activeCommands;
	NSObject*<OS_dispatch_queue> _serialQueue;
	void* _mediaRemoteCommandHandler;
	BOOL _scheduledSupportedCommandsChangedNotification;
	BOOL _canBeNowPlayingApplication;
	MRPlayerPath* _playerPath;
	BOOL _processingEvent;
	NSMutableArray* _eventQueue;
	unsigned long long _stateHandler;
	BOOL _disableAutomaticCanBeNowPlaying;
	BOOL _wantsSerializedEventDelivery;
	MPRemoteCommand* _pauseCommand;
	MPRemoteCommand* _playCommand;
	MPRemoteCommand* _stopCommand;
	MPRemoteCommand* _togglePlayPauseCommand;
	MPRemoteCommand* _enableLanguageOptionCommand;
	MPRemoteCommand* _disableLanguageOptionCommand;
	MPRemoteCommand* _nextTrackCommand;
	MPRemoteCommand* _previousTrackCommand;
	MPSkipIntervalCommand* _skipForwardCommand;
	MPSkipIntervalCommand* _skipBackwardCommand;
	MPRemoteCommand* _seekForwardCommand;
	MPRemoteCommand* _seekBackwardCommand;
	MPRatingCommand* _ratingCommand;
	MPChangePlaybackRateCommand* _changePlaybackRateCommand;
	MPFeedbackCommand* _likeCommand;
	MPFeedbackCommand* _dislikeCommand;
	MPFeedbackCommand* _bookmarkCommand;
	MPChangePlaybackPositionCommand* _changePlaybackPositionCommand;
	MPChangeRepeatModeCommand* _changeRepeatModeCommand;
	MPChangeShuffleModeCommand* _changeShuffleModeCommand;
	MPRemoteCommand* _specialSeekForwardCommand;
	MPRemoteCommand* _specialSeekBackwardCommand;
	MPAdvanceShuffleModeCommand* _advanceShuffleModeCommand;
	MPAdvanceRepeatModeCommand* _advanceRepeatModeCommand;
	MPRemoteCommand* _createRadioStationCommand;
	MPSetPlaybackQueueCommand* _setPlaybackQueueCommand;
	MPRemoteCommand* _prepareForSetPlaybackQueueCommand;
	MPInsertIntoPlaybackQueueCommand* _insertIntoPlaybackQueueCommand;
	MPRemoteCommand* _removeFromPlaybackQueueCommand;
	MPReorderQueueCommand* _reorderQueueCommand;
	MPRemoteCommand* _playItemInQueueCommand;
	MPFeedbackCommand* _addNowPlayingItemToLibraryCommand;
	MPFeedbackCommand* _addItemToLibraryCommand;
	MPSetPlaybackSessionCommand* _setPlaybackSessionCommand;
	MPPreloadPlaybackSessionCommand* _preloadPlaybackSessionCommand;
	MPSetPriorityForPlaybackSessionCommand* _setPriorityForPlaybackSessionCommand;
	MPRemoteCommand* _discardPlaybackSessionCommand;
	MPRemoteCommand* _reshuffleCommand;
	MPChangeQueueEndActionCommand* _changeQueueEndActionCommand;
	NSString* _playerID;

}

@property (nonatomic,readonly) MPRemoteCommand * specialSeekForwardCommand;                                                //@synthesize specialSeekForwardCommand=_specialSeekForwardCommand - In the implementation block
@property (nonatomic,readonly) MPRemoteCommand * specialSeekBackwardCommand;                                               //@synthesize specialSeekBackwardCommand=_specialSeekBackwardCommand - In the implementation block
@property (nonatomic,readonly) MPAdvanceShuffleModeCommand * advanceShuffleModeCommand;                                    //@synthesize advanceShuffleModeCommand=_advanceShuffleModeCommand - In the implementation block
@property (nonatomic,readonly) MPAdvanceRepeatModeCommand * advanceRepeatModeCommand;                                      //@synthesize advanceRepeatModeCommand=_advanceRepeatModeCommand - In the implementation block
@property (nonatomic,readonly) MPRemoteCommand * removeFromPlaybackQueueCommand;                                           //@synthesize removeFromPlaybackQueueCommand=_removeFromPlaybackQueueCommand - In the implementation block
@property (nonatomic,readonly) MPReorderQueueCommand * reorderQueueCommand;                                                //@synthesize reorderQueueCommand=_reorderQueueCommand - In the implementation block
@property (nonatomic,readonly) MPRemoteCommand * playItemInQueueCommand;                                                   //@synthesize playItemInQueueCommand=_playItemInQueueCommand - In the implementation block
@property (nonatomic,readonly) MPRemoteCommand * createRadioStationCommand;                                                //@synthesize createRadioStationCommand=_createRadioStationCommand - In the implementation block
@property (nonatomic,readonly) MPSetPlaybackQueueCommand * setPlaybackQueueCommand;                                        //@synthesize setPlaybackQueueCommand=_setPlaybackQueueCommand - In the implementation block
@property (nonatomic,readonly) MPRemoteCommand * prepareForSetPlaybackQueueCommand;                                        //@synthesize prepareForSetPlaybackQueueCommand=_prepareForSetPlaybackQueueCommand - In the implementation block
@property (nonatomic,readonly) MPInsertIntoPlaybackQueueCommand * insertIntoPlaybackQueueCommand;                          //@synthesize insertIntoPlaybackQueueCommand=_insertIntoPlaybackQueueCommand - In the implementation block
@property (nonatomic,readonly) MPFeedbackCommand * addNowPlayingItemToLibraryCommand;                                      //@synthesize addNowPlayingItemToLibraryCommand=_addNowPlayingItemToLibraryCommand - In the implementation block
@property (nonatomic,readonly) MPFeedbackCommand * addItemToLibraryCommand;                                                //@synthesize addItemToLibraryCommand=_addItemToLibraryCommand - In the implementation block
@property (nonatomic,readonly) MPSetPlaybackSessionCommand * setPlaybackSessionCommand;                                    //@synthesize setPlaybackSessionCommand=_setPlaybackSessionCommand - In the implementation block
@property (nonatomic,readonly) MPPreloadPlaybackSessionCommand * preloadPlaybackSessionCommand;                            //@synthesize preloadPlaybackSessionCommand=_preloadPlaybackSessionCommand - In the implementation block
@property (nonatomic,readonly) MPSetPriorityForPlaybackSessionCommand * setPriorityForPlaybackSessionCommand;              //@synthesize setPriorityForPlaybackSessionCommand=_setPriorityForPlaybackSessionCommand - In the implementation block
@property (nonatomic,readonly) MPRemoteCommand * discardPlaybackSessionCommand;                                            //@synthesize discardPlaybackSessionCommand=_discardPlaybackSessionCommand - In the implementation block
@property (nonatomic,readonly) MPRemoteCommand * reshuffleCommand;                                                         //@synthesize reshuffleCommand=_reshuffleCommand - In the implementation block
@property (nonatomic,readonly) MPChangeQueueEndActionCommand * changeQueueEndActionCommand;                                //@synthesize changeQueueEndActionCommand=_changeQueueEndActionCommand - In the implementation block
@property (nonatomic,copy,readonly) NSString * playerID;                                                                   //@synthesize playerID=_playerID - In the implementation block
@property (assign,nonatomic) BOOL disableAutomaticCanBeNowPlaying;                                                         //@synthesize disableAutomaticCanBeNowPlaying=_disableAutomaticCanBeNowPlaying - In the implementation block
@property (assign,nonatomic) BOOL wantsSerializedEventDelivery;                                                            //@synthesize wantsSerializedEventDelivery=_wantsSerializedEventDelivery - In the implementation block
@property (nonatomic,readonly) MPRemoteCommand * pauseCommand;                                                             //@synthesize pauseCommand=_pauseCommand - In the implementation block
@property (nonatomic,readonly) MPRemoteCommand * playCommand;                                                              //@synthesize playCommand=_playCommand - In the implementation block
@property (nonatomic,readonly) MPRemoteCommand * stopCommand;                                                              //@synthesize stopCommand=_stopCommand - In the implementation block
@property (nonatomic,readonly) MPRemoteCommand * togglePlayPauseCommand;                                                   //@synthesize togglePlayPauseCommand=_togglePlayPauseCommand - In the implementation block
@property (nonatomic,readonly) MPRemoteCommand * enableLanguageOptionCommand;                                              //@synthesize enableLanguageOptionCommand=_enableLanguageOptionCommand - In the implementation block
@property (nonatomic,readonly) MPRemoteCommand * disableLanguageOptionCommand;                                             //@synthesize disableLanguageOptionCommand=_disableLanguageOptionCommand - In the implementation block
@property (nonatomic,readonly) MPChangePlaybackRateCommand * changePlaybackRateCommand;                                    //@synthesize changePlaybackRateCommand=_changePlaybackRateCommand - In the implementation block
@property (nonatomic,readonly) MPChangeRepeatModeCommand * changeRepeatModeCommand;                                        //@synthesize changeRepeatModeCommand=_changeRepeatModeCommand - In the implementation block
@property (nonatomic,readonly) MPChangeShuffleModeCommand * changeShuffleModeCommand;                                      //@synthesize changeShuffleModeCommand=_changeShuffleModeCommand - In the implementation block
@property (nonatomic,readonly) MPRemoteCommand * nextTrackCommand;                                                         //@synthesize nextTrackCommand=_nextTrackCommand - In the implementation block
@property (nonatomic,readonly) MPRemoteCommand * previousTrackCommand;                                                     //@synthesize previousTrackCommand=_previousTrackCommand - In the implementation block
@property (nonatomic,readonly) MPSkipIntervalCommand * skipForwardCommand;                                                 //@synthesize skipForwardCommand=_skipForwardCommand - In the implementation block
@property (nonatomic,readonly) MPSkipIntervalCommand * skipBackwardCommand;                                                //@synthesize skipBackwardCommand=_skipBackwardCommand - In the implementation block
@property (nonatomic,readonly) MPRemoteCommand * seekForwardCommand;                                                       //@synthesize seekForwardCommand=_seekForwardCommand - In the implementation block
@property (nonatomic,readonly) MPRemoteCommand * seekBackwardCommand;                                                      //@synthesize seekBackwardCommand=_seekBackwardCommand - In the implementation block
@property (nonatomic,readonly) MPChangePlaybackPositionCommand * changePlaybackPositionCommand;                            //@synthesize changePlaybackPositionCommand=_changePlaybackPositionCommand - In the implementation block
@property (nonatomic,readonly) MPRatingCommand * ratingCommand;                                                            //@synthesize ratingCommand=_ratingCommand - In the implementation block
@property (nonatomic,readonly) MPFeedbackCommand * likeCommand;                                                            //@synthesize likeCommand=_likeCommand - In the implementation block
@property (nonatomic,readonly) MPFeedbackCommand * dislikeCommand;                                                         //@synthesize dislikeCommand=_dislikeCommand - In the implementation block
@property (nonatomic,readonly) MPFeedbackCommand * bookmarkCommand;                                                        //@synthesize bookmarkCommand=_bookmarkCommand - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)getPendingCommandTypesWithCompletion:(/*^block*/id)arg1 ;
+(long long)_numberOfCommandCentersWithTargets;
+(id)commandCenterForPlayerID:(id)arg1 ;
+(void)updateLaunchCommandsWithConfigurationHandler:(/*^block*/id)arg1 ;
+(id)sharedCommandCenter;
-(NSString *)playerID;
-(MPFeedbackCommand *)dislikeCommand;
-(id)initWithPlayerID:(id)arg1 ;
-(MPRemoteCommand *)disableLanguageOptionCommand;
-(void)_flushEventQueue;
-(void)setWantsSerializedEventDelivery:(BOOL)arg1 ;
-(MPRemoteCommand *)prepareForSetPlaybackQueueCommand;
-(MPSkipIntervalCommand *)skipForwardCommand;
-(MPRemoteCommand *)playCommand;
-(MPRemoteCommand *)discardPlaybackSessionCommand;
-(MPRemoteCommand *)seekForwardCommand;
-(MPRemoteCommand *)seekBackwardCommand;
-(id)_activeCommands;
-(MPChangePlaybackPositionCommand *)changePlaybackPositionCommand;
-(void)_startMediaRemoteSync;
-(void)remoteCommandDidMutatePropagatableProperty:(id)arg1 ;
-(MPRemoteCommand *)removeFromPlaybackQueueCommand;
-(MPFeedbackCommand *)addNowPlayingItemToLibraryCommand;
-(MPReorderQueueCommand *)reorderQueueCommand;
-(MPRemoteCommand *)specialSeekForwardCommand;
-(void)_pushMediaRemoteCommand:(unsigned)arg1 withOptions:(CFDictionaryRef)arg2 completion:(/*^block*/id)arg3 ;
-(MPFeedbackCommand *)addItemToLibraryCommand;
-(MPFeedbackCommand *)likeCommand;
-(MPRemoteCommand *)nextTrackCommand;
-(void)_stopMediaRemoteSync;
-(BOOL)disableAutomaticCanBeNowPlaying;
-(MPRemoteCommand *)specialSeekBackwardCommand;
-(BOOL)wantsSerializedEventDelivery;
-(MPRemoteCommand *)previousTrackCommand;
-(MPAdvanceRepeatModeCommand *)advanceRepeatModeCommand;
-(MPChangeRepeatModeCommand *)changeRepeatModeCommand;
-(MPInsertIntoPlaybackQueueCommand *)insertIntoPlaybackQueueCommand;
-(MPChangeShuffleModeCommand *)changeShuffleModeCommand;
-(MPChangePlaybackRateCommand *)changePlaybackRateCommand;
-(MPRemoteCommand *)pauseCommand;
-(MPPreloadPlaybackSessionCommand *)preloadPlaybackSessionCommand;
-(MPSetPriorityForPlaybackSessionCommand *)setPriorityForPlaybackSessionCommand;
-(void)_commandTargetsDidChangeNotification:(id)arg1 ;
-(MPFeedbackCommand *)bookmarkCommand;
-(MPChangeQueueEndActionCommand *)changeQueueEndActionCommand;
-(void)setDisableAutomaticCanBeNowPlaying:(BOOL)arg1 ;
-(MPRemoteCommand *)playItemInQueueCommand;
-(void)getPendingCommandTypesWithCompletion:(/*^block*/id)arg1 ;
-(MPSkipIntervalCommand *)skipBackwardCommand;
-(MPRemoteCommand *)enableLanguageOptionCommand;
-(id)_createRemoteCommandWithConcreteClass:(Class)arg1 mediaRemoteType:(unsigned)arg2 ;
-(MPSetPlaybackQueueCommand *)setPlaybackQueueCommand;
-(MPRemoteCommand *)togglePlayPauseCommand;
-(MPAdvanceShuffleModeCommand *)advanceShuffleModeCommand;
-(void)dispatchCommandEvent:(id)arg1 completion:(/*^block*/id)arg2 ;
-(MPRemoteCommand *)reshuffleCommand;
-(MPRemoteCommand *)stopCommand;
-(MPSetPlaybackSessionCommand *)setPlaybackSessionCommand;
-(void)dealloc;
-(void)_scheduleSupportedCommandsChanged;
-(MPRemoteCommand *)createRadioStationCommand;
-(MPRatingCommand *)ratingCommand;
@end

