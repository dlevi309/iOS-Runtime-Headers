/*
* Generated on Monday, March 1, 2021 at 2:31:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MPRemoteCommandEvent.h>

@interface MPChangeQueueEndActionCommandEvent : MPRemoteCommandEvent {

	BOOL _preservesQueueEndAction;
	long long _queueEndAction;

}

@property (nonatomic,readonly) long long queueEndAction;                  //@synthesize queueEndAction=_queueEndAction - In the implementation block
@property (nonatomic,readonly) BOOL preservesQueueEndAction;              //@synthesize preservesQueueEndAction=_preservesQueueEndAction - In the implementation block
-(id)initWithCommand:(id)arg1 mediaRemoteType:(unsigned)arg2 options:(id)arg3 ;
-(long long)queueEndAction;
-(BOOL)preservesQueueEndAction;
@end

