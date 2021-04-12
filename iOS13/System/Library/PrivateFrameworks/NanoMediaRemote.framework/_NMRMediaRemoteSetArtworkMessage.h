/*
* Generated on Monday, March 1, 2021 at 2:35:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(double)timestamp;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(double)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int)originIdentifier;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setJpegData:(NSData *)arg1 ;
-(BOOL)hasJpegData;
-(NSData *)jpegData;
-(void)setOriginIdentifier:(int)arg1 ;
-(void)setHasOriginIdentifier:(BOOL)arg1 ;
-(BOOL)hasOriginIdentifier;
-(void)setOriginalDigest:(NSData *)arg1 ;
-(BOOL)hasOriginalDigest;
-(NSData *)originalDigest;
@end

