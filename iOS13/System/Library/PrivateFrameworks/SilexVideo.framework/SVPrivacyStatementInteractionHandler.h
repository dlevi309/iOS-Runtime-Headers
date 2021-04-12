/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

#import <libobjc.A.dylib/SVInteractionHandling.h>

@protocol SVVideoAdProviding, SVVideoPlaybackController;
@class NSString;

@interface SVPrivacyStatementInteractionHandler : NSObject <SVInteractionHandling> {

	id<SVVideoAdProviding> _videoAdProvider;
	id<SVVideoPlaybackController> _playbackController;

}

@property (nonatomic,readonly) id<SVVideoAdProviding> videoAdProvider;                        //@synthesize videoAdProvider=_videoAdProvider - In the implementation block
@property (nonatomic,readonly) id<SVVideoPlaybackController> playbackController;              //@synthesize playbackController=_playbackController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)handleInteractionWithContext:(id)arg1 ;
-(id<SVVideoPlaybackController>)playbackController;
-(id)initWithVideoAdProvider:(id)arg1 playbackController:(id)arg2 ;
-(id<SVVideoAdProviding>)videoAdProvider;
@end

