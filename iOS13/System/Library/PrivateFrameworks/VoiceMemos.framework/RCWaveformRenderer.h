/*
* Generated on Monday, March 1, 2021 at 2:35:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
*/

#import <VoiceMemos/VoiceMemos-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/RCWaveformDataSourceObserver.h>
#import <libobjc.A.dylib/RCDisplayLinkObserver.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>

@protocol OS_dispatch_queue, RCWaveformRendererDelegate;
@class NSObject, RCWaveformDataSource, NSArray, NSMutableDictionary, NSMutableIndexSet, NSString;

@interface RCWaveformRenderer : UIViewController <RCWaveformDataSourceObserver, RCDisplayLinkObserver, CAAnimationDelegate> {

	BOOL displayLinkConnected;
	SCD_Struct_RC3 _renderedTimeRange;
	double _cachedContentWidth;
	BOOL _needsVisibleRangeRendering;
	BOOL _isCompactView;
	SCD_Struct_RC3 _waveformAmpSlicesForRenderingTimeRange;
	NSRange _waveformAmpSlicesForRenderingIndexRange;
	BOOL _waveformAmpSlicesForRenderingRecordStateChanged;
	NSObject*<OS_dispatch_queue> _renderingQueue;
	SCD_Struct_RC3 _lastVisibleTimeRange;
	double _visibleTimeRangeVelocity;
	RCWaveformRendererState _rendererState;
	BOOL _frequentUpdatesSegmentUpdatesExpectedHint;
	BOOL _isRecordWaveform;
	BOOL _isEditMode;
	BOOL _isPlayback;
	BOOL _isOverview;
	BOOL _isPlayBarOnlyMode;
	BOOL _requiresFullRefresh;
	BOOL _syncRenderOnMainThread;
	BOOL _paused;
	BOOL _activeDisplayLinkRequired;
	BOOL _overviewRecordingWaveformRefresh;
	BOOL _renderingQueueIsBusy;
	BOOL _renderReadyForDraw;
	RCWaveformDataSource* _dataSource;
	id<RCWaveformRendererDelegate> _rendererDelegate;
	double _spacingWidth;
	double _dataPointWidth;
	/*^block*/id _nextRenderBlock;
	NSArray* _waveformAmpSlicesForRendering;
	NSMutableDictionary* _waveformSlices;
	NSMutableIndexSet* _waveformSliceIndexes;
	SCD_Struct_RC3 _visibleTimeRange;
	SCD_Struct_RC3 _highlightTimeRange;

}

