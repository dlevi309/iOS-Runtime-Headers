/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

#import <libobjc.A.dylib/SVVideoPlaybackPolicyObserverFactory.h>

@protocol SVVideoPlaybackPolicyObserverFactory <NSObject>
@required
-(id)createPlaybackPolicyObserver;

@end


@protocol SVVideoPlaybackPolicy;
@class NSObject, NSString;

@interface SVVideoPlaybackPolicyObserverFactory : NSObject <SVVideoPlaybackPolicyObserverFactory> {

	NSObject*<SVVideoPlaybackPolicy> _playbackPolicy;

}

@property (nonatomic,readonly) NSObject*<SVVideoPlaybackPolicy> playbackPolicy;              //@synthesize playbackPolicy=_playbackPolicy - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSObject*<SVVideoPlaybackPolicy>)playbackPolicy;
-(id)initWithPlaybackPolicy:(id)arg1 ;
-(id)createPlaybackPolicyObserver;
@end

