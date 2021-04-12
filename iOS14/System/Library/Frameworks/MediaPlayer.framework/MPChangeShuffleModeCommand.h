/*
* Generated on Thursday, January 14, 2021 at 2:21:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MPRemoteCommand.h>

@class NSArray;

@interface MPChangeShuffleModeCommand : MPRemoteCommand {

	NSArray* _supportedShuffleTypes;
	long long _currentShuffleType;

}

@property (assign,nonatomic) long long currentShuffleType;              //@synthesize currentShuffleType=_currentShuffleType - In the implementation block
-(long long)currentShuffleType;
-(id)newCommandEventWithType:(long long)arg1 preservesShuffleMode:(BOOL)arg2 ;
-(void)setCurrentShuffleType:(long long)arg1 ;
-(id)_mediaRemoteCommandInfoOptions;
-(id)newCommandEventWithType:(long long)arg1 ;
-(void)setSupportedShuffleTypes:(id)arg1 ;
@end

