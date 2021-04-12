/*
* Generated on Monday, March 1, 2021 at 2:35:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
*/

#import <VoiceMemos/VoiceMemos-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <libobjc.A.dylib/RCWaveformRendererDelegate.h>
#import <libobjc.A.dylib/RCWaveformSelectionOverlayDelegate.h>

@protocol RCWaveformViewDelegate;
@class RCWaveformScrollView, RCWaveformRenderer, RCWaveformSelectionOverlay, UIView, NSMutableArray, NSTimer, NSLayoutConstraint, UIPinchGestureRecognizer, RCUIConfiguration, RCLayoutMetrics, RCWaveformDataSource, NSString;

@interface RCWaveformViewController : UIViewController <UIScrollViewDelegate, RCWaveformRendererDelegate, RCWaveformSelectionOverlayDelegate> {

	RCWaveformScrollView* _scrollView;
	RCWaveformRenderer* _rendererController;
	RCWaveformSelectionOverlay* _selectionOverlay;
	UIView* _timeMarkerView;
	UIView* _backgroundView;
	UIView* _backgroundWaveFormHighlightView;
	UIView* _selectionBackgroundView;
	NSMutableArray* _timeMarkerViews;
	NSTimer* _overlayAutoscrollTimer;
	BOOL _timeMarkerViewsNeedInitialLayout;
	BOOL _timeMarkerViewsUpdatesDisabled;
	BOOL _scrubbing;
	float _resumingToForegroundAutoscrollRate;
	BOOL _isCompactView;
	double _layoutWidth;
	double _layoutHeight;
	double _desiredTimeDeltaForVisibleTimeRange;
	double _overlayAutoscrollRateForSelectionTracking;
	double _overlayAutoscrollBaseDuration;
	NSLayoutConstraint* _backgroundWaveFormHighlightViewLeftAlignment;
	NSLayoutConstraint* _backgroundWaveFormHighlightViewRightAlignment;
	NSLayoutConstraint* _renderViewBottomInsetConstraint;
	double _pointsPerSecond;
	double _pointsPerSecondScale;
	UIPinchGestureRecognizer* _pinchGesture;
	BOOL _isPlayback;
	BOOL _scrubbingEnabled;
	BOOL _playing;
	BOOL _capturing;
	BOOL _editing;
	BOOL _isOverview;
	BOOL _clipTimeMarkersToDuration;
	BOOL _selectedTimeRangeEditingEnabled;
	BOOL _selectedTimeRangeScrubbingEnabled;
	BOOL _selectionOverlayShouldUseInsertMode;
	BOOL _showPlayBarOnly;
	id<RCWaveformViewDelegate> _delegate;
	RCUIConfiguration* _UIConfiguration;
	RCLayoutMetrics* _layoutMetrics;
	unsigned long long _currentTimeDisplayOptions;
	double _currentTime;
	double _duration;
	double _maximumSelectionDuration;
	SCD_Struct_RC3 _visibleTimeRange;
	SCD_Struct_RC3 _highlightTimeRange;
	SCD_Struct_RC3 _selectedTimeRange;

}

