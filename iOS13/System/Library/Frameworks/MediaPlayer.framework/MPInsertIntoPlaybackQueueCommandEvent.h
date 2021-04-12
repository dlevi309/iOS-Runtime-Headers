/*
* Generated on Monday, March 1, 2021 at 2:31:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MPRemoteCommandEvent.h>

@class NSArray, MPRemotePlaybackQueue, NSNumber, NSString;

@interface MPInsertIntoPlaybackQueueCommandEvent : MPRemoteCommandEvent {

	NSArray* _supportedInsertionPositions;
	long long _insertionPosition;
	MPRemotePlaybackQueue* _playbackQueue;
	NSNumber* _privateListeningOverride;
	NSString* _insertAfterContentItemID;
	long long _destinationOffset;

}

@property (nonatomic,copy) NSArray * supportedInsertionPositions;                  //@synthesize supportedInsertionPositions=_supportedInsertionPositions - In the implementation block
@property (nonatomic,readonly) long long insertionPosition;                        //@synthesize insertionPosition=_insertionPosition - In the implementation block
@property (nonatomic,readonly) MPRemotePlaybackQueue * playbackQueue;              //@synthesize playbackQueue=_playbackQueue - In the implementation block
@property (nonatomic,readonly) NSNumber * privateListeningOverride;                //@synthesize privateListeningOverride=_privateListeningOverride - In the implementation block
@property (nonatomic,readonly) NSString * insertAfterContentItemID;                //@synthesize insertAfterContentItemID=_insertAfterContentItemID - In the implementation block
@property (nonatomic,readonly) long long destinationOffset;                        //@synthesize destinationOffset=_destinationOffset - In the implementation block
-(id)initWithCommand:(id)arg1 mediaRemoteType:(unsigned)arg2 options:(id)arg3 ;
-(long long)destinationOffset;
-(id)initWithCommand:(id)arg1 playbackQueue:(id)arg2 options:(id)arg3 ;
-(NSArray *)supportedInsertionPositions;
-(void)setSupportedInsertionPositions:(NSArray *)arg1 ;
-(long long)insertionPosition;
-(MPRemotePlaybackQueue *)playbackQueue;
-(NSNumber *)privateListeningOverride;
-(NSString *)insertAfterContentItemID;
@end

