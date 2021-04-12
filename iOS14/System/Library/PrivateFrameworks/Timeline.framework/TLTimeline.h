/*
* Generated on Thursday, January 14, 2021 at 2:28:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Timeline.framework/Timeline
*/

#import <Timeline/Timeline-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol TLTimelineDelegate;
@class TLTimelineEntryNode, TLTimelineWindow, NSTimer, NSDate;

@interface TLTimeline : NSObject <NSSecureCoding, NSCopying> {

	TLTimelineEntryNode* _leftmostNode;
	TLTimelineEntryNode* _rightmostNode;
	TLTimelineWindow* _nowWindow;
	NSTimer* _timer;
	id<TLTimelineDelegate> _delegate;
	BOOL _delegateRespondsToTimerFired;
	BOOL _updatesNowNodeOnSignificantTimeChange;
	int _notifyToken;
	BOOL _paused;

}

@property (assign,nonatomic) BOOL paused;                                             //@synthesize paused=_paused - In the implementation block
@property (assign,nonatomic,__weak) id<TLTimelineDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSDate * dateOfLastEntryInTimeline; 
@property (assign,nonatomic) BOOL updatesNowNodeOnSignificantTimeChange; 
@property (nonatomic,readonly) id<TLTimelineEntry> lastEntry; 
@property (nonatomic,readonly) long long nodeCapacity; 
@property (nonatomic,readonly) id<TLTimelineEntry> nowEntry; 
@property (nonatomic,readonly) NSDate * endOfVisibilityForNowEntry; 
+(BOOL)supportsSecureCoding;
+(id)TLTimelineSegmentFromSortedEntries:(id)arg1 withLowerBound:(id)arg2 upperBound:(id)arg3 ;
-(id<TLTimelineDelegate>)delegate;
-(id)initWithEntry:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setPaused:(BOOL)arg1 ;
-(void)setDelegate:(id<TLTimelineDelegate>)arg1 ;
-(id)description;
-(void)_timerFired;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)paused;
-(void)_updateTimer;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(id<TLTimelineEntry>)nowEntry;
-(void)resetWithEntry:(id)arg1 ;
-(id)_rightmostDate;
-(void)extendTimelineFromDate:(id)arg1 withEntries:(id)arg2 ;
-(id)initWithWindow:(id)arg1 paused:(BOOL)arg2 ;
-(long long)nodeCapacity;
-(void)_recycleAllNodes;
-(void)_updateNowWindow;
-(id)nowWindow;
-(void)_setupWithEntry:(id)arg1 ;
-(void)extendRightFromDate:(id)arg1 withEntries:(id)arg2 ;
-(id)_nowNode;
-(id)_sortedEntries:(id)arg1 ;
-(NSDate *)dateOfLastEntryInTimeline;
-(id)_nowEntry;
-(void)setUpdatesNowNodeOnSignificantTimeChange:(BOOL)arg1 ;
-(BOOL)updatesNowNodeOnSignificantTimeChange;
-(id)entriesWithinDateInterval:(id)arg1 ;
-(NSDate *)endOfVisibilityForNowEntry;
-(id<TLTimelineEntry>)lastEntry;
@end

