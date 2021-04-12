/*
* Generated on Thursday, January 14, 2021 at 2:21:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_saveObject:(id)arg1 forKey:(id)arg2 error:(id*)arg3 ;
-(void)setNowPlaying:(MPMusicPlayerControllerNowPlaying *)arg1 ;
-(BOOL)hasCachedData;
-(MPMusicPlayerControllerNowPlaying *)nowPlaying;
-(void)clearCache;
-(id)_init;
-(MPMusicPlayerQueueDescriptor *)queueDescriptor;
-(void)setQueueDescriptor:(MPMusicPlayerQueueDescriptor *)arg1 ;
-(id)_objectOfClass:(Class)arg1 forKey:(id)arg2 error:(id*)arg3 ;
@end

