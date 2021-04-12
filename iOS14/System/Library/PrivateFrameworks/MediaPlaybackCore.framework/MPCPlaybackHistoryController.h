/*
* Generated on Thursday, January 14, 2021 at 2:25:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

#import <libobjc.A.dylib/MPCPlaybackEngineEventObserving.h>

@class MPCPlaybackEngine, NSOperationQueue, MPModelPlayEvent, NSString;

@interface MPCPlaybackHistoryController : NSObject <MPCPlaybackEngineEventObserving> {

	MPCPlaybackEngine* _playbackEngine;
	NSOperationQueue* _operationQueue;
	MPModelPlayEvent* _lastRecordedPlayEvent;

}

@property (nonatomic,retain) NSOperationQueue * operationQueue;                        //@synthesize operationQueue=_operationQueue - In the implementation block
@property (nonatomic,retain) MPModelPlayEvent * lastRecordedPlayEvent;                 //@synthesize lastRecordedPlayEvent=_lastRecordedPlayEvent - In the implementation block
@property (nonatomic,__weak,readonly) MPCPlaybackEngine * playbackEngine;              //@synthesize playbackEngine=_playbackEngine - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(NSOperationQueue *)operationQueue;
-(id)initWithPlaybackEngine:(id)arg1 ;
-(MPModelPlayEvent *)lastRecordedPlayEvent;
-(void)engine:(id)arg1 willChangeToItem:(id)arg2 fromItem:(id)arg3 ;
-(MPCPlaybackEngine *)playbackEngine;
-(void)setLastRecordedPlayEvent:(MPModelPlayEvent *)arg1 ;
@end

