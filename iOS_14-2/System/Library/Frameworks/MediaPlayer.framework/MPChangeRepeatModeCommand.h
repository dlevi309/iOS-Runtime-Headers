/*
* Generated on Thursday, January 14, 2021 at 2:21:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MPRemoteCommand.h>

@class NSArray;

@interface MPChangeRepeatModeCommand : MPRemoteCommand {

	NSArray* _supportedRepeatTypes;
	long long _currentRepeatType;

}

@property (assign,nonatomic) long long currentRepeatType;              //@synthesize currentRepeatType=_currentRepeatType - In the implementation block
-(id)newCommandEventWithType:(long long)arg1 preservesRepeatMode:(BOOL)arg2 ;
-(void)setCurrentRepeatType:(long long)arg1 ;
-(long long)currentRepeatType;
-(id)_mediaRemoteCommandInfoOptions;
-(id)newCommandEventWithType:(long long)arg1 ;
-(void)setSupportedRepeatTypes:(id)arg1 ;
@end

