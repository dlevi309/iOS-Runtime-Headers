/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MPRemoteCommand.h>

@class NSArray;

@interface MPChangeQueueEndActionCommand : MPRemoteCommand {

	long long _currentQueueEndAction;
	NSArray* _supportedQueueEndActions;

}

@property (assign,nonatomic) long long currentQueueEndAction;               //@synthesize currentQueueEndAction=_currentQueueEndAction - In the implementation block
@property (nonatomic,copy) NSArray * supportedQueueEndActions;              //@synthesize supportedQueueEndActions=_supportedQueueEndActions - In the implementation block
-(id)_mediaRemoteCommandInfoOptions;
-(void)setCurrentQueueEndAction:(long long)arg1 ;
-(void)setSupportedQueueEndActions:(NSArray *)arg1 ;
-(long long)currentQueueEndAction;
-(NSArray *)supportedQueueEndActions;
@end