@property (nonatomic,retain) RCWaveformDataSource * dataSource; 
@property (assign,nonatomic,__weak) id<RCWaveformViewDelegate> delegate;                                                   //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL isPlayback;                                                                              //@synthesize isPlayback=_isPlayback - In the implementation block
@property (assign,nonatomic) BOOL scrubbingEnabled;                                                                        //@synthesize scrubbingEnabled=_scrubbingEnabled - In the implementation block
@property (assign,nonatomic) BOOL playing;                                                                                 //@synthesize playing=_playing - In the implementation block
@property (assign,nonatomic) BOOL capturing;                                                                               //@synthesize capturing=_capturing - In the implementation block
@property (assign,nonatomic) BOOL editing;                                                                                 //@synthesize editing=_editing - In the implementation block
@property (assign,nonatomic) BOOL isOverview;                                                                              //@synthesize isOverview=_isOverview - In the implementation block
@property (nonatomic,copy) RCUIConfiguration * UIConfiguration;                                                            //@synthesize UIConfiguration=_UIConfiguration - In the implementation block
@property (nonatomic,retain) RCLayoutMetrics * layoutMetrics;                                                              //@synthesize layoutMetrics=_layoutMetrics - In the implementation block
@property (assign,nonatomic) unsigned long long currentTimeDisplayOptions;                                                 //@synthesize currentTimeDisplayOptions=_currentTimeDisplayOptions - In the implementation block
@property (assign,nonatomic) BOOL clipTimeMarkersToDuration;                                                               //@synthesize clipTimeMarkersToDuration=_clipTimeMarkersToDuration - In the implementation block
@property (assign,nonatomic) double currentTime;                                                                           //@synthesize currentTime=_currentTime - In the implementation block
@property (assign,nonatomic) double duration;                                                                              //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) SCD_Struct_RC3 visibleTimeRange;                                                              //@synthesize visibleTimeRange=_visibleTimeRange - In the implementation block
@property (assign,nonatomic) SCD_Struct_RC3 highlightTimeRange;                                                            //@synthesize highlightTimeRange=_highlightTimeRange - In the implementation block
@property (assign,nonatomic) SCD_Struct_RC3 selectedTimeRange;                                                             //@synthesize selectedTimeRange=_selectedTimeRange - In the implementation block
@property (assign,nonatomic) double maximumSelectionDuration;                                                              //@synthesize maximumSelectionDuration=_maximumSelectionDuration - In the implementation block
@property (assign,getter=isSelectedTimeRangeEditingEnabled,nonatomic) BOOL selectedTimeRangeEditingEnabled;                //@synthesize selectedTimeRangeEditingEnabled=_selectedTimeRangeEditingEnabled - In the implementation block
@property (assign,getter=isSelectedTimeRangeEditingEnabled,nonatomic) BOOL selectedTimeRangeScrubbingEnabled;              //@synthesize selectedTimeRangeScrubbingEnabled=_selectedTimeRangeScrubbingEnabled - In the implementation block
@property (assign,nonatomic) BOOL isCompactView; 
@property (assign,nonatomic) BOOL selectionOverlayShouldUseInsertMode;                                                     //@synthesize selectionOverlayShouldUseInsertMode=_selectionOverlayShouldUseInsertMode - In the implementation block
@property (assign,nonatomic) BOOL showPlayBarOnly;                                                                         //@synthesize showPlayBarOnly=_showPlayBarOnly - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<RCTimeController> activeTimeController; 
@property (assign,nonatomic) double desiredTimeDeltaForVisibleTimeRange; 
-(void)dealloc;
-(id<RCWaveformViewDelegate>)delegate;
-(void)setDelegate:(id<RCWaveformViewDelegate>)arg1 ;
-(double)duration;
-(BOOL)playing;
-(RCWaveformDataSource *)dataSource;
-(void)setDataSource:(RCWaveformDataSource *)arg1 ;
-(void)setDuration:(double)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setScrubbingEnabled:(BOOL)arg1 ;
-(BOOL)scrubbingEnabled;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLayoutSubviews;
-(BOOL)_isScrubbing;
-(void)setEditing:(BOOL)arg1 ;
-(BOOL)editing;
-(double)currentTime;
-(BOOL)isZooming;
-(void)updateBackgroundColor;
-(void)setPlaying:(BOOL)arg1 ;
-(void)setCurrentTime:(double)arg1 ;
-(void)stopScrolling;
-(void)resetZoomScale;
-(void)updateColors;
-(RCLayoutMetrics *)layoutMetrics;
-(void)setLayoutMetrics:(RCLayoutMetrics *)arg1 ;
-(double)pointsPerSecond;
-(id)initWithOverviewWaveform:(BOOL)arg1 duration:(double)arg2 ;
-(void)setCurrentTimeDisplayOptions:(unsigned long long)arg1 ;
-(SCD_Struct_RC3)selectedTimeRange;
-(void)setVisibleTimeRange:(SCD_Struct_RC3)arg1 ;
-(SCD_Struct_RC3)visibleTimeRange;
-(void)setHighlightTimeRange:(SCD_Struct_RC3)arg1 ;
-(SCD_Struct_RC3)highlightTimeRange;
-(CGRect)waveformRectForLayoutBounds:(CGRect)arg1 ;
-(double)currentTimeIndicatorCoordinate;
-(void)setClipTimeMarkersToDuration:(BOOL)arg1 ;
-(void)setSelectedTimeRange:(SCD_Struct_RC3)arg1 animationDuration:(double)arg2 ;
-(double)maximumSelectionDuration;
-(void)setMaximumSelectionDuration:(double)arg1 ;
-(void)updateVisibleTimeRangeToFullDuration;
-(void)setCapturing:(BOOL)arg1 ;
-(void)setSelectedTimeRangeEditingEnabled:(BOOL)arg1 ;
-(BOOL)showPlayBarOnly;
-(void)setSelectionOverlayShouldUseInsertMode:(BOOL)arg1 ;
-(id<RCTimeController>)activeTimeController;
-(BOOL)isOverview;
-(SCD_Struct_RC3)setHighlightTimeRange;
-(void)setIsOverview:(BOOL)arg1 ;
-(BOOL)isPlayback;
-(void)waveformRenderer:(id)arg1 contentWidthDidChange:(double)arg2 ;
-(double)desiredTimeDeltaForVisibleTimeRange;
-(void)setIsPlayback:(BOOL)arg1 ;
-(BOOL)isCompactView;
-(void)setIsCompactView:(BOOL)arg1 ;
-(void)_updateWaveformViewContentSizeAndOffset;
-(void)_updateAnnotationViews;
-(void)enableZooming:(BOOL)arg1 ;
-(void)_updateSelectionOverlayWithAnimationDuration:(double)arg1 ;
-(void)_updateBackgroundWaveformHighlight;
-(void)_layoutTimeMarkerViewsForCurrentlyVisibleTimeRange;
-(void)_updateCurrentTimeDisplay;
-(void)_setSelectedTimeRange:(SCD_Struct_RC3)arg1 updateVisibleTimeRange:(BOOL)arg2 updateWaveformViewContentSizeAndOffset:(BOOL)arg3 notifyDelegate:(BOOL)arg4 animationDuration:(double)arg5 ;
-(void)setVisibleTimeRange:(SCD_Struct_RC3)arg1 animationDuration:(double)arg2 ;
-(void)_setVisibleTimeRange:(SCD_Struct_RC3)arg1 animationDuration:(double)arg2 completionBlock:(/*^block*/id)arg3 ;
-(BOOL)selectionOverlayShouldUseInsertMode;
-(void)fixupScrollPositionToMatchIndicatorPositionTime;
-(void)scaleWaveform:(id)arg1 ;
-(void)reloadOverlayOffsets;
-(void)_scrollViewPanGestureRecognized:(id)arg1 ;
-(void)_setTimeMarkerViewsNeedInitialLayout:(BOOL)arg1 ;
-(void)_updateVisibleAreaWithAnimationDuration:(double)arg1 ;
-(BOOL)isSelectedTimeRangeEditingEnabled;
-(BOOL)isSelectedTimeRangeEditingEnabled;
-(void)_scrubbingDidFinish;
-(void)_autoscrollOverlayIfNecessary;
-(void)_updateWaveformViewContentSizeAndOffsetToSize:(double)arg1 ;
-(SCD_Struct_RC3)_visibleTimeRangeForCurrentSelectionTimeRange;
-(CGRect)_frameForTimeMarkerView:(id)arg1 ;
-(BOOL)_isScrubbingSelectionTimeRange;
-(void)setDesiredTimeDeltaForVisibleTimeRange:(double)arg1 ;
-(void)waveformSelectionOverlay:(id)arg1 willBeginTrackingSelectionBeginTime:(BOOL)arg2 endTime:(BOOL)arg3 assetCurrentTime:(BOOL)arg4 ;
-(void)waveformSelectionOverlay:(id)arg1 didFinishTrackingSelectionBeginTime:(BOOL)arg2 endTime:(BOOL)arg3 assetCurrentTime:(BOOL)arg4 ;
-(SCD_Struct_RC3)waveformSelectionOverlay:(id)arg1 willChangeSelectedTimeRange:(SCD_Struct_RC3)arg2 isTrackingMin:(BOOL)arg3 isTrackingMax:(BOOL)arg4 ;
-(double)waveformSelectionOverlay:(id)arg1 willChangeAssetCurrentTime:(double)arg2 isTracking:(BOOL)arg3 ;
-(double)waveformSelectionOverlay:(id)arg1 offsetForTime:(double)arg2 ;
-(double)waveformSelectionOverlay:(id)arg1 timeForOffset:(double)arg2 ;
-(double)waveformSelectionOverlayGetCurrentTime:(id)arg1 ;
-(SCD_Struct_RC3)timeRangeByInsettingVisibleTimeRange:(SCD_Struct_RC3)arg1 inset:(double)arg2 ;
-(void)setSelectedTimeRange:(SCD_Struct_RC3)arg1 ;
-(BOOL)isSelectionOverlayCurrentlyTracking;
-(void)setShowPlayBarOnly:(BOOL)arg1 ;
-(void)_setTimeMarkerViewUpdatesDisabled:(BOOL)arg1 ;
-(BOOL)capturing;
-(RCUIConfiguration *)UIConfiguration;
-(void)setUIConfiguration:(RCUIConfiguration *)arg1 ;
-(unsigned long long)currentTimeDisplayOptions;
-(BOOL)clipTimeMarkersToDuration;
-(void)setSelectedTimeRangeScrubbingEnabled:(BOOL)arg1 ;
@end

