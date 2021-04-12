/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

#import <libobjc.A.dylib/SVPlayerProviding.h>
#import <libobjc.A.dylib/SVVideoTransitionObserver.h>
#import <libobjc.A.dylib/SVVolumeObserving.h>

@protocol SVPlayerFactory, SVVideoViewControllerProviding;
@class SVWeakObjectCache, NSString;

@interface SVPlayerManager : NSObject <SVPlayerProviding, SVVideoTransitionObserver, SVVolumeObserving> {

	id<SVPlayerFactory> _playerFactory;
	id<SVVideoViewControllerProviding> _videoViewControllerProvider;
	SVWeakObjectCache* _players;

}

@property (nonatomic,readonly) id<SVPlayerFactory> playerFactory;                                           //@synthesize playerFactory=_playerFactory - In the implementation block
@property (nonatomic,readonly) id<SVVideoViewControllerProviding> videoViewControllerProvider;              //@synthesize videoViewControllerProvider=_videoViewControllerProvider - In the implementation block
@property (nonatomic,readonly) SVWeakObjectCache * players;                                                 //@synthesize players=_players - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SVVideoViewControllerProviding>)videoViewControllerProvider;
-(void)willTransitionToVideo:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(id)playerForVideo:(id)arg1 ;
-(void)muteStateChanged:(id)arg1 ;
-(SVWeakObjectCache *)players;
-(id<SVPlayerFactory>)playerFactory;
-(id)initWithPlayerFactory:(id)arg1 videoViewControllerProvider:(id)arg2 ;
@end

