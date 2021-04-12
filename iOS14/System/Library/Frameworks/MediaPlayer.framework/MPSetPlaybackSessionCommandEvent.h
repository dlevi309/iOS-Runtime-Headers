/*
* Generated on Thursday, January 14, 2021 at 2:21:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MPRemoteCommandEvent.h>

@class NSString, NSData;

@interface MPSetPlaybackSessionCommandEvent : MPRemoteCommandEvent {

	NSString* _identifier;
	NSString* _type;
	NSData* _playbackSessionData;

}

@property (nonatomic,readonly) NSString * identifier;                     //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * type;                           //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSData * playbackSessionData;              //@synthesize playbackSessionData=_playbackSessionData - In the implementation block
-(id)initWithCommand:(id)arg1 mediaRemoteType:(unsigned)arg2 options:(id)arg3 ;
-(NSData *)playbackSessionData;
-(NSString *)type;
-(NSString *)identifier;
@end

