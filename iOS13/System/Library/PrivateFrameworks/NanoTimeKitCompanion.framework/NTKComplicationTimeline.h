/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


@protocol NTKComplicationTimelineDelegate;
@class _TimelineEntryNode, _TimelineGapNode, _TimelineWindow, NSTimer, NSDate;

@interface NTKComplicationTimeline : NSObject {

	_TimelineEntryNode* _leftmostNode;
	_TimelineEntryNode* _rightmostNode;
	_TimelineGapNode* _gapNode;
	_TimelineWindow* _nowWindow;
	_TimelineWindow* _timeTravelWindow;
	NSTimer* _timer;
	BOOL _paused;
	id<NTKComplicationTimelineDelegate> _delegate;
	NSDate* _timeTravelDate;
	NSDate* _timeTravelLeftBoundary;
	NSDate* _timeTravelRightBoundary;

}

@property (assign,nonatomic,__weak) id<NTKComplicationTimelineDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSDate * timeTravelDate;                                          //@synthesize timeTravelDate=_timeTravelDate - In the implementation block
@property (assign,nonatomic) BOOL paused;                                                      //@synthesize paused=_paused - In the implementation block
@property (nonatomic,retain) NSDate * timeTravelLeftBoundary;                                  //@synthesize timeTravelLeftBoundary=_timeTravelLeftBoundary - In the implementation block
@property (nonatomic,retain) NSDate * timeTravelRightBoundary;                                 //@synthesize timeTravelRightBoundary=_timeTravelRightBoundary - In the implementation block
-(void)dealloc;
-(id<NTKComplicationTimelineDelegate>)delegate;
-(void)setDelegate:(id<NTKComplicationTimelineDelegate>)arg1 ;
-(BOOL)paused;
-(void)setPaused:(BOOL)arg1 ;
-(void)_timerFired;
-(void)_updateTimer;
-(id)initWithEntry:(id)arg1 ;
-(NSDate *)timeTravelDate;
-(void)_setupWithEntry:(id)arg1 ;
-(void)_recycleAllNodes;
-(void)_updateNowWindow;
-(id)_nowNode;
-(long long)timeTravelWindowNodeCapacity;
-(void)_updateTimeTravelWindow;
-(void)_trimTimeline;
-(id)_sortedEntries:(id)arg1 ;
-(id)_rightmostDate;
-(id)_timelineSegmentFromSortedEntries:(id)arg1 withLowerBound:(id)arg2 upperBound:(id)arg3 ;
-(id)_beforeGapDate;
-(id)_afterGapDate;
-(id)_leftmostDate;
-(id)_nowEntry;
-(id)_timeTravelNode;
-(long long)nowWindowNodeCapacity;
-(id)timeTravelEntry;
-(id)_effectiveTimeTravelDate;
-(void)setTimeTravelDate:(NSDate *)arg1 ;
-(void)setTimeTravelLeftBoundary:(NSDate *)arg1 ;
-(void)setTimeTravelRightBoundary:(NSDate *)arg1 ;
-(void)clearTimeTravelCache;
-(void)resetWithEntry:(id)arg1 withTritiumUpdatePriority:(long long)arg2 ;
-(void)extendRightFromDate:(id)arg1 withEntries:(id)arg2 tritiumUpdatePriority:(long long)arg3 ;
-(void)extendLeftFromDate:(id)arg1 withEntries:(id)arg2 tritiumUpdatePriority:(long long)arg3 ;
-(id)nowEntry;
-(id)nowWindow;
-(id)timeTravelWindow;
-(id)endOfVisibilityForNowEntry;
-(NSDate *)timeTravelLeftBoundary;
-(NSDate *)timeTravelRightBoundary;
@end

