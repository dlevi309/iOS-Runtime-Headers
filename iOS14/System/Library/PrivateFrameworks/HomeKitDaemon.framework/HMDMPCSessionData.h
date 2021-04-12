/*
* Generated on Thursday, January 14, 2021 at 2:25:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>

@class NSSet, NSNumber, MPPlaybackArchive;

@interface HMDMPCSessionData : HMFObject {

	NSSet* _mediaProfiles;
	NSNumber* _playbackStateNumber;
	NSNumber* _playbackVolumeNumber;
	MPPlaybackArchive* _playbackArchive;
	NSNumber* _source;

}

@property (nonatomic,copy,readonly) NSSet * mediaProfiles;                        //@synthesize mediaProfiles=_mediaProfiles - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * playbackStateNumber;               //@synthesize playbackStateNumber=_playbackStateNumber - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * playbackVolumeNumber;              //@synthesize playbackVolumeNumber=_playbackVolumeNumber - In the implementation block
@property (nonatomic,readonly) MPPlaybackArchive * playbackArchive;               //@synthesize playbackArchive=_playbackArchive - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * source;                            //@synthesize source=_source - In the implementation block
-(NSSet *)mediaProfiles;
-(MPPlaybackArchive *)playbackArchive;
-(NSNumber *)source;
-(id)initWithMediaAction:(id)arg1 source:(id)arg2 ;
-(id)dictionaryRepresentation:(BOOL)arg1 ;
-(id)initWithDictionaryRepresentation:(id)arg1 profileSource:(id)arg2 ;
-(NSNumber *)playbackStateNumber;
-(id)initWithMediaProfiles:(id)arg1 playbackState:(id)arg2 playbackVolume:(id)arg3 playbackArchive:(id)arg4 source:(id)arg5 ;
-(NSNumber *)playbackVolumeNumber;
@end

