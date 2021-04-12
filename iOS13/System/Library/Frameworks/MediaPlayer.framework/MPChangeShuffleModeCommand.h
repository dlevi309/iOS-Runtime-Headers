/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MPRemoteCommand.h>

@class NSArray;

@interface MPChangeShuffleModeCommand : MPRemoteCommand {

	NSArray* _supportedShuffleTypes;
	long long _currentShuffleType;

}

@property (assign,nonatomic) long long currentShuffleType;              //@synthesize currentShuffleType=_currentShuffleType - In the implementation block
-(id)_mediaRemoteCommandInfoOptions;
-(id)newCommandEventWithType:(long long)arg1 ;
-(void)setCurrentShuffleType:(long long)arg1 ;
-(void)setSupportedShuffleTypes:(id)arg1 ;
-(id)newCommandEventWithType:(long long)arg1 preservesShuffleMode:(BOOL)arg2 ;
-(long long)currentShuffleType;
@end

