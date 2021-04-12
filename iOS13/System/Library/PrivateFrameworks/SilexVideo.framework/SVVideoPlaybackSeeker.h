/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

#import <libobjc.A.dylib/SVVideoPlaybackSeeking.h>

@class SVPlayer, NSString;

@interface SVVideoPlaybackSeeker : NSObject <SVVideoPlaybackSeeking> {

	SVPlayer* _player;

}

@property (nonatomic,readonly) SVPlayer * player;                   //@synthesize player=_player - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SVPlayer *)player;
-(id)initWithPlayer:(id)arg1 ;
-(void)seekToStart;
@end

