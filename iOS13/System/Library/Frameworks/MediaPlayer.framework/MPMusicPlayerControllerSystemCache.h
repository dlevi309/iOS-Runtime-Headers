/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


@class NSUserDefaults, MPMusicPlayerControllerNowPlaying, MPMusicPlayerQueueDescriptor;

@interface MPMusicPlayerControllerSystemCache : NSObject {

	NSUserDefaults* _defaults;

}

@property (nonatomic,retain) MPMusicPlayerControllerNowPlaying * nowPlaying; 
@property (nonatomic,retain) MPMusicPlayerQueueDescriptor * queueDescriptor; 
@property (nonatomic,readonly) BOOL hasCachedData; 
+(id)sharedCache;
-(void)clearCache;
-(id)_init;
-(MPMusicPlayerQueueDescriptor *)queueDescriptor;
-(void)setQueueDescriptor:(MPMusicPlayerQueueDescriptor *)arg1 ;
-(BOOL)hasCachedData;
-(MPMusicPlayerControllerNowPlaying *)nowPlaying;
-(void)setNowPlaying:(MPMusicPlayerControllerNowPlaying *)arg1 ;
-(id)_objectOfClass:(Class)arg1 forKey:(id)arg2 error:(id*)arg3 ;
-(void)_saveObject:(id)arg1 forKey:(id)arg2 error:(id*)arg3 ;
@end

