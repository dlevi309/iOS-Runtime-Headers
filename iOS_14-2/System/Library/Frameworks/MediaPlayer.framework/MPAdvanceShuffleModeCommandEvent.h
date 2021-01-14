/*
* Generated on Thursday, January 14, 2021 at 2:21:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MPRemoteCommandEvent.h>

@interface MPAdvanceShuffleModeCommandEvent : MPRemoteCommandEvent {

	BOOL _preservesShuffleMode;

}

@property (nonatomic,readonly) BOOL preservesShuffleMode;              //@synthesize preservesShuffleMode=_preservesShuffleMode - In the implementation block
-(id)initWithCommand:(id)arg1 mediaRemoteType:(unsigned)arg2 options:(id)arg3 ;
-(BOOL)preservesShuffleMode;
@end

