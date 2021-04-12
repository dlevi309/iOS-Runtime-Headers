/*
* Generated on Thursday, January 14, 2021 at 2:21:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setCurrentQueueEndAction:(long long)arg1 ;
-(long long)currentQueueEndAction;
-(id)_mediaRemoteCommandInfoOptions;
-(NSArray *)supportedQueueEndActions;
-(void)setSupportedQueueEndActions:(NSArray *)arg1 ;
@end

