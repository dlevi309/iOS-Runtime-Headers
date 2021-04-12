/*
* Generated on Thursday, January 14, 2021 at 2:28:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
*/

#import <NanoMediaRemote/NanoMediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface _NMRPlaybackQueueRequestProtobuf : PBCodable <NSCopying> {

	NSData* _playerPath;
	NSData* _request;

}

@property (nonatomic,readonly) BOOL hasRequest; 
@property (nonatomic,retain) NSData * request;                  //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) BOOL hasPlayerPath; 
@property (nonatomic,retain) NSData * playerPath;               //@synthesize playerPath=_playerPath - In the implementation block
-(id)dictionaryRepresentation;
-(BOOL)hasRequest;
-(void)setRequest:(NSData *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasPlayerPath;
-(NSData *)request;
-(id)description;
-(void)setPlayerPath:(NSData *)arg1 ;
-(NSData *)playerPath;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

