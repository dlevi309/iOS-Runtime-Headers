/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

#import <libobjc.A.dylib/MPCPlaybackEngineEventObserving.h>

@class MPCPlaybackEngine, NSMutableSet, NSString;

@interface _MPCLeaseManager : NSObject <MPCPlaybackEngineEventObserving> {

	BOOL _isPreparingForImminentPlaybackIntent;
	MPCPlaybackEngine* _playbackEngine;
	NSMutableSet* _leaseEndIgnoreReasons;

}

@property (nonatomic,retain) NSMutableSet * leaseEndIgnoreReasons;                     //@synthesize leaseEndIgnoreReasons=_leaseEndIgnoreReasons - In the implementation block
@property (nonatomic,__weak,readonly) MPCPlaybackEngine * playbackEngine;              //@synthesize playbackEngine=_playbackEngine - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_updateStateForPlaybackPrevention;
-(MPCPlaybackEngine *)playbackEngine;
-(void)engine:(id)arg1 didChangeToState:(unsigned long long)arg2 ;
-(void)engine:(id)arg1 willChangeToItem:(id)arg2 fromItem:(id)arg3 ;
-(id)initWithPlaybackEngine:(id)arg1 ;
-(void)prepareForPlaybackWithUserIdentity:(id)arg1 ;
-(void)setCanStealLeaseIfNeeded;
-(void)beginIgnoringLeaseEndEventsForReason:(id)arg1 ;
-(void)endIgnoringLeaseEndEventsForReason:(id)arg1 ;
-(void)prepareForCurrentItemPlayback;
-(void)_itemShouldPreventPlaybackDidChangeNotification:(id)arg1 ;
-(NSMutableSet *)leaseEndIgnoreReasons;
-(void)setLeaseEndIgnoreReasons:(NSMutableSet *)arg1 ;
@end

