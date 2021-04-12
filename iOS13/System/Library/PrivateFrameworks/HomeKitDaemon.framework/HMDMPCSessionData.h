/*
* Generated on Monday, March 1, 2021 at 2:33:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>

@class NSSet, NSNumber, MPPlaybackArchive;

@interface HMDMPCSessionData : HMFObject {

	NSSet* _mediaProfiles;
	NSNumber* _playbackStateNumber;
	NSNumber* _playbackVolumeNumber;
	MPPlaybackArchive* _playbackArchive;

}

@property (nonatomic,copy,readonly) NSSet * mediaProfiles;                       //@synthesize mediaProfiles=_mediaProfiles - In the implementation block
@property (nonatomic,readonly) NSNumber * playbackStateNumber;                   //@synthesize playbackStateNumber=_playbackStateNumber - In the implementation block
@property (nonatomic,readonly) NSNumber * playbackVolumeNumber;                  //@synthesize playbackVolumeNumber=_playbackVolumeNumber - In the implementation block
@property (nonatomic,readonly) MPPlaybackArchive * playbackArchive;              //@synthesize playbackArchive=_playbackArchive - In the implementation block
-(MPPlaybackArchive *)playbackArchive;
-(NSSet *)mediaProfiles;
-(id)initWithMediaAction:(id)arg1 ;
-(id)dictionaryRepresentation:(BOOL)arg1 ;
-(id)initWithDictionaryRepresentation:(id)arg1 profileSource:(id)arg2 ;
-(id)initWithMediaProfiles:(id)arg1 playbackState:(id)arg2 playbackVolume:(id)arg3 playbackArchive:(id)arg4 ;
-(NSNumber *)playbackStateNumber;
-(NSNumber *)playbackVolumeNumber;
@end

