/*
* Generated on Monday, March 1, 2021 at 2:31:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MPRemoteCommandEvent.h>

@class NSString;

@interface MPReorderQueueCommandEvent : MPRemoteCommandEvent {

	NSString* _insertAfterContextItemID;
	long long _destinationOffset;

}

@property (nonatomic,readonly) NSString * insertAfterContextItemID;              //@synthesize insertAfterContextItemID=_insertAfterContextItemID - In the implementation block
@property (nonatomic,readonly) long long destinationOffset;                      //@synthesize destinationOffset=_destinationOffset - In the implementation block
-(id)initWithCommand:(id)arg1 mediaRemoteType:(unsigned)arg2 options:(id)arg3 ;
-(NSString *)insertAfterContextItemID;
-(long long)destinationOffset;
@end

