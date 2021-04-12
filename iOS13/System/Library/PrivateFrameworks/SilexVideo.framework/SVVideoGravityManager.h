/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

#import <libobjc.A.dylib/SVVideoTransitionObserver.h>

@protocol SVVideoGravityProviderFactory, SVVideoViewControllerProviding, SVVideoGravityProviding;
@class NSString;

@interface SVVideoGravityManager : NSObject <SVVideoTransitionObserver> {

	id<SVVideoGravityProviderFactory> _videoGravityProviderFactory;
	id<SVVideoViewControllerProviding> _videoViewControllerProvider;
	id<SVVideoGravityProviding> _videoGravityProviderForCurrentVideo;
	id<SVVideoGravityProviding> _videoGravityProviderForTransitioningVideo;

}

@property (nonatomic,readonly) id<SVVideoGravityProviderFactory> videoGravityProviderFactory;                    //@synthesize videoGravityProviderFactory=_videoGravityProviderFactory - In the implementation block
@property (nonatomic,readonly) id<SVVideoViewControllerProviding> videoViewControllerProvider;                   //@synthesize videoViewControllerProvider=_videoViewControllerProvider - In the implementation block
@property (nonatomic,retain) id<SVVideoGravityProviding> videoGravityProviderForCurrentVideo;                    //@synthesize videoGravityProviderForCurrentVideo=_videoGravityProviderForCurrentVideo - In the implementation block
@property (nonatomic,retain) id<SVVideoGravityProviding> videoGravityProviderForTransitioningVideo;              //@synthesize videoGravityProviderForTransitioningVideo=_videoGravityProviderForTransitioningVideo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SVVideoViewControllerProviding>)videoViewControllerProvider;
-(void)willTransitionToVideo:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(id<SVVideoGravityProviderFactory>)videoGravityProviderFactory;
-(void)setVideoGravityProviderForTransitioningVideo:(id<SVVideoGravityProviding>)arg1 ;
-(id<SVVideoGravityProviding>)videoGravityProviderForTransitioningVideo;
-(void)setVideoGravityProviderForCurrentVideo:(id<SVVideoGravityProviding>)arg1 ;
-(id<SVVideoGravityProviding>)videoGravityProviderForCurrentVideo;
-(id)initWithVideoGravityProviderFactory:(id)arg1 videoViewControllerProvider:(id)arg2 ;
@end

