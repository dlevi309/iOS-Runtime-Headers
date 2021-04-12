/*
* Generated on Thursday, January 14, 2021 at 2:21:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(long long)shuffleType;
-(long long)repeatType;
-(id)description;
-(id)initWithMediaRemotePlaybackQueue:(MRSystemAppPlaybackQueueRef)arg1 options:(id)arg2 ;
-(BOOL)verifyWithError:(id*)arg1 ;
-(NSArray *)trackIdentifiers;
-(NSString *)firstTrackIdentifier;
-(MPIdentifierSet *)collectionIdentifierSet;
@end

