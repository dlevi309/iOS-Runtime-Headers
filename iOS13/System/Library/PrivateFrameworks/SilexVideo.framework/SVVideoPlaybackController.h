/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

#import <libobjc.A.dylib/SVVideoPlaybackController.h>

@protocol SVVideoPlaybackController <NSObject>
@required
-(void)pause;
-(void)play;

@end


@class SVVideoPlaybackManager, NSString;

@interface SVVideoPlaybackController : NSObject <SVVideoPlaybackController> {

	SVVideoPlaybackManager* _playbackManager;

}

@property (nonatomic,__weak,readonly) SVVideoPlaybackManager * playbackManager;              //@synthesize playbackManager=_playbackManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)pause;
-(void)play;
-(SVVideoPlaybackManager *)playbackManager;
-(id)initWithPlaybackManager:(id)arg1 ;
@end

