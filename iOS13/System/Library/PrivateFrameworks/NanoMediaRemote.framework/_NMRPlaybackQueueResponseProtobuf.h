/*
* Generated on Monday, March 1, 2021 at 2:35:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
*/

#import <NanoMediaRemote/NanoMediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface _NMRPlaybackQueueResponseProtobuf : PBCodable <NSCopying> {

	NSData* _error;
	NSData* _playbackQueue;

}

@property (nonatomic,readonly) BOOL hasPlaybackQueue; 
@property (nonatomic,retain) NSData * playbackQueue;               //@synthesize playbackQueue=_playbackQueue - In the implementation block
@property (nonatomic,readonly) BOOL hasError; 
@property (nonatomic,retain) NSData * error;                       //@synthesize error=_error - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)error;
-(void)setError:(NSData *)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasError;
-(NSData *)playbackQueue;
-(void)setPlaybackQueue:(NSData *)arg1 ;
-(BOOL)hasPlaybackQueue;
@end

