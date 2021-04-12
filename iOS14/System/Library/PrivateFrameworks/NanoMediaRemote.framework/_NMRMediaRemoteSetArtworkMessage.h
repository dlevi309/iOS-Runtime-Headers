/*
* Generated on Thursday, January 14, 2021 at 2:28:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
*/

#import <NanoMediaRemote/NanoMediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface _NMRMediaRemoteSetArtworkMessage : PBCodable <NSCopying> {

	double _timestamp;
	NSData* _jpegData;
	int _originIdentifier;
	NSData* _originalDigest;
	SCD_Struct_NM1 _has;

}

@property (nonatomic,readonly) BOOL hasJpegData; 
@property (nonatomic,retain) NSData * jpegData;                     //@synthesize jpegData=_jpegData - In the implementation block
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) double timestamp;                      //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasOriginalDigest; 
@property (nonatomic,retain) NSData * originalDigest;               //@synthesize originalDigest=_originalDigest - In the implementation block
@property (assign,nonatomic) BOOL hasOriginIdentifier; 
@property (assign,nonatomic) int originIdentifier;                  //@synthesize originIdentifier=_originIdentifier - In the implementation block
-(id)dictionaryRepresentation;
-(int)originIdentifier;
-(double)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setOriginIdentifier:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(double)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSData *)jpegData;
-(void)setHasOriginIdentifier:(BOOL)arg1 ;
-(BOOL)hasOriginIdentifier;
-(void)setJpegData:(NSData *)arg1 ;
-(void)setOriginalDigest:(NSData *)arg1 ;
-(BOOL)hasJpegData;
-(BOOL)hasOriginalDigest;
-(NSData *)originalDigest;
@end

