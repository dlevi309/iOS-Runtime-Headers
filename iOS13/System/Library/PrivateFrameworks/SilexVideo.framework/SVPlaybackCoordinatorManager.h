/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

#import <libobjc.A.dylib/SVPlaybackCoordinatorProviding.h>

@protocol SVPlaybackCoordinatorFactory;
@class SVWeakObjectCache, NSString;

@interface SVPlaybackCoordinatorManager : NSObject <SVPlaybackCoordinatorProviding> {

	id<SVPlaybackCoordinatorFactory> _factory;
	SVWeakObjectCache* _playbackCoordinators;

}

@property (nonatomic,readonly) id<SVPlaybackCoordinatorFactory> factory;              //@synthesize factory=_factory - In the implementation block
@property (nonatomic,readonly) SVWeakObjectCache * playbackCoordinators;              //@synthesize playbackCoordinators=_playbackCoordinators - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SVPlaybackCoordinatorFactory>)factory;
-(id)playbackCoordinatorForVideo:(id)arg1 ;
-(id)initWithPlaybackCoordinatorFactory:(id)arg1 ;
-(SVWeakObjectCache *)playbackCoordinators;
@end

