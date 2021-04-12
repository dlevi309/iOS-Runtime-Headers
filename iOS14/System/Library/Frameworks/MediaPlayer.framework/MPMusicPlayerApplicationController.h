/*
* Generated on Thursday, January 14, 2021 at 2:21:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPMusicPlayerController.h>

@class NSXPCConnection;

@interface MPMusicPlayerApplicationController : MPMusicPlayerController {

	NSXPCConnection* _serviceConnection;

}

@property (nonatomic,readonly) NSXPCConnection * serviceConnection;              //@synthesize serviceConnection=_serviceConnection - In the implementation block
-(void)beginGeneratingPlaybackNotifications;
-(void)endGeneratingPlaybackNotifications;
-(void)_establishConnectionIfNeeded;
-(void)performQueueTransaction:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)onApplicationServerAsync:(/*^block*/id)arg1 ;
-(NSXPCConnection *)serviceConnection;
-(void)_clearConnection;
-(void)beginPlaybackAtHostTime:(SCD_Struct_MP8)arg1 ;
-(void)prerollWithCompletion:(/*^block*/id)arg1 ;
-(void)dealloc;
@end

