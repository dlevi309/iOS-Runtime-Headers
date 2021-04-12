/*
* Generated on Monday, March 1, 2021 at 2:32:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _MRAudioDataBlockProtobuf;

@interface _MRSendVoiceInputMessageProtobuf : PBCodable <NSCopying> {

	_MRAudioDataBlockProtobuf* _dataBlock;

}

@property (nonatomic,readonly) BOOL hasDataBlock; 
@property (nonatomic,retain) _MRAudioDataBlockProtobuf * dataBlock;              //@synthesize dataBlock=_dataBlock - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setDataBlock:(_MRAudioDataBlockProtobuf *)arg1 ;
-(_MRAudioDataBlockProtobuf *)dataBlock;
-(BOOL)hasDataBlock;
@end

