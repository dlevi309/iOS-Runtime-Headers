/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>

@class HUClipScrubberDataSource, UICollectionView, HFCameraPlaybackEngine, HMCameraClip, NSString;

@interface HUClipScrubberScrollDelegate : NSObject <UICollectionViewDelegate, UICollectionViewDelegateFlowLayout> {

	BOOL _shouldIgnoreScrolling;
	BOOL _isUserScrubbing;
	BOOL _hasUserInteractedWithScrubber;
	HUClipScrubberDataSource* _dataSource;
	UICollectionView* _clipCollectionView;
	HFCameraPlaybackEngine* _playbackEngine;
	double _lastContentWidth;
	HMCameraClip* _currentClip;
	double _targetScrollOffset;

}

@property (assign,nonatomic) BOOL isUserScrubbing;                                        //@synthesize isUserScrubbing=_isUserScrubbing - In the implementation block
@property (assign,nonatomic) BOOL hasUserInteractedWithScrubber;                          //@synthesize hasUserInteractedWithScrubber=_hasUserInteractedWithScrubber - In the implementation block
@property (assign,nonatomic) double lastContentWidth;                                     //@synthesize lastContentWidth=_lastContentWidth - In the implementation block
@property (nonatomic,retain) HMCameraClip * currentClip;                                  //@synthesize currentClip=_currentClip - In the implementation block
@property (assign,nonatomic) double targetScrollOffset;                                   //@synthesize targetScrollOffset=_targetScrollOffset - In the implementation block
@property (assign,nonatomic,__weak) HUClipScrubberDataSource * dataSource;                //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) UICollectionView * clipCollectionView;                //@synthesize clipCollectionView=_clipCollectionView - In the implementation block
@property (assign,nonatomic,__weak) HFCameraPlaybackEngine * playbackEngine;              //@synthesize playbackEngine=_playbackEngine - In the implementation block
@property (assign,nonatomic) BOOL shouldIgnoreScrolling;                                  //@synthesize shouldIgnoreScrolling=_shouldIgnoreScrolling - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)beginEditing;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithDataSource:(id)arg1 ;
-(HUClipScrubberDataSource *)dataSource;
-(void)setDataSource:(HUClipScrubberDataSource *)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3 ;
-(double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3 ;
-(double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3 ;
-(void)updateCollectionView:(id)arg1 ;
-(void)finishEditing;
-(HFCameraPlaybackEngine *)playbackEngine;
-(void)setPlaybackEngine:(HFCameraPlaybackEngine *)arg1 ;
-(HMCameraClip *)currentClip;
-(BOOL)isUserScrubbing;
-(void)setCurrentClip:(HMCameraClip *)arg1 ;
-(UICollectionView *)clipCollectionView;
-(void)setClipCollectionView:(UICollectionView *)arg1 ;
-(void)setShouldIgnoreScrolling:(BOOL)arg1 ;
-(void)updatePlaybackEngineDate:(id)arg1 ;
-(BOOL)_indexPathContainsClip:(id)arg1 ;
-(void)setIsUserScrubbing:(BOOL)arg1 ;
-(void)setTargetScrollOffset:(double)arg1 ;
-(double)targetScrollOffset;
-(BOOL)_shouldScrollBypassPlaybackEngineUpdate;
-(float)playheadPosition;
-(void)_handleOutOfBoundsTimelinePosition:(float)arg1 ;
-(id)_selectedDateForClipInRect:(CGRect)arg1 ;
-(id)_selectedDateForAreaOfNoActivityAtPoint:(CGPoint)arg1 inScrollView:(id)arg2 ;
-(double)lastContentWidth;
-(void)setLastContentWidth:(double)arg1 ;
-(BOOL)shouldIgnoreScrolling;
-(BOOL)_spacerPrecedingClipSpansMultipleDays:(id)arg1 ;
-(id)_selectedDateForTodayFromClip:(id)arg1 percentDuration:(float)arg2 ;
-(id)_selectedDateForYesterdayFromPreviousClip:(id)arg1 percentDuration:(float)arg2 ;
-(id)_interpolatedDateFromClip:(id)arg1 toClip:(id)arg2 insideRect:(CGRect)arg3 atTimelinePosition:(float)arg4 ;
-(BOOL)hasUserInteractedWithScrubber;
-(void)setHasUserInteractedWithScrubber:(BOOL)arg1 ;
@end

