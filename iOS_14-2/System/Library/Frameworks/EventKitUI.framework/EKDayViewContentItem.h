/*
* Generated on Thursday, January 14, 2021 at 2:23:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <libobjc.A.dylib/CUIKSingleDayTimelineViewItem.h>

@class NSDate, EKEvent, EKDayOccurrenceContentPayload, EKDayOccurrenceView, EKCalendarDate, EKDayOccurrenceState, NSString;

@interface EKDayViewContentItem : NSObject <CUIKSingleDayTimelineViewItem> {

	CGRect _stagedFrame;
	CGRect _unPinnedViewFrame;
	double _visibleHeight;
	BOOL _visibleHeightLocked;
	double _travelTimeHeight;
	long long _sizeClass;
	long long _currentRequestId;
	EKDayOccurrenceContentPayload* _stagedPayload;
	BOOL _usesSmallText;
	BOOL _isProposedTime;
	BOOL _isLoadingAsync;
	BOOL _hasPrecedingDuration;
	BOOL _hasTrailingDuration;
	EKEvent* _event;
	unsigned long long _eventIndex;
	EKDayOccurrenceView* _view;
	EKCalendarDate* _startDate;
	EKCalendarDate* _endDate;
	double _travelTime;
	double _topPinningProximity;
	double _bottomPinningProximity;
	EKDayOccurrenceState* _currentState;

}

@property (nonatomic,readonly) EKDayOccurrenceState * currentState;                             //@synthesize currentState=_currentState - In the implementation block
@property (nonatomic,retain) EKEvent * event;                                                   //@synthesize event=_event - In the implementation block
@property (assign,nonatomic) BOOL usesSmallText;                                                //@synthesize usesSmallText=_usesSmallText - In the implementation block
@property (assign,nonatomic) BOOL isProposedTime;                                               //@synthesize isProposedTime=_isProposedTime - In the implementation block
@property (assign,nonatomic) BOOL isLoadingAsync;                                               //@synthesize isLoadingAsync=_isLoadingAsync - In the implementation block
@property (nonatomic,readonly) unsigned long long eventIndex;                                   //@synthesize eventIndex=_eventIndex - In the implementation block
@property (nonatomic,retain) EKDayOccurrenceView * view;                                        //@synthesize view=_view - In the implementation block
@property (nonatomic,copy) EKCalendarDate * startDate;                                          //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,copy,readonly) EKCalendarDate * startDateIncludingTravelTime; 
@property (nonatomic,copy) EKCalendarDate * endDate;                                            //@synthesize endDate=_endDate - In the implementation block
@property (assign,nonatomic) double travelTime;                                                 //@synthesize travelTime=_travelTime - In the implementation block
@property (assign,nonatomic) double travelTimeHeight; 
@property (assign,nonatomic) double topPinningProximity;                                        //@synthesize topPinningProximity=_topPinningProximity - In the implementation block
@property (assign,nonatomic) double bottomPinningProximity;                                     //@synthesize bottomPinningProximity=_bottomPinningProximity - In the implementation block
@property (assign,nonatomic) double visibleHeight; 
@property (assign,nonatomic) BOOL hasPrecedingDuration;                                         //@synthesize hasPrecedingDuration=_hasPrecedingDuration - In the implementation block
@property (assign,nonatomic) BOOL hasTrailingDuration;                                          //@synthesize hasTrailingDuration=_hasTrailingDuration - In the implementation block
@property (nonatomic,readonly) NSDate * startWithTravelTime; 
@property (nonatomic,readonly) NSDate * start; 
@property (nonatomic,readonly) NSDate * end; 
@property (nonatomic,readonly) BOOL hideTravelTime; 
@property (nonatomic,readonly) double enoughHeightForOneLine; 
@property (nonatomic,readonly) double viewMaxNaturalTextHeight; 
@property (assign) CGRect unPinnedViewFrame; 
@property (readonly) BOOL visibleHeightLocked; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)barToBarHorizontalDistanceIncludingBarWidth;
-(void)setVisibleHeight:(double)arg1 ;
-(void)setIsProposedTime:(BOOL)arg1 ;
-(double)enoughHeightForOneLine;
-(CGRect)stagedFrame;
-(void)setHasPrecedingDuration:(BOOL)arg1 ;
-(BOOL)isProposedTime;
-(double)travelTime;
-(void)setTravelTime:(double)arg1 ;
-(void)setTopPinningProximity:(double)arg1 ;
-(EKCalendarDate *)endDate;
-(void)setUsesSmallText:(BOOL)arg1 ;
-(BOOL)usesSmallText;
-(double)topPinningProximity;
-(double)visibleHeight;
-(BOOL)isPinned;
-(NSDate *)end;
-(id)initWithEventIndex:(unsigned long long)arg1 sizeClass:(long long)arg2 ;
-(void)setStartDate:(EKCalendarDate *)arg1 ;
-(EKDayOccurrenceState *)currentState;
-(NSDate *)start;
-(BOOL)hasPrecedingDuration;
-(EKCalendarDate *)startDate;
-(void)setTravelTimeHeight:(double)arg1 ;
-(void)setEndDate:(EKCalendarDate *)arg1 ;
-(BOOL)visibleHeightLocked;
-(void)setView:(EKDayOccurrenceView *)arg1 ;
-(void)setBottomPinningProximity:(double)arg1 ;
-(NSString *)description;
-(double)bottomPinningProximity;
-(EKDayOccurrenceView *)view;
-(BOOL)hasTrailingDuration;
-(void)setIsLoadingAsync:(BOOL)arg1 ;
-(void)_updateWithPayload:(id)arg1 ;
-(BOOL)hideTravelTime;
-(EKEvent *)event;
-(void)setHasTrailingDuration:(BOOL)arg1 ;
-(unsigned long long)eventIndex;
-(void)setEvent:(EKEvent *)arg1 ;
-(BOOL)isLoadingAsync;
-(EKCalendarDate *)startDateIncludingTravelTime;
-(double)viewMaxNaturalTextHeight;
-(void)_requestPayloadAnimated:(BOOL)arg1 drawSynchronously:(BOOL)arg2 ;
-(void)setStagedFrame:(CGRect)arg1 ;
-(void)resetVisibleHeight;
-(CGRect)unPinnedViewFrame;
-(double)travelTimeHeight;
-(void)setUnPinnedViewFrame:(CGRect)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSDate *)startWithTravelTime;
@end

