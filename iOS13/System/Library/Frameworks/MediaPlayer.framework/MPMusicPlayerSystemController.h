/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MPMusicPlayerController.h>
#import <libobjc.A.dylib/MPSystemMusicPlayerController.h>

@class NSString;

@interface MPMusicPlayerSystemController : MPMusicPlayerController <MPSystemMusicPlayerController>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)playbackState;
-(id)_queueDescriptor;
-(BOOL)userQueueModificationsDisabled;
-(void)setUserQueueModificationsDisabled:(BOOL)arg1 ;
-(void)_establishConnectionIfNeeded;
-(id)_nowPlaying;
-(void)openToPlayQueueDescriptor:(id)arg1 ;
-(BOOL)_shouldAccessCache;
-(id)_systemServer;
@end

