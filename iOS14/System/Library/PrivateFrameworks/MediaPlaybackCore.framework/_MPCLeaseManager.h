/*
* Generated on Thursday, January 14, 2021 at 2:25:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

#import <libobjc.A.dylib/MPCPlaybackEngineEventObserving.h>

@class MPCPlaybackEngine, NSMutableSet, NSMutableDictionary, NSString;

@interface _MPCLeaseManager : NSObject <MPCPlaybackEngineEventObserving> {

	MPCPlaybackEngine* _playbackEngine;
	NSMutableSet* _leaseEndIgnoreReasons;
	NSMutableDictionary* _prepareCompletions;

}

@property (nonatomic,retain) NSMutableSet * leaseEndIgnoreReasons;                     //@synthesize leaseEndIgnoreReasons=_leaseEndIgnoreReasons - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * prepareCompletions;                 //@synthesize prepareCompletions=_prepareCompletions - In the implementation block
@property (nonatomic,__weak,readonly) MPCPlaybackEngine * playbackEngine;              //@synthesize playbackEngine=_playbackEngine - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithPlaybackEngine:(id)arg1 ;
-(void)_itemShouldPreventPlaybackDidChangeNotification:(id)arg1 ;
-(void)endIgnoringLeaseEndEventsForReason:(id)arg1 ;
-(void)engine:(id)arg1 willChangeToItem:(id)arg2 fromItem:(id)arg3 ;
-(void)setLeaseEndIgnoreReasons:(NSMutableSet *)arg1 ;
-(void)setPrepareCompletions:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)prepareCompletions;
-(void)prepareForCurrentItemPlayback;
-(void)engine:(id)arg1 didChangeToState:(unsigned long long)arg2 ;
-(void)beginIgnoringLeaseEndEventsForReason:(id)arg1 ;
-(void)_updateStateForPlaybackPrevention;
-(void)setCanStealLeaseIfNeeded;
-(void)prepareForPlaybackWithAccount:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSMutableSet *)leaseEndIgnoreReasons;
-(MPCPlaybackEngine *)playbackEngine;
-(void)getHasPreparedLeaseForAccount:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

