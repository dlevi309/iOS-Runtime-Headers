/*
* Generated on Thursday, January 14, 2021 at 2:24:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>

@protocol HFCameraRecordingEvent;
@class HUClipScrubberDataSource, UICollectionView, HFCameraPlaybackEngine, NSString;

@interface HUClipScrubberScrollDelegate : NSObject <UICollectionViewDelegate, UICollectionViewDelegateFlowLayout> {

	BOOL _shouldIgnoreScrolling;
	BOOL _userScrubbing;
	BOOL _hasUserInteractedWithScrubber;
	HUClipScrubberDataSource* _dataSource;
	UICollectionView* _clipCollectionView;
	HFCameraPlaybackEngine* _playbackEngine;
	double _lastContentWidth;
	id<HFCameraRecordingEvent> _currentEvent;
	double _targetScrollOffset;

}

@property (assign,getter=isUserScrubbing,nonatomic) BOOL userScrubbing;                   //@synthesize userScrubbing=_userScrubbing - In the implementation block
@property (assign,nonatomic) BOOL hasUserInteractedWithScrubber;                          //@synthesize hasUserInteractedWithScrubber=_hasUserInteractedWithScrubber - In the implementation block
@property (assign,nonatomic) double lastContentWidth;                                     //@synthesize lastContentWidth=_lastContentWidth - In the implementation block
@property (nonatomic,retain) id<HFCameraRecordingEvent> currentEvent;                     //@synthesize currentEvent=_currentEvent - In the implementation block
@property (assign,nonatomic) double targetScrollOffset;                                   //@synthesize targetScrollOffset=_targetScrollOffset - In the implementation block
@property (assign,nonatomic,__weak) HUClipScrubberDataSource * dataSource;                //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) UICollectionView * clipCollectionView;                //@synthesize clipCollectionView=_clipCollectionView - In the implementation block
@property (assign,nonatomic,__weak) HFCameraPlaybackEngine * playbackEngine;              //@synthesize playbackEngine=_playbackEngine - In the implementation block
@property (assign,nonatomic) BOOL shouldIgnoreScrolling;                                  //@synthesize shouldIgnoreScrolling=_shouldIgnoreScrolling - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3 ;
-(BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithDataSource:(id)arg1 ;
-(HUClipScrubberDataSource *)dataSource;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)finishEditing;
-(void)updateCollectionView:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)setDataSource:(HUClipScrubberDataSource *)arg1 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3 ;
-(double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3 ;
-(id<HFCameraRecordingEvent>)currentEvent;
-(void)scrollViewDidScroll:(id)arg1 ;
-(BOOL)isUserScrubbing;
-(void)setUserScrubbing:(BOOL)arg1 ;
-(void)setPlaybackEngine:(HFCameraPlaybackEngine *)arg1 ;
-(void)setCurrentEvent:(id<HFCameraRecordingEvent>)arg1 ;
-(HFCameraPlaybackEngine *)playbackEngine;
-(void)dealloc;
-(void)beginEditing;
-(UICollectionView *)clipCollectionView;
-(void)setClipCollectionView:(UICollectionView *)arg1 ;
-(void)setShouldIgnoreScrolling:(BOOL)arg1 ;
-(void)updatePlaybackEngineDate:(id)arg1 ;
-(void)setTargetScrollOffset:(double)arg1 ;
-(double)targetScrollOffset;
-(BOOL)_shouldScrollBypassPlaybackEngineUpdate;
-(float)playheadPosition;
-(void)_handleOutOfBoundsTimelinePosition:(float)arg1 ;
-(id)_selectedDateForEventInRect:(CGRect)arg1 ;
-(id)_selectedDateForAreaOfNoActivityAtPoint:(CGPoint)arg1 inScrollView:(id)arg2 ;
-(void)_updateFamiliarFaceCell;
-(double)lastContentWidth;
-(void)setLastContentWidth:(double)arg1 ;
-(BOOL)shouldIgnoreScrolling;
-(BOOL)_doesPrecedingSpacerSpanMultipleDaysForEvent:(id)arg1 ;
-(id)_selectedDateForTodayFromEvent:(id)arg1 percentDuration:(float)arg2 ;
-(id)_selectedDateForYesterdayFromPreviousEvent:(id)arg1 percentDuration:(float)arg2 ;
-(id)_interpolatedDateFromEvent:(id)arg1 toEvent:(id)arg2 insideRect:(CGRect)arg3 atTimelinePosition:(float)arg4 ;
-(BOOL)hasUserInteractedWithScrubber;
-(void)setHasUserInteractedWithScrubber:(BOOL)arg1 ;
@end

