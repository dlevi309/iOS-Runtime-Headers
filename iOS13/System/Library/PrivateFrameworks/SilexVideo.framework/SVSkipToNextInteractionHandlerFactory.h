/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

#import <libobjc.A.dylib/SVVideoInteractionHandlerFactory.h>

@protocol SVVideoPlaybackSkipping;
@class NSString;

@interface SVSkipToNextInteractionHandlerFactory : NSObject <SVVideoInteractionHandlerFactory> {

	id<SVVideoPlaybackSkipping> _playbackSkipper;

}

@property (nonatomic,readonly) id<SVVideoPlaybackSkipping> playbackSkipper;              //@synthesize playbackSkipper=_playbackSkipper - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)createInteractionHandlerForVideo:(id)arg1 ;
-(id<SVVideoPlaybackSkipping>)playbackSkipper;
-(id)initWithPlaybackSkipper:(id)arg1 ;
@end

