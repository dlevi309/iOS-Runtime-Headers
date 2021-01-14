/*
* Generated on Thursday, January 14, 2021 at 2:21:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSArray *)supportedInsertionPositions;
-(id)initWithCommand:(id)arg1 mediaRemoteType:(unsigned)arg2 options:(id)arg3 ;
-(long long)destinationOffset;
-(long long)insertionPosition;
-(id)initWithCommand:(id)arg1 playbackQueue:(id)arg2 options:(id)arg3 ;
-(NSNumber *)privateListeningOverride;
-(NSString *)insertAfterContentItemID;
-(MPRemotePlaybackQueue *)playbackQueue;
-(void)setSupportedInsertionPositions:(NSArray *)arg1 ;
@end

