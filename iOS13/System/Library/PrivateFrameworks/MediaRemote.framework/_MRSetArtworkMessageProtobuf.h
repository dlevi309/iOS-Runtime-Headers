/*
* Generated on Monday, March 1, 2021 at 2:32:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface _MRSetArtworkMessageProtobuf : PBCodable <NSCopying> {

	NSData* _jpegData;

}

@property (nonatomic,readonly) BOOL hasJpegData; 
@property (nonatomic,retain) NSData * jpegData;               //@synthesize jpegData=_jpegData - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setJpegData:(NSData *)arg1 ;
-(BOOL)hasJpegData;
-(NSData *)jpegData;
@end

