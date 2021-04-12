/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MPRemoteCommand.h>

@class NSArray;

@interface MPChangeRepeatModeCommand : MPRemoteCommand {

	NSArray* _supportedRepeatTypes;
	long long _currentRepeatType;

}

@property (assign,nonatomic) long long currentRepeatType;              //@synthesize currentRepeatType=_currentRepeatType - In the implementation block
-(id)_mediaRemoteCommandInfoOptions;
-(void)setCurrentRepeatType:(long long)arg1 ;
-(void)setSupportedRepeatTypes:(id)arg1 ;
-(id)newCommandEventWithType:(long long)arg1 ;
-(id)newCommandEventWithType:(long long)arg1 preservesRepeatMode:(BOOL)arg2 ;
-(long long)currentRepeatType;
@end

