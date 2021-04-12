/*
* Generated on Monday, March 1, 2021 at 2:35:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <Memories/PMCoreAnalyticsEvent.h>
#import <libobjc.A.dylib/CoreAnalyticsEventProtocol.h>

@class NSDate, NSString;

@interface PMMovieProviderAnalyticsEvent : PMCoreAnalyticsEvent <CoreAnalyticsEventProtocol> {

	BOOL _didChangeMusic;
	BOOL _featuredMusicUsed;
	BOOL _didChangeTitle;
	BOOL _didChangeSubTitle;
	BOOL _didChangeMood;
	BOOL _didChangeDuration;
	BOOL _didChangeKeyAsset;
	BOOL _didChangeTrimRange;
	BOOL _didPlayAllTheWayThrough;
	BOOL _didStartPlayback;
	BOOL _didShare;
	BOOL _didEdit;
	BOOL _didAbortDuringDownload;
	long long _changedMusicCount;
	long long _changedTitleCount;
	long long _changedSubTitleCount;
	long long _changedMoodCount;
	long long _changedDurationCount;
	long long _changedKeyAssetCount;
	long long _changedTrimRangeCount;
	long long _playedAllTheWayThroughCount;
	long long _startedPlaybackCount;
	long long _sharedCount;
	long long _editDoneCount;
	long long _abortedDuringDownloadCount;
	long long _assetCountDeltaFromEditing;
	NSDate* _creationDate;

}

@property (assign,nonatomic) long long changedMusicCount;                        //@synthesize changedMusicCount=_changedMusicCount - In the implementation block
@property (assign,nonatomic) BOOL didChangeMusic;                                //@synthesize didChangeMusic=_didChangeMusic - In the implementation block
@property (assign,nonatomic) BOOL featuredMusicUsed;                             //@synthesize featuredMusicUsed=_featuredMusicUsed - In the implementation block
@property (assign,nonatomic) long long changedTitleCount;                        //@synthesize changedTitleCount=_changedTitleCount - In the implementation block
@property (assign,nonatomic) BOOL didChangeTitle;                                //@synthesize didChangeTitle=_didChangeTitle - In the implementation block
@property (assign,nonatomic) long long changedSubTitleCount;                     //@synthesize changedSubTitleCount=_changedSubTitleCount - In the implementation block
@property (assign,nonatomic) BOOL didChangeSubTitle;                             //@synthesize didChangeSubTitle=_didChangeSubTitle - In the implementation block
@property (assign,nonatomic) long long changedMoodCount;                         //@synthesize changedMoodCount=_changedMoodCount - In the implementation block
@property (assign,nonatomic) BOOL didChangeMood;                                 //@synthesize didChangeMood=_didChangeMood - In the implementation block
@property (assign,nonatomic) long long changedDurationCount;                     //@synthesize changedDurationCount=_changedDurationCount - In the implementation block
@property (assign,nonatomic) BOOL didChangeDuration;                             //@synthesize didChangeDuration=_didChangeDuration - In the implementation block
@property (assign,nonatomic) long long changedKeyAssetCount;                     //@synthesize changedKeyAssetCount=_changedKeyAssetCount - In the implementation block
@property (assign,nonatomic) BOOL didChangeKeyAsset;                             //@synthesize didChangeKeyAsset=_didChangeKeyAsset - In the implementation block
@property (assign,nonatomic) long long changedTrimRangeCount;                    //@synthesize changedTrimRangeCount=_changedTrimRangeCount - In the implementation block
@property (assign,nonatomic) BOOL didChangeTrimRange;                            //@synthesize didChangeTrimRange=_didChangeTrimRange - In the implementation block
@property (assign,nonatomic) long long playedAllTheWayThroughCount;              //@synthesize playedAllTheWayThroughCount=_playedAllTheWayThroughCount - In the implementation block
@property (assign,nonatomic) BOOL didPlayAllTheWayThrough;                       //@synthesize didPlayAllTheWayThrough=_didPlayAllTheWayThrough - In the implementation block
@property (assign,nonatomic) long long startedPlaybackCount;                     //@synthesize startedPlaybackCount=_startedPlaybackCount - In the implementation block
@property (assign,nonatomic) BOOL didStartPlayback;                              //@synthesize didStartPlayback=_didStartPlayback - In the implementation block
@property (assign,nonatomic) long long sharedCount;                              //@synthesize sharedCount=_sharedCount - In the implementation block
@property (assign,nonatomic) BOOL didShare;                                      //@synthesize didShare=_didShare - In the implementation block
@property (assign,nonatomic) long long editDoneCount;                            //@synthesize editDoneCount=_editDoneCount - In the implementation block
@property (assign,nonatomic) BOOL didEdit;                                       //@synthesize didEdit=_didEdit - In the implementation block
@property (assign,nonatomic) long long abortedDuringDownloadCount;               //@synthesize abortedDuringDownloadCount=_abortedDuringDownloadCount - In the implementation block
@property (assign,nonatomic) BOOL didAbortDuringDownload;                        //@synthesize didAbortDuringDownload=_didAbortDuringDownload - In the implementation block
@property (assign,nonatomic) long long assetCountDeltaFromEditing;               //@synthesize assetCountDeltaFromEditing=_assetCountDeltaFromEditing - In the implementation block
@property (nonatomic,retain) NSDate * creationDate;                              //@synthesize creationDate=_creationDate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)copy;
-(NSDate *)creationDate;
-(id)eventName;
-(void)setCreationDate:(NSDate *)arg1 ;
-(id)eventPayload;
-(id)eventBySettingFeaturedMusicUsed:(BOOL)arg1 ;
-(id)eventByIncreasingChangedMusicCount;
-(id)eventByAssigningDidChangeMusic;
-(id)eventByIncreasingEditDoneCount;
-(id)eventByAssigningDidEdit;
-(id)eventByIncreasingChangedTitleCount;
-(id)eventByAssigningDidChangeTitle;
-(id)eventByIncreasingChangedSubtitleCount;
-(id)eventByAssigningDidChangeSubTitle;
-(id)eventByIncreasingChangedTrimRangeCount;
-(id)eventByAssigningDidChangeTrimRange;
-(id)eventByIncreasingChangedKeyAssetCount;
-(id)eventByAssigningDidChangeKeyAsset;
-(id)eventByIncreasingAbortedDuringDownloadCount;
-(id)eventByAssigningDidAbortDuringDownload;
-(id)eventByAssigningAssetCountDeltaFromEditingWithCount:(long long)arg1 ;
-(id)eventByIncreasingStartedPlaybackCount;
-(id)eventByAssigningDidStartPlayback;
-(id)eventByIncreasingPlayedAllTheWayThroughCount;
-(id)eventByAssigningDidPlayAllTheWayThrough;
-(id)eventByIncreasingChangedDurationCount;
-(id)eventByAssigningDidChangeDuration;
-(id)eventByIncreasingChangedMoodCount;
-(id)eventByAssigningDidChangeMood;
-(id)eventByIncreasingSharedCount;
-(id)eventByAssigningDidShare;
-(void)setChangedMusicCount:(long long)arg1 ;
-(void)setDidChangeMusic:(BOOL)arg1 ;
-(void)setFeaturedMusicUsed:(BOOL)arg1 ;
-(void)setChangedTitleCount:(long long)arg1 ;
-(void)setDidChangeTitle:(BOOL)arg1 ;
-(void)setChangedSubTitleCount:(long long)arg1 ;
-(void)setDidChangeSubTitle:(BOOL)arg1 ;
-(void)setChangedMoodCount:(long long)arg1 ;
-(void)setDidChangeMood:(BOOL)arg1 ;
-(void)setChangedDurationCount:(long long)arg1 ;
-(void)setDidChangeDuration:(BOOL)arg1 ;
-(void)setChangedKeyAssetCount:(long long)arg1 ;
-(void)setDidChangeKeyAsset:(BOOL)arg1 ;
-(void)setChangedTrimRangeCount:(long long)arg1 ;
-(void)setDidChangeTrimRange:(BOOL)arg1 ;
-(void)setPlayedAllTheWayThroughCount:(long long)arg1 ;
-(void)setDidPlayAllTheWayThrough:(BOOL)arg1 ;
-(void)setStartedPlaybackCount:(long long)arg1 ;
-(void)setDidStartPlayback:(BOOL)arg1 ;
-(void)setSharedCount:(long long)arg1 ;
-(void)setDidShare:(BOOL)arg1 ;
-(void)setEditDoneCount:(long long)arg1 ;
-(void)setDidEdit:(BOOL)arg1 ;
-(void)setAbortedDuringDownloadCount:(long long)arg1 ;
-(void)setDidAbortDuringDownload:(BOOL)arg1 ;
-(void)setAssetCountDeltaFromEditing:(long long)arg1 ;
-(long long)changedMusicCount;
-(long long)changedTitleCount;
-(long long)changedSubTitleCount;
-(long long)changedMoodCount;
-(long long)changedDurationCount;
-(long long)changedKeyAssetCount;
-(long long)changedTrimRangeCount;
-(long long)playedAllTheWayThroughCount;
-(long long)startedPlaybackCount;
-(long long)sharedCount;
-(long long)editDoneCount;
-(long long)abortedDuringDownloadCount;
-(BOOL)didChangeMusic;
-(BOOL)featuredMusicUsed;
-(BOOL)didChangeTitle;
-(BOOL)didChangeSubTitle;
-(BOOL)didChangeMood;
-(BOOL)didChangeDuration;
-(BOOL)didChangeKeyAsset;
-(BOOL)didChangeTrimRange;
-(BOOL)didPlayAllTheWayThrough;
-(BOOL)didStartPlayback;
-(BOOL)didShare;
-(BOOL)didEdit;
-(BOOL)didAbortDuringDownload;
-(long long)assetCountDeltaFromEditing;
@end

