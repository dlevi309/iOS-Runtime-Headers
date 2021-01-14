/*
* Generated on Thursday, January 14, 2021 at 2:24:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/HFAudioPlayerDelegate.h>

@protocol OS_dispatch_queue, HUAnnouncementsGlobeViewDelegate;
@class NSString, NSMutableDictionary, NSMutableArray, ANRemotePlaybackSession, NSObject, UITapGestureRecognizer, HFAudioPlayer, UIVisualEffectView, UIView, UIImageView, UILabel;

@interface HUAnnouncementGlobeView : UIView <HFAudioPlayerDelegate> {

	BOOL _hasActivePlaybackSession;
	NSString* _selectedAnnouncementID;
	NSMutableDictionary* _announcementsInfo;
	NSMutableArray* _announcementIDs;
	NSMutableArray* _currentlyDisplayedAnnouncements;
	NSMutableArray* _visitedAnnouncements;
	NSString* _announcementGroupID;
	ANRemotePlaybackSession* _announceRemotePlaybackSession;
	NSObject*<OS_dispatch_queue> _dataSourceUpdateQueue;
	id<HUAnnouncementsGlobeViewDelegate> _globeViewDelegate;
	UITapGestureRecognizer* _tapGestureRecognizer;
	NSString* _lastPlayedAnnouncementID;
	HFAudioPlayer* _audioPlayer;
	UIVisualEffectView* _backgroundView;
	UIView* _tappableCoverView;
	UIImageView* _playImageView;
	UILabel* _announcementsProgressLabel;
	unsigned long long _totalNumberOfAnnouncements;
	long long _seedOnceToken;
	long long _displayVisitedOnceToken;
	CGSize _playbackBoundingBoxSize;

}

@property (nonatomic,retain) NSMutableDictionary * announcementsInfo;                                    //@synthesize announcementsInfo=_announcementsInfo - In the implementation block
@property (nonatomic,retain) NSMutableArray * announcementIDs;                                           //@synthesize announcementIDs=_announcementIDs - In the implementation block
@property (nonatomic,retain) NSMutableArray * currentlyDisplayedAnnouncements;                           //@synthesize currentlyDisplayedAnnouncements=_currentlyDisplayedAnnouncements - In the implementation block
@property (nonatomic,retain) NSMutableArray * visitedAnnouncements;                                      //@synthesize visitedAnnouncements=_visitedAnnouncements - In the implementation block
@property (nonatomic,retain) NSString * announcementGroupID;                                             //@synthesize announcementGroupID=_announcementGroupID - In the implementation block
@property (nonatomic,retain) ANRemotePlaybackSession * announceRemotePlaybackSession;                    //@synthesize announceRemotePlaybackSession=_announceRemotePlaybackSession - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dataSourceUpdateQueue;                         //@synthesize dataSourceUpdateQueue=_dataSourceUpdateQueue - In the implementation block
@property (assign,nonatomic,__weak) id<HUAnnouncementsGlobeViewDelegate> globeViewDelegate;              //@synthesize globeViewDelegate=_globeViewDelegate - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * tapGestureRecognizer;                              //@synthesize tapGestureRecognizer=_tapGestureRecognizer - In the implementation block
@property (nonatomic,retain) NSString * lastPlayedAnnouncementID;                                        //@synthesize lastPlayedAnnouncementID=_lastPlayedAnnouncementID - In the implementation block
@property (nonatomic,retain) HFAudioPlayer * audioPlayer;                                                //@synthesize audioPlayer=_audioPlayer - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * backgroundView;                                        //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) UIView * tappableCoverView;                                                 //@synthesize tappableCoverView=_tappableCoverView - In the implementation block
@property (nonatomic,retain) UIImageView * playImageView;                                                //@synthesize playImageView=_playImageView - In the implementation block
@property (nonatomic,retain) UILabel * announcementsProgressLabel;                                       //@synthesize announcementsProgressLabel=_announcementsProgressLabel - In the implementation block
@property (assign,nonatomic) unsigned long long totalNumberOfAnnouncements;                              //@synthesize totalNumberOfAnnouncements=_totalNumberOfAnnouncements - In the implementation block
@property (assign,nonatomic) long long seedOnceToken;                                                    //@synthesize seedOnceToken=_seedOnceToken - In the implementation block
@property (assign,nonatomic) long long displayVisitedOnceToken;                                          //@synthesize displayVisitedOnceToken=_displayVisitedOnceToken - In the implementation block
@property (nonatomic,retain) NSString * selectedAnnouncementID;                                          //@synthesize selectedAnnouncementID=_selectedAnnouncementID - In the implementation block
@property (assign,nonatomic) CGSize playbackBoundingBoxSize;                                             //@synthesize playbackBoundingBoxSize=_playbackBoundingBoxSize - In the implementation block
@property (assign,nonatomic) BOOL hasActivePlaybackSession;                                              //@synthesize hasActivePlaybackSession=_hasActivePlaybackSession - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)stopPlayback;
-(void)setBackgroundView:(UIVisualEffectView *)arg1 ;
-(UIVisualEffectView *)backgroundView;
-(void)setTapGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(HFAudioPlayer *)audioPlayer;
-(void)setAudioPlayer:(HFAudioPlayer *)arg1 ;
-(void)layoutSubviews;
-(void)updateConstraints;
-(UITapGestureRecognizer *)tapGestureRecognizer;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)audioPlayer:(id)arg1 didPausePlaybackWithReason:(id)arg2 ;
-(void)audioPlayer:(id)arg1 didUpdateAveragePower:(double)arg2 ;
-(void)audioPlayerDidFinishPlayback:(id)arg1 withError:(id)arg2 ;
-(void)_togglePlayback:(id)arg1 ;
-(void)_setupSubviewsForAnnouncementInfo:(id)arg1 ;
-(void)_setupIncomingAnnouncementSession;
-(id)_blurEffectForCurrentInterfaceStyle;
-(void)_configureVisualStyleForBackgroundView;
-(NSMutableArray *)currentlyDisplayedAnnouncements;
-(void)_playNextAnnouncement;
-(UIImageView *)playImageView;
-(UIView *)tappableCoverView;
-(id<HUAnnouncementsGlobeViewDelegate>)globeViewDelegate;
-(unsigned long long)totalNumberOfAnnouncements;
-(ANRemotePlaybackSession *)announceRemotePlaybackSession;
-(NSString *)lastPlayedAnnouncementID;
-(void)setAnnounceRemotePlaybackSession:(ANRemotePlaybackSession *)arg1 ;
-(void)_submitAnalyticsForAnnouncePlaybackCompletedSuccessfully:(BOOL)arg1 forAnnouncementID:(id)arg2 interruptedByUser:(BOOL)arg3 ;
-(NSMutableArray *)visitedAnnouncements;
-(NSMutableArray *)announcementIDs;
-(NSMutableDictionary *)announcementsInfo;
-(NSString *)announcementGroupID;
-(NSObject*<OS_dispatch_queue>)dataSourceUpdateQueue;
-(void)setAnnouncementsInfo:(NSMutableDictionary *)arg1 ;
-(void)setAnnouncementIDs:(NSMutableArray *)arg1 ;
-(void)_appendAnnouncements:(id)arg1 withInfo:(id)arg2 ;
-(void)_seedVisitedAnouncements:(id)arg1 withInfo:(id)arg2 ;
-(void)setTotalNumberOfAnnouncements:(unsigned long long)arg1 ;
-(unsigned long long)_indexOfLatestCachedAnnouncementFromIDs:(id)arg1 ;
-(unsigned long long)_numberOfSlotsAvailableForNewAnnouncements:(id)arg1 ;
-(void)_addOrInsertAnnouncementsFromIDs:(id)arg1 withInfo:(id)arg2 withinRange:(NSRange)arg3 inFreeSlots:(unsigned long long)arg4 ;
-(void)_addVisitedAnnouncementsToDisplayQueueIfNeeded;
-(void)_setupConstrainstsForPlaybackViews;
-(void)_playRecentlyAddedAnnouncements;
-(void)_layoutPlaybackViewsWithAnimationDuration:(double)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)_numberOfUnplayedAnnouncements;
-(void)_layoutPlaybackViewCenteredIfNeeded:(id)arg1 ;
-(void)_setupConstraintsForPlaybackViewIfNeeded:(id)arg1 slotPosition:(unsigned long long)arg2 ;
-(void)_updateLayoutAndAppearanceForPlaybackView:(id)arg1 atSlotPosition:(unsigned long long)arg2 ;
-(BOOL)hasActivePlaybackSession;
-(void)setLastPlayedAnnouncementID:(NSString *)arg1 ;
-(double)_xCoordinateForPlaybackViewInSlotPosition:(unsigned long long)arg1 ;
-(double)_yCoordinateForPlaybackViewInSlotPosition:(unsigned long long)arg1 ;
-(double)_radiusOfPlaybackViewInSlotPosition:(unsigned long long)arg1 ;
-(id)_onQueue_fetchNewAnnouncementInfo:(id)arg1 oldestVisitedAnnouncementID:(id)arg2 ;
-(void)_playAnnouncementWithInfo:(id)arg1 ;
-(BOOL)_isNextAnnouncementTheOldest;
-(id)_nextAnnouncementPlaybackView;
-(void)_showVisitedAnnouncementsView;
-(id)initWithAnnouncementPayload:(id)arg1 delegate:(id)arg2 ;
-(void)skipToNextAnnouncement;
-(void)teardownAnnouncements;
-(NSString *)selectedAnnouncementID;
-(void)setSelectedAnnouncementID:(NSString *)arg1 ;
-(CGSize)playbackBoundingBoxSize;
-(void)setPlaybackBoundingBoxSize:(CGSize)arg1 ;
-(void)setHasActivePlaybackSession:(BOOL)arg1 ;
-(void)setCurrentlyDisplayedAnnouncements:(NSMutableArray *)arg1 ;
-(void)setVisitedAnnouncements:(NSMutableArray *)arg1 ;
-(void)setAnnouncementGroupID:(NSString *)arg1 ;
-(void)setDataSourceUpdateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setGlobeViewDelegate:(id<HUAnnouncementsGlobeViewDelegate>)arg1 ;
-(void)setTappableCoverView:(UIView *)arg1 ;
-(void)setPlayImageView:(UIImageView *)arg1 ;
-(UILabel *)announcementsProgressLabel;
-(void)setAnnouncementsProgressLabel:(UILabel *)arg1 ;
-(long long)seedOnceToken;
-(void)setSeedOnceToken:(long long)arg1 ;
-(long long)displayVisitedOnceToken;
-(void)setDisplayVisitedOnceToken:(long long)arg1 ;
@end

