/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

#import <libobjc.A.dylib/SVVideoInteractionHandlerFactory.h>

@protocol SVVideoPlaybackController, SVVideoProviderProviding;
@class NSString;

@interface SVLearnMoreInteractionHandlerFactory : NSObject <SVVideoInteractionHandlerFactory> {

	id<SVVideoPlaybackController> _playbackController;
	id<SVVideoProviderProviding> _videoProviderProviding;

}

@property (nonatomic,readonly) id<SVVideoPlaybackController> playbackController;                 //@synthesize playbackController=_playbackController - In the implementation block
@property (nonatomic,readonly) id<SVVideoProviderProviding> videoProviderProviding;              //@synthesize videoProviderProviding=_videoProviderProviding - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)createInteractionHandlerForVideo:(id)arg1 ;
-(id<SVVideoProviderProviding>)videoProviderProviding;
-(id<SVVideoPlaybackController>)playbackController;
-(id)initWithVideoProviderProviding:(id)arg1 playbackController:(id)arg2 ;
@end

