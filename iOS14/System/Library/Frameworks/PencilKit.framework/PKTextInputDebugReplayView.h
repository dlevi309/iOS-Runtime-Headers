/*
* Generated on Thursday, January 14, 2021 at 2:24:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <UIKitCore/UIView.h>

@protocol PKTextInputDebugReplayViewDelegate;
@class NSArray, NSMutableArray;

@interface PKTextInputDebugReplayView : UIView {

	CGContextRef _bitmapContext;
	double _drawScale;
	BOOL _hasReplayedLoggedEntries;
	id<PKTextInputDebugReplayViewDelegate> _delegate;
	long long _replayState;
	NSArray* _currentLogEntries;
	NSMutableArray* _playbackStrokes;
	unsigned long long _playbackLogIndex;
	CGRect _playbackBounds;

}

@property (assign,nonatomic) long long replayState;                                               //@synthesize replayState=_replayState - In the implementation block
@property (nonatomic,retain) NSMutableArray * playbackStrokes;                                    //@synthesize playbackStrokes=_playbackStrokes - In the implementation block
@property (assign,nonatomic) CGRect playbackBounds;                                               //@synthesize playbackBounds=_playbackBounds - In the implementation block
@property (nonatomic,readonly) CGRect _bitmapBounds; 
@property (assign,nonatomic) unsigned long long playbackLogIndex;                                 //@synthesize playbackLogIndex=_playbackLogIndex - In the implementation block
@property (assign,nonatomic,__weak) id<PKTextInputDebugReplayViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSArray * currentLogEntries;                                         //@synthesize currentLogEntries=_currentLogEntries - In the implementation block
@property (nonatomic,readonly) BOOL hasReplayedLoggedEntries;                                     //@synthesize hasReplayedLoggedEntries=_hasReplayedLoggedEntries - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(id<PKTextInputDebugReplayViewDelegate>)delegate;
-(void)setDelegate:(id<PKTextInputDebugReplayViewDelegate>)arg1 ;
-(void)_advanceReplay;
-(void)dealloc;
-(NSArray *)currentLogEntries;
-(void)_teardownContextIfNecessary;
-(void)_restartReplayState;
-(double)_timestampDeltaBeforeNextLogAfterIndex:(unsigned long long)arg1 ;
-(CGRect)_bitmapBounds;
-(void)drawStroke:(id)arg1 ;
-(void)_scheduleTimerForReplay;
-(void)_createReplayContextIfNecessary;
-(void)setCurrentLogEntries:(NSArray *)arg1 ;
-(void)_togglePlayPauseReplayingLoggedEntries;
-(long long)replayState;
-(void)setReplayState:(long long)arg1 ;
-(BOOL)hasReplayedLoggedEntries;
-(NSMutableArray *)playbackStrokes;
-(void)setPlaybackStrokes:(NSMutableArray *)arg1 ;
-(CGRect)playbackBounds;
-(void)setPlaybackBounds:(CGRect)arg1 ;
-(unsigned long long)playbackLogIndex;
-(void)setPlaybackLogIndex:(unsigned long long)arg1 ;
@end