@property (assign) BOOL overviewRecordingWaveformRefresh;                                                    //@synthesize overviewRecordingWaveformRefresh=_overviewRecordingWaveformRefresh - In the implementation block
@property (assign) BOOL renderingQueueIsBusy;                                                                //@synthesize renderingQueueIsBusy=_renderingQueueIsBusy - In the implementation block
@property (assign) BOOL renderReadyForDraw;                                                                  //@synthesize renderReadyForDraw=_renderReadyForDraw - In the implementation block
@property (copy) id nextRenderBlock;                                                                         //@synthesize nextRenderBlock=_nextRenderBlock - In the implementation block
@property (retain) NSArray * waveformAmpSlicesForRendering;                                                  //@synthesize waveformAmpSlicesForRendering=_waveformAmpSlicesForRendering - In the implementation block
@property (retain) NSMutableDictionary * waveformSlices;                                                     //@synthesize waveformSlices=_waveformSlices - In the implementation block
@property (retain) NSMutableIndexSet * waveformSliceIndexes;                                                 //@synthesize waveformSliceIndexes=_waveformSliceIndexes - In the implementation block
@property (nonatomic,retain) RCWaveformDataSource * dataSource;                                              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<RCWaveformRendererDelegate> rendererDelegate;                         //@synthesize rendererDelegate=_rendererDelegate - In the implementation block
@property (assign,nonatomic) BOOL frequentUpdatesSegmentUpdatesExpectedHint;                                 //@synthesize frequentUpdatesSegmentUpdatesExpectedHint=_frequentUpdatesSegmentUpdatesExpectedHint - In the implementation block
@property (assign,nonatomic) BOOL isRecordWaveform;                                                          //@synthesize isRecordWaveform=_isRecordWaveform - In the implementation block
@property (assign,nonatomic) BOOL isEditMode;                                                                //@synthesize isEditMode=_isEditMode - In the implementation block
@property (assign,nonatomic) BOOL isPlayback;                                                                //@synthesize isPlayback=_isPlayback - In the implementation block
@property (assign,nonatomic) BOOL isCompactView;                                                             //@synthesize isCompactView=_isCompactView - In the implementation block
@property (assign,nonatomic) BOOL isOverview;                                                                //@synthesize isOverview=_isOverview - In the implementation block
@property (assign,nonatomic) BOOL isPlayBarOnlyMode;                                                         //@synthesize isPlayBarOnlyMode=_isPlayBarOnlyMode - In the implementation block
@property (assign,nonatomic) BOOL requiresFullRefresh;                                                       //@synthesize requiresFullRefresh=_requiresFullRefresh - In the implementation block
@property (assign,nonatomic) BOOL syncRenderOnMainThread;                                                    //@synthesize syncRenderOnMainThread=_syncRenderOnMainThread - In the implementation block
@property (assign,getter=isPaused,nonatomic) BOOL paused;                                                    //@synthesize paused=_paused - In the implementation block
@property (assign,getter=isActiveDisplayLinkRequired,nonatomic) BOOL activeDisplayLinkRequired;              //@synthesize activeDisplayLinkRequired=_activeDisplayLinkRequired - In the implementation block
@property (assign,nonatomic) double spacingWidth;                                                            //@synthesize spacingWidth=_spacingWidth - In the implementation block
@property (assign,nonatomic) double dataPointWidth;                                                          //@synthesize dataPointWidth=_dataPointWidth - In the implementation block
@property (assign,nonatomic) SCD_Struct_RC3 visibleTimeRange;                                                //@synthesize visibleTimeRange=_visibleTimeRange - In the implementation block
@property (assign,nonatomic) SCD_Struct_RC3 highlightTimeRange;                                              //@synthesize highlightTimeRange=_highlightTimeRange - In the implementation block
@property (nonatomic,readonly) double contentWidth; 
@property (nonatomic,readonly) CGRect visibleRect; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(double)_duration;
-(BOOL)isPaused;
-(RCWaveformDataSource *)dataSource;
-(void)setDataSource:(RCWaveformDataSource *)arg1 ;
-(void)setPaused:(BOOL)arg1 ;
-(CGRect)visibleRect;
-(double)contentWidth;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(BOOL)_canShowWhileLocked;
-(void)willMoveToParentViewController:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)_startUpdating;
-(void)_stopUpdating;
-(id<RCWaveformRendererDelegate>)rendererDelegate;
-(void)setRendererDelegate:(id<RCWaveformRendererDelegate>)arg1 ;
-(void)_draw:(double)arg1 ;
-(void)setVisibleTimeRange:(SCD_Struct_RC3)arg1 ;
-(SCD_Struct_RC3)visibleTimeRange;
-(void)setHighlightTimeRange:(SCD_Struct_RC3)arg1 ;
-(SCD_Struct_RC3)highlightTimeRange;
-(BOOL)isOverview;
-(void)setIsEditMode:(BOOL)arg1 ;
-(BOOL)isEditMode;
-(void)setIsOverview:(BOOL)arg1 ;
-(void)waveformDataSourceRequiresUpdate:(id)arg1 ;
-(void)waveformDataSourceDidFinishLoading:(id)arg1 ;
-(void)waveformDataSource:(id)arg1 didLoadWaveformSegment:(id)arg2 ;
-(void)displayLinkDidUpdate:(id)arg1 withTimeController:(id)arg2 ;
-(void)_stopRendering;
-(void)_startRendering;
-(void)_renderVisibleTimeRangeWithDuration:(double)arg1 ;
-(void)_performOrDispatchToMainThread:(/*^block*/id)arg1 ;
-(double)_pixelsPerSecond;
-(void)_clearRenderingState;
-(void)_updateOverviewUnitsPerSecond;
-(void)_setNeedsVisibleTimeRangeRendering;
-(void)_setNeedsRendering;
-(double)horizontalOffsetAtTime:(double)arg1 withVisibleTimeRange:(SCD_Struct_RC3)arg2 ;
-(double)_pixelsPerSecondWithVisibleTimeRange:(SCD_Struct_RC3)arg1 ;
-(double)timeAtHorizontalOffset:(double)arg1 withVisibleTimeRange:(SCD_Struct_RC3)arg2 ;
-(double)_timeForPixelOffset:(double)arg1 withVisibleTimeRange:(SCD_Struct_RC3)arg2 ;
-(double)horizontalOffsetAtTime:(double)arg1 ;
-(BOOL)_needsWaveformRendering;
-(NSMutableDictionary *)waveformSlices;
-(void)setWaveformSlices:(NSMutableDictionary *)arg1 ;
-(void)setWaveformSliceIndexes:(NSMutableIndexSet *)arg1 ;
-(void)setWaveformAmpSlicesForRendering:(NSArray *)arg1 ;
-(BOOL)renderingQueueIsBusy;
-(void)setRenderingQueueIsBusy:(BOOL)arg1 ;
-(NSMutableIndexSet *)waveformSliceIndexes;
-(id)nextRenderBlock;
-(void)setNextRenderBlock:(id)arg1 ;
-(void)setRenderReadyForDraw:(BOOL)arg1 ;
-(NSArray *)waveformAmpSlicesForRendering;
-(BOOL)isPlayback;
-(BOOL)isPlayBarOnlyMode;
-(double)_nonCachedContentWidthWithDuration:(double)arg1 ;
-(BOOL)renderReadyForDraw;
-(void)_renderTimeRangeOfSegments:(SCD_Struct_RC3)arg1 withDuration:(double)arg2 needsWaveformCalculation:(BOOL)arg3 ;
-(void)setIsRecordWaveform:(BOOL)arg1 ;
-(double)pointsPerSecondWithVisibleTimeRange:(SCD_Struct_RC3)arg1 ;
-(double)timeAtHorizontalOffset:(double)arg1 ;
-(id)rasterizeTimeRange:(SCD_Struct_RC3)arg1 imageSize:(CGSize)arg2 ;
-(void)setActiveDisplayLinkRequired:(BOOL)arg1 ;
-(double)_pixelOffsetForTime:(double)arg1 ;
-(double)_timeForPixelOffset:(double)arg1 ;
-(BOOL)frequentUpdatesSegmentUpdatesExpectedHint;
-(void)setFrequentUpdatesSegmentUpdatesExpectedHint:(BOOL)arg1 ;
-(BOOL)isRecordWaveform;
-(void)setIsPlayback:(BOOL)arg1 ;
-(BOOL)isCompactView;
-(void)setIsCompactView:(BOOL)arg1 ;
-(void)setIsPlayBarOnlyMode:(BOOL)arg1 ;
-(BOOL)requiresFullRefresh;
-(void)setRequiresFullRefresh:(BOOL)arg1 ;
-(BOOL)syncRenderOnMainThread;
-(void)setSyncRenderOnMainThread:(BOOL)arg1 ;
-(BOOL)isActiveDisplayLinkRequired;
-(double)spacingWidth;
-(void)setSpacingWidth:(double)arg1 ;
-(double)dataPointWidth;
-(void)setDataPointWidth:(double)arg1 ;
-(BOOL)overviewRecordingWaveformRefresh;
-(void)setOverviewRecordingWaveformRefresh:(BOOL)arg1 ;
@end

