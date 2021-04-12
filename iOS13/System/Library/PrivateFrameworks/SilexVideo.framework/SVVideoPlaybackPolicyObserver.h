/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

#import <libobjc.A.dylib/SVVideoPlaybackPolicyObserving.h>

@protocol SVVideoPlaybackPolicy;
@class SVKeyValueObserver, NSString;

@interface SVVideoPlaybackPolicyObserver : NSObject <SVVideoPlaybackPolicyObserving> {

	/*^block*/id requestStateChangeBlock;
	/*^block*/id allowedStateChangeBlock;
	id<SVVideoPlaybackPolicy> _policy;
	SVKeyValueObserver* _playbackAllowedObserver;
	SVKeyValueObserver* _playbackRequestedObserver;

}

@property (nonatomic,readonly) SVKeyValueObserver * playbackAllowedObserver;                     //@synthesize playbackAllowedObserver=_playbackAllowedObserver - In the implementation block
@property (nonatomic,readonly) SVKeyValueObserver * playbackRequestedObserver;                   //@synthesize playbackRequestedObserver=_playbackRequestedObserver - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (setter=onRequestStateChange:,nonatomic,copy) id requestStateChangeBlock; 
@property (setter=onAllowedStateChange:,nonatomic,copy) id allowedStateChangeBlock; 
@property (nonatomic,readonly) id<SVVideoPlaybackPolicy> policy;                                 //@synthesize policy=_policy - In the implementation block
-(id<SVVideoPlaybackPolicy>)policy;
-(id)initWithPlaybackPolicy:(id)arg1 ;
-(void)playbackAllowedStateChanged;
-(void)playbackRequestedStateChanged;
-(id)allowedStateChangeBlock;
-(id)requestStateChangeBlock;
-(void)onRequestStateChange:(/*^block*/id)arg1 ;
-(void)onAllowedStateChange:(/*^block*/id)arg1 ;
-(SVKeyValueObserver *)playbackAllowedObserver;
-(SVKeyValueObserver *)playbackRequestedObserver;
@end

