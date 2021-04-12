/*
* Generated on Thursday, January 14, 2021 at 2:21:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)_nowPlaying;
-(BOOL)userQueueModificationsDisabled;
-(void)_establishConnectionIfNeeded;
-(void)setUserQueueModificationsDisabled:(BOOL)arg1 ;
-(BOOL)_shouldAccessCache;
-(void)onSystemServer:(/*^block*/id)arg1 ;
-(void)openToPlayQueueDescriptor:(id)arg1 ;
@end

