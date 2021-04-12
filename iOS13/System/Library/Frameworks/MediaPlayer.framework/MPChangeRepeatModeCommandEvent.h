/*
* Generated on Monday, March 1, 2021 at 2:31:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MPRemoteCommandEvent.h>

@interface MPChangeRepeatModeCommandEvent : MPRemoteCommandEvent {

	BOOL _preservesRepeatMode;
	long long _repeatType;

}

@property (nonatomic,readonly) long long repeatType;                  //@synthesize repeatType=_repeatType - In the implementation block
@property (nonatomic,readonly) BOOL preservesRepeatMode;              //@synthesize preservesRepeatMode=_preservesRepeatMode - In the implementation block
-(long long)repeatType;
-(id)initWithCommand:(id)arg1 mediaRemoteType:(unsigned)arg2 options:(id)arg3 ;
-(BOOL)preservesRepeatMode;
@end

