/*
* Generated on Monday, March 1, 2021 at 2:35:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
*/

#import <VoiceMemos/VoiceMemos-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/RCWaveformViewDelegate.h>
#import <libobjc.A.dylib/RCTimeObserver.h>

@protocol RCTimeController, RCAVWaveformViewControllerDelegate;
@class RCHitTestForwardingView, RCWaveformDataSource, RCWaveformViewController, RCLayoutMetrics, NSString;

@interface RCAVWaveformViewController : UIViewController <RCWaveformViewDelegate, RCTimeObserver> {

	double _defaultVisibleDuration;
	long long _batchUpdatingDisplayableTimesCount;
	BOOL _needsUpdateDisplayableTime;
	BOOL _showingSelectionOverlayEnabled;
	BOOL _didJumpTime;
	id<RCTimeController> _activeTimeController;
	RCHitTestForwardingView* _leftForwardingView;
	RCHitTestForwardingView* _rightForwardingView;
	BOOL _currentTimeTracksCapturedEndPoint;
	BOOL _autocenterCurrentTimeIndicatorAlways;
	BOOL _clipsTimeMarkersToDuration;
	BOOL _userInteractionEnabled;
	BOOL _selectionOverlayVisible;
	BOOL _isEditMode;
	BOOL _isOverview;
	RCWaveformDataSource* _waveformDataSource;
	id<RCAVWaveformViewControllerDelegate> _delegate;
	RCWaveformViewController* _waveformViewController;
	double _nextPreviewStartTime;
	double _currentTime;
	double _duration;
	RCLayoutMetrics* _layoutMetrics;
	double _maximumSelectionDuration;
	SCD_Struct_RC3 _highlightTimeRange;

}

