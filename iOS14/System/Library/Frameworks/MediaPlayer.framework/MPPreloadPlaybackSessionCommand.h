/*
* Generated on Thursday, January 14, 2021 at 2:21:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MPRemoteCommand.h>

@class NSArray;

@interface MPPreloadPlaybackSessionCommand : MPRemoteCommand {

	NSArray* _supportedSessionTypes;

}

@property (nonatomic,copy) NSArray * supportedSessionTypes;              //@synthesize supportedSessionTypes=_supportedSessionTypes - In the implementation block
-(NSArray *)supportedSessionTypes;
-(void)setSupportedSessionTypes:(NSArray *)arg1 ;
-(id)_mediaRemoteCommandInfoOptions;
@end

