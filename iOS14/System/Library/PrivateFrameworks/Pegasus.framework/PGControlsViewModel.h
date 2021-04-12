/*
* Generated on Thursday, January 14, 2021 at 2:24:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Pegasus.framework/Pegasus
*/

#import <libobjc.A.dylib/PGPlaybackStateDiffConsumer.h>

@protocol PGControlsViewModelDelegate;
@class PGPlaybackState, PGControlsViewModelValues, NSString;

@interface PGControlsViewModel : NSObject <PGPlaybackStateDiffConsumer> {

	double _lastKnownElapsedTime;
	BOOL _hasBegun;
	BOOL _interrupted;
	BOOL _preventsRestoreAndCancelActions;
	id<PGControlsViewModelDelegate> _delegate;
	PGPlaybackState* _playbackState;
	PGControlsViewModelValues* _values;

}

@property (assign,nonatomic,__weak) id<PGControlsViewModelDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) PGPlaybackState * playbackState;                        //@synthesize playbackState=_playbackState - In the implementation block
@property (assign,getter=isInterrupted,nonatomic) BOOL interrupted;                         //@synthesize interrupted=_interrupted - In the implementation block
@property (nonatomic,readonly) long long secondsUntilPrerollSkippable; 
@property (nonatomic,readonly) BOOL isPrerollSkippable; 
@property (assign,nonatomic) BOOL preventsRestoreAndCancelActions;                          //@synthesize preventsRestoreAndCancelActions=_preventsRestoreAndCancelActions - In the implementation block
@property (nonatomic,copy,readonly) PGControlsViewModelValues * values;                     //@synthesize values=_values - In the implementation block
@property (nonatomic,readonly) double preferredMinimumWidth; 
@property (nonatomic,readonly) BOOL stashEventsShouldBeginAndEndInterruptions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isInterrupted;
-(id)init;
-(id<PGControlsViewModelDelegate>)delegate;
-(PGPlaybackState *)playbackState;
-(PGControlsViewModelValues *)values;
-(void)setInterrupted:(BOOL)arg1 ;
-(void)setDelegate:(id<PGControlsViewModelDelegate>)arg1 ;
-(long long)secondsUntilPrerollSkippable;
-(BOOL)isPrerollSkippable;
-(void)handleSkipPrerollButtonTapped;
-(void)handleSingleTap;
-(void)handleDoubleTap;
-(void)handleDoubleDoubleTap;
-(void)updatePlaybackStateWithDiff:(id)arg1 ;
-(unsigned long long)recommendedUpdateCadenceForProgressBarWithWidthInPixels:(double)arg1 ;
-(double)preferredMinimumWidth;
-(void)handleRestoreButtonTapped;
-(void)handleActionButtonTapped;
-(void)handleSkipBackButtonTapped;
-(void)handleSkipForwardButtonTapped;
-(void)handleCancelButtonTapped;
-(BOOL)preventsRestoreAndCancelActions;
-(void)setPreventsRestoreAndCancelActions:(BOOL)arg1 ;
-(BOOL)stashEventsShouldBeginAndEndInterruptions;
-(void)_updateViewModelValues;
@end