@property (assign,nonatomic) double duration;                                                              //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) BOOL isEditMode;                                                              //@synthesize isEditMode=_isEditMode - In the implementation block
@property (assign,nonatomic) BOOL isOverview;                                                              //@synthesize isOverview=_isOverview - In the implementation block
@property (nonatomic,retain) RCWaveformDataSource * waveformDataSource;                                    //@synthesize waveformDataSource=_waveformDataSource - In the implementation block
@property (assign,nonatomic,__weak) id<RCAVWaveformViewControllerDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) RCWaveformViewController * waveformViewController;                            //@synthesize waveformViewController=_waveformViewController - In the implementation block
@property (nonatomic,retain) id<RCTimeController> activeTimeController;                                    //@synthesize activeTimeController=_activeTimeController - In the implementation block
@property (nonatomic,readonly) double nextPreviewStartTime;                                                //@synthesize nextPreviewStartTime=_nextPreviewStartTime - In the implementation block
@property (nonatomic,readonly) SCD_Struct_RC3 nextPreviewTimeRange; 
@property (assign,nonatomic) SCD_Struct_RC3 visibleTimeRange; 
@property (assign,nonatomic) SCD_Struct_RC3 highlightTimeRange;                                            //@synthesize highlightTimeRange=_highlightTimeRange - In the implementation block
@property (assign,nonatomic) double currentTime;                                                           //@synthesize currentTime=_currentTime - In the implementation block
@property (assign,nonatomic) BOOL currentTimeTracksCapturedEndPoint;                                       //@synthesize currentTimeTracksCapturedEndPoint=_currentTimeTracksCapturedEndPoint - In the implementation block
@property (nonatomic,readonly) double waveformBottomLineInset; 
@property (nonatomic,readonly) double currentTimeIndicatorCoordinate; 
@property (nonatomic,retain) RCLayoutMetrics * layoutMetrics;                                              //@synthesize layoutMetrics=_layoutMetrics - In the implementation block
@property (assign,nonatomic) BOOL autocenterCurrentTimeIndicatorAlways;                                    //@synthesize autocenterCurrentTimeIndicatorAlways=_autocenterCurrentTimeIndicatorAlways - In the implementation block
@property (assign,nonatomic) BOOL clipsTimeMarkersToDuration;                                              //@synthesize clipsTimeMarkersToDuration=_clipsTimeMarkersToDuration - In the implementation block
@property (assign,getter=isUserInteractionEnabled,nonatomic) BOOL userInteractionEnabled;                  //@synthesize userInteractionEnabled=_userInteractionEnabled - In the implementation block
@property (getter=isSelectionOverlayVisible,nonatomic,readonly) BOOL selectionOverlayVisible;              //@synthesize selectionOverlayVisible=_selectionOverlayVisible - In the implementation block
@property (nonatomic,readonly) SCD_Struct_RC3 selectedTimeRange; 
@property (assign,nonatomic) double maximumSelectionDuration;                                              //@synthesize maximumSelectionDuration=_maximumSelectionDuration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id<RCAVWaveformViewControllerDelegate>)delegate;
-(void)setDelegate:(id<RCAVWaveformViewControllerDelegate>)arg1 ;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(void)setUserInteractionEnabled:(BOOL)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)isUserInteractionEnabled;
-(double)currentTime;
-(void)setCurrentTime:(double)arg1 ;
-(id)_selectionOverlay;
-(RCLayoutMetrics *)layoutMetrics;
-(void)setLayoutMetrics:(RCLayoutMetrics *)arg1 ;
-(void)_setWaveformDataSource:(id)arg1 initialTime:(double)arg2 ;
-(RCWaveformViewController *)waveformViewController;
-(CGRect)annotatedWaveformRectForLayoutBounds:(CGRect)arg1 ;
-(void)_updateCurrentTimeForCapturedInputAtTime:(double)arg1 ;
-(void)_updateDisplayableTimesWithBlock:(/*^block*/id)arg1 ;
-(void)_updateInterfaceForTimeControllerState:(long long)arg1 ;
-(void)setActiveTimeController:(id<RCTimeController>)arg1 ;
-(SCD_Struct_RC3)selectedTimeRange;
-(void)setVisibleTimeRange:(SCD_Struct_RC3)arg1 ;
-(SCD_Struct_RC3)visibleTimeRange;
-(void)setHighlightTimeRange:(SCD_Struct_RC3)arg1 ;
-(SCD_Struct_RC3)highlightTimeRange;
-(void)_didUpdateDisplayableTime;
-(CGRect)waveformRectForLayoutBounds:(CGRect)arg1 ;
-(unsigned long long)_currentTimeDisplayOptionsIgnoringSelectionOverlayState:(BOOL)arg1 ;
-(double)currentTimeIndicatorCoordinate;
-(unsigned long long)_currentTimeDisplayOptions;
-(void)_beginShowingSelectionOverlayAndEnableInsertMode:(BOOL)arg1 ;
-(void)_endShowingSelectionOverlayWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)setSelectedTimeRange:(SCD_Struct_RC3)arg1 animationDuration:(double)arg2 ;
-(double)maximumSelectionDuration;
-(void)setMaximumSelectionDuration:(double)arg1 ;
-(void)_setSelectionOverlayEnabled:(BOOL)arg1 ;
-(void)resetSelectedTimeRangeToFullDuration;
-(double)nextPreviewStartTime;
-(id<RCTimeController>)activeTimeController;
-(BOOL)isOverview;
-(void)waveformViewController:(id)arg1 didScrubToTime:(double)arg2 finished:(BOOL)arg3 ;
-(void)waveformViewControllerWillBeginEditingSelectedTimeRange:(id)arg1 ;
-(void)waveformViewControllerDidEndEditingSelectedTimeRange:(id)arg1 ;
-(void)waveformViewController:(id)arg1 didChangeToSelectedTimeRange:(SCD_Struct_RC3)arg2 ;
-(void)timeController:(id)arg1 didChangeRate:(float)arg2 ;
-(void)timeController:(id)arg1 didChangeState:(long long)arg2 ;
-(void)timeController:(id)arg1 didChangeCurrentTime:(double)arg2 ;
-(void)timeController:(id)arg1 didChangeCurrentTime:(double)arg2 didJumpTime:(BOOL)arg3 ;
-(void)timeController:(id)arg1 didChangeCurrentTime:(double)arg2 didChangeDuration:(double)arg3 ;
-(id)initWithWaveformDataSource:(id)arg1 isOverview:(BOOL)arg2 isLockScreen:(BOOL)arg3 delegate:(id)arg4 ;
-(void)reloadWaveformDataSource:(id)arg1 withActiveTimeController:(id)arg2 ;
-(void)reloadWaveformDataSource:(id)arg1 initialTime:(double)arg2 ;
-(void)setIsEditMode:(BOOL)arg1 ;
-(SCD_Struct_RC3)nextPreviewTimeRange;
-(SCD_Struct_RC3)setHighlightTimeRange;
-(double)waveformBottomLineInset;
-(void)setAutocenterCurrentTimeIndicatorAlways:(BOOL)arg1 ;
-(void)setClipsTimeMarkersToDuration:(BOOL)arg1 ;
-(void)showSelectionOverlayAndEnableInsertMode:(BOOL)arg1 ;
-(void)hidSelectionOverlayWithCompletionBlock:(/*^block*/id)arg1 ;
-(RCWaveformDataSource *)waveformDataSource;
-(void)setWaveformDataSource:(RCWaveformDataSource *)arg1 ;
-(void)setWaveformViewController:(RCWaveformViewController *)arg1 ;
-(BOOL)currentTimeTracksCapturedEndPoint;
-(void)setCurrentTimeTracksCapturedEndPoint:(BOOL)arg1 ;
-(BOOL)autocenterCurrentTimeIndicatorAlways;
-(BOOL)clipsTimeMarkersToDuration;
-(BOOL)isSelectionOverlayVisible;
-(BOOL)isEditMode;
-(void)setIsOverview:(BOOL)arg1 ;
@end

