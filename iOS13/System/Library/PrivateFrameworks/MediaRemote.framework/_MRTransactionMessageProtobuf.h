/*
* Generated on Monday, March 1, 2021 at 2:32:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _MRTransactionPacketsProtobuf, _MRNowPlayingPlayerPathProtobuf;

@interface _MRTransactionMessageProtobuf : PBCodable <NSCopying> {

	unsigned long long _name;
	_MRTransactionPacketsProtobuf* _packets;
	_MRNowPlayingPlayerPathProtobuf* _playerPath;
	SCD_Struct_MR4 _has;

}

@property (assign,nonatomic) BOOL hasName; 
@property (assign,nonatomic) unsigned long long name;                                   //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) BOOL hasPackets; 
@property (nonatomic,retain) _MRTransactionPacketsProtobuf * packets;                   //@synthesize packets=_packets - In the implementation block
@property (nonatomic,readonly) BOOL hasPlayerPath; 
@property (nonatomic,retain) _MRNowPlayingPlayerPathProtobuf * playerPath;              //@synthesize playerPath=_playerPath - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setName:(unsigned long long)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasName;
-(void)setHasName:(BOOL)arg1 ;
-(_MRNowPlayingPlayerPathProtobuf *)playerPath;
-(void)setPlayerPath:(_MRNowPlayingPlayerPathProtobuf *)arg1 ;
-(BOOL)hasPlayerPath;
-(void)setPackets:(_MRTransactionPacketsProtobuf *)arg1 ;
-(_MRTransactionPacketsProtobuf *)packets;
-(BOOL)hasPackets;
@end

