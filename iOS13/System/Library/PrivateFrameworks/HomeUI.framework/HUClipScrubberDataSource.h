/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <libobjc.A.dylib/HFCameraPlaybackEngineObserver.h>
#import <UIKit/UICollectionViewDataSource.h>

@class NSArray, HUClipScrubberTimeController, HMCameraClip, UICollectionView, NSDate, HFCameraPlaybackEngine, HUClipScrubberSelectionView, NSString;

@interface HUClipScrubberDataSource : NSObject <HFCameraPlaybackEngineObserver, UICollectionViewDataSource> {

	BOOL _editing;
	BOOL _selectionViewHidden;
	NSArray* _clips;
	HUClipScrubberTimeController* _timeController;
	HMCameraClip* _currentClip;
	UICollectionView* _clipCollectionView;
	unsigned long long _currentTimelineState;
	unsigned long long _displayMode;
	NSDate* _currentDate;
	HFCameraPlaybackEngine* _playbackEngine;
	unsigned long long _mostRecentClipIndex;
	long long _lastSelectedClipIndex;
	double _startingPinchDeltaX;
	HUClipScrubberSelectionView* _selectionView;
	double _lastGestureScale;

}

@property (nonatomic,retain) HUClipScrubberTimeController * timeController;               //@synthesize timeController=_timeController - In the implementation block
@property (assign,nonatomic) double startingPinchDeltaX;                                  //@synthesize startingPinchDeltaX=_startingPinchDeltaX - In the implementation block
@property (nonatomic,retain) HUClipScrubberSelectionView * selectionView;                 //@synthesize selectionView=_selectionView - In the implementation block
@property (assign,nonatomic) double lastGestureScale;                                     //@synthesize lastGestureScale=_lastGestureScale - In the implementation block
@property (nonatomic,readonly) NSArray * clips;                                           //@synthesize clips=_clips - In the implementation block
@property (assign,nonatomic,__weak) HMCameraClip * currentClip;                           //@synthesize currentClip=_currentClip - In the implementation block
@property (assign,nonatomic,__weak) UICollectionView * clipCollectionView;                //@synthesize clipCollectionView=_clipCollectionView - In the implementation block
@property (assign,nonatomic) unsigned long long currentTimelineState;                     //@synthesize currentTimelineState=_currentTimelineState - In the implementation block
@property (assign,nonatomic) unsigned long long displayMode;                              //@synthesize displayMode=_displayMode - In the implementation block
@property (assign,getter=isEditing,nonatomic) BOOL editing;                               //@synthesize editing=_editing - In the implementation block
@property (nonatomic,retain) NSDate * currentDate;                                        //@synthesize currentDate=_currentDate - In the implementation block
@property (assign,nonatomic,__weak) HFCameraPlaybackEngine * playbackEngine;              //@synthesize playbackEngine=_playbackEngine - In the implementation block
@property (nonatomic,readonly) unsigned long long mostRecentClipIndex;                    //@synthesize mostRecentClipIndex=_mostRecentClipIndex - In the implementation block
@property (assign,nonatomic) long long lastSelectedClipIndex;                             //@synthesize lastSelectedClipIndex=_lastSelectedClipIndex - In the implementation block
@property (assign,nonatomic) BOOL selectionViewHidden;                                    //@synthesize selectionViewHidden=_selectionViewHidden - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(BOOL)isEditing;
-(HUClipScrubberSelectionView *)selectionView;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(void)setEditing:(BOOL)arg1 ;
-(unsigned long long)displayMode;
-(void)setSelectionView:(HUClipScrubberSelectionView *)arg1 ;
-(void)setDisplayMode:(unsigned long long)arg1 ;
-(NSDate *)currentDate;
-(HFCameraPlaybackEngine *)playbackEngine;
-(void)setPlaybackEngine:(HFCameraPlaybackEngine *)arg1 ;
-(void)setCurrentDate:(NSDate *)arg1 ;
-(NSArray *)clips;
-(void)playbackEngine:(id)arg1 didUpdateClips:(id)arg2 ;
-(void)playbackEngine:(id)arg1 didRemoveClips:(id)arg2 ;
-(HMCameraClip *)currentClip;
-(void)setCurrentClip:(HMCameraClip *)arg1 ;
-(UICollectionView *)clipCollectionView;
-(void)setClipCollectionView:(UICollectionView *)arg1 ;
-(void)reloadClips:(id)arg1 ;
-(void)updateMostRecentClipIndex;
-(HUClipScrubberTimeController *)timeController;
-(void)_updateClipCollectionView;
-(void)setSelectionViewHidden:(BOOL)arg1 ;
-(unsigned long long)mostRecentClipIndex;
-(void)setLastSelectedClipIndex:(long long)arg1 ;
-(long long)lastSelectedClipIndex;
-(void)setCurrentTimelineState:(unsigned long long)arg1 ;
-(void)updateSelectionViewIfNeeded;
-(double)lastGestureScale;
-(void)setLastGestureScale:(double)arg1 ;
-(BOOL)_isZoomingIn:(double)arg1 ;
-(id)startDateFromCell:(id)arg1 ;
-(id)selectedDateFromCell:(id)arg1 atCurrentOffset:(double)arg2 ;
-(id)_indexPathsForClip:(id)arg1 ;
-(BOOL)isClipLocatedAtIndexPath:(id)arg1 ;
-(void)toggleSelectionStateForItemAtIndexPath:(id)arg1 ;
-(void)updateToClipAtIndexPath:(id)arg1 ;
-(id)initWithClips:(id)arg1 ;
-(void)beginTimeScaleTrackingForPinchGesture:(id)arg1 ;
-(void)changeTimeScaleForPinchGesture:(id)arg1 ;
-(double)offsetForClip:(id)arg1 ;
-(id)selectedDateFromCell:(id)arg1 atOffset:(double)arg2 ;
-(double)scrubbingResolutionForClip:(id)arg1 ;
-(void)setTimeController:(HUClipScrubberTimeController *)arg1 ;
-(unsigned long long)currentTimelineState;
-(BOOL)selectionViewHidden;
-(double)startingPinchDeltaX;
-(void)setStartingPinchDeltaX:(double)arg1 ;
@end

