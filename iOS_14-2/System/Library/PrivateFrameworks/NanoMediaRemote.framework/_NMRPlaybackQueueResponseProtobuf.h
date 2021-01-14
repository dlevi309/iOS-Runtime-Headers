/*
* Generated on Thursday, January 14, 2021 at 2:28:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)dictionaryRepresentation;
-(NSData *)playbackQueue;
-(void)setPlaybackQueue:(NSData *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setError:(NSData *)arg1 ;
-(NSData *)error;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasError;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasPlaybackQueue;
@end

