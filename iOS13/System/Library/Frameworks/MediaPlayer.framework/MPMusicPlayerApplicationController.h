/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MPMusicPlayerController.h>

@class NSXPCConnection;

@interface MPMusicPlayerApplicationController : MPMusicPlayerController {

	NSXPCConnection* _serviceConnection;

}

@property (nonatomic,readonly) NSXPCConnection * serviceConnection;              //@synthesize serviceConnection=_serviceConnection - In the implementation block
-(void)dealloc;
-(void)_clearConnection;
-(void)beginGeneratingPlaybackNotifications;
-(void)endGeneratingPlaybackNotifications;
-(void)_establishConnectionIfNeeded;
-(void)performQueueTransaction:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_applicationAsyncServer;
-(NSXPCConnection *)serviceConnection;
@end

