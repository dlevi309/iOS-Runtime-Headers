/*
* Generated on Monday, March 1, 2021 at 2:31:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPRemotePlaybackQueue.h>

@class NSString, NSArray, MPIdentifierSet;

@interface MPGenericTracklistPlaybackQueue : MPRemotePlaybackQueue {

	NSString* _firstTrackIdentifier;
	NSArray* _trackIdentifiers;
	long long _shuffleType;
	long long _repeatType;
	MPIdentifierSet* _collectionIdentifierSet;

}

@property (nonatomic,readonly) NSString * firstTrackIdentifier;                        //@synthesize firstTrackIdentifier=_firstTrackIdentifier - In the implementation block
@property (nonatomic,readonly) NSArray * trackIdentifiers;                             //@synthesize trackIdentifiers=_trackIdentifiers - In the implementation block
@property (nonatomic,readonly) long long shuffleType;                                  //@synthesize shuffleType=_shuffleType - In the implementation block
@property (nonatomic,readonly) long long repeatType;                                   //@synthesize repeatType=_repeatType - In the implementation block
@property (nonatomic,readonly) MPIdentifierSet * collectionIdentifierSet;              //@synthesize collectionIdentifierSet=_collectionIdentifierSet - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithMediaRemotePlaybackQueue:(MRSystemAppPlaybackQueueRef)arg1 options:(id)arg2 ;
-(BOOL)verifyWithError:(id*)arg1 ;
-(long long)shuffleType;
-(long long)repeatType;
-(NSString *)firstTrackIdentifier;
-(NSArray *)trackIdentifiers;
-(MPIdentifierSet *)collectionIdentifierSet;
@end

