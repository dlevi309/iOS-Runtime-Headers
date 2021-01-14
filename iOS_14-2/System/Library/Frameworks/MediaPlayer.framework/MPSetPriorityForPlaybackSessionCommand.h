/*
* Generated on Thursday, January 14, 2021 at 2:21:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MPRemoteCommand.h>

@class NSDictionary;

@interface MPSetPriorityForPlaybackSessionCommand : MPRemoteCommand {

	NSDictionary* _preloadedSessions;

}

@property (nonatomic,copy) NSDictionary * preloadedSessions;              //@synthesize preloadedSessions=_preloadedSessions - In the implementation block
-(NSDictionary *)preloadedSessions;
-(void)setPreloadedSessions:(NSDictionary *)arg1 ;
-(id)_mediaRemoteCommandInfoOptions;
@end

