/*
* Generated on Monday, March 1, 2021 at 2:31:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSDate * startWithTravelTime; 
@property (nonatomic,readonly) NSDate * start; 
@property (nonatomic,readonly) NSDate * end; 
@property (nonatomic,readonly) BOOL hideTravelTime; 
@property (nonatomic,readonly) double enoughHeightForOneLine; 
@property (nonatomic,readonly) double viewMaxNaturalTextHeight; 
@property (assign) CGRect unPinnedViewFrame; 
@property (readonly) BOOL visibleHeightLocked; 
+(double)barToBarHorizontalDistanceIncludingBarWidth;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(NSDate *)start;
-(EKCalendarDate *)startDate;
-(EKCalendarDate *)endDate;
-(NSDate *)end;
-(void)setStartDate:(EKCalendarDate *)arg1 ;
-(void)setEndDate:(EKCalendarDate *)arg1 ;
-(EKEvent *)event;
-(void)setEvent:(EKEvent *)arg1 ;
-(EKDayOccurrenceState *)currentState;
-(EKDayOccurrenceView *)view;
-(void)setView:(EKDayOccurrenceView *)arg1 ;
-(BOOL)isPinned;
-(double)visibleHeight;
-(void)setVisibleHeight:(double)arg1 ;
-(double)travelTime;
-(void)setTravelTime:(double)arg1 ;
-(unsigned long long)eventIndex;
-(BOOL)isLoadingAsync;
-(void)setBottomPinningProximity:(double)arg1 ;
-(EKCalendarDate *)startDateIncludingTravelTime;
-(BOOL)usesSmallText;
-(double)viewMaxNaturalTextHeight;
-(void)resetVisibleHeight;
-(void)_updateWithPayload:(id)arg1 ;
-(void)setStagedFrame:(CGRect)arg1 ;
-(CGRect)stagedFrame;
-(void)setTravelTimeHeight:(double)arg1 ;
-(NSDate *)startWithTravelTime;
-(BOOL)hideTravelTime;
-(double)enoughHeightForOneLine;
-(CGRect)unPinnedViewFrame;
-(void)setUnPinnedViewFrame:(CGRect)arg1 ;
-(BOOL)visibleHeightLocked;
-(id)initWithEventIndex:(unsigned long long)arg1 sizeClass:(long long)arg2 ;
-(double)travelTimeHeight;
-(void)_requestPayload:(BOOL)arg1 ;
-(void)setUsesSmallText:(BOOL)arg1 ;
-(BOOL)isProposedTime;
-(void)setIsProposedTime:(BOOL)arg1 ;
-(void)setIsLoadingAsync:(BOOL)arg1 ;
-(double)topPinningProximity;
-(void)setTopPinningProximity:(double)arg1 ;
-(double)bottomPinningProximity;
@end

