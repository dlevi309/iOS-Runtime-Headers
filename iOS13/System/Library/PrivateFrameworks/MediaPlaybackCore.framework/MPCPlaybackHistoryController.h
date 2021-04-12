/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

#import <libobjc.A.dylib/MPCPlaybackEngineEventObserving.h>

@class MPCPlaybackEngine, NSOperationQueue, MPModelPlayEvent, NSString;

@interface MPCPlaybackHistoryController : NSObject <MPCPlaybackEngineEventObserving> {

	MPCPlaybackEngine* _playbackEngine;
	NSOperationQueue* _operationQueue;
	MPModelPlayEvent* _lastRecordedPlayEvent;
	long long _currentRepeatType;

}

@property (nonatomic,retain) NSOperationQueue * operationQueue;                        //@synthesize operationQueue=_operationQueue - In the implementation block
@property (nonatomic,retain) MPModelPlayEvent * lastRecordedPlayEvent;                 //@synthesize lastRecordedPlayEvent=_lastRecordedPlayEvent - In the implementation block
@property (assign,nonatomic) long long currentRepeatType;                              //@synthesize currentRepeatType=_currentRepeatType - In the implementation block
@property (nonatomic,__weak,readonly) MPCPlaybackEngine * playbackEngine;              //@synthesize playbackEngine=_playbackEngine - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSOperationQueue *)operationQueue;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(void)setCurrentRepeatType:(long long)arg1 ;
-(long long)currentRepeatType;
-(MPCPlaybackEngine *)playbackEngine;
-(void)engine:(id)arg1 willChangeToItem:(id)arg2 fromItem:(id)arg3 ;
-(void)engine:(id)arg1 didChangeRepeatType:(long long)arg2 ;
-(id)initWithPlaybackEngine:(id)arg1 ;
-(MPModelPlayEvent *)lastRecordedPlayEvent;
-(void)setLastRecordedPlayEvent:(MPModelPlayEvent *)arg1 ;
@end

