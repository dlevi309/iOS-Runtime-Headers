/*
* Generated on Monday, March 1, 2021 at 2:35:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDIDSMagnetCorruptionDetailed : PBCodable <NSCopying> {

	unsigned long long _correctFramesSinceLastCorruption;
	unsigned long long _correctRawBytesSinceLastCorruption;
	unsigned long long _discardedRawBytes;
	unsigned long long _linkType;
	unsigned long long _recoveryTimeInMs;
	unsigned long long _timestamp;
	SCD_Struct_AW11 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                                       //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasLinkType; 
@property (assign,nonatomic) unsigned long long linkType;                                        //@synthesize linkType=_linkType - In the implementation block
@property (assign,nonatomic) BOOL hasDiscardedRawBytes; 
@property (assign,nonatomic) unsigned long long discardedRawBytes;                               //@synthesize discardedRawBytes=_discardedRawBytes - In the implementation block
@property (assign,nonatomic) BOOL hasCorrectRawBytesSinceLastCorruption; 
@property (assign,nonatomic) unsigned long long correctRawBytesSinceLastCorruption;              //@synthesize correctRawBytesSinceLastCorruption=_correctRawBytesSinceLastCorruption - In the implementation block
@property (assign,nonatomic) BOOL hasCorrectFramesSinceLastCorruption; 
@property (assign,nonatomic) unsigned long long correctFramesSinceLastCorruption;                //@synthesize correctFramesSinceLastCorruption=_correctFramesSinceLastCorruption - In the implementation block
@property (assign,nonatomic) BOOL hasRecoveryTimeInMs; 
@property (assign,nonatomic) unsigned long long recoveryTimeInMs;                                //@synthesize recoveryTimeInMs=_recoveryTimeInMs - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)linkType;
-(void)setLinkType:(unsigned long long)arg1 ;
-(void)setHasLinkType:(BOOL)arg1 ;
-(BOOL)hasLinkType;
-(void)setDiscardedRawBytes:(unsigned long long)arg1 ;
-(void)setHasDiscardedRawBytes:(BOOL)arg1 ;
-(BOOL)hasDiscardedRawBytes;
-(void)setCorrectRawBytesSinceLastCorruption:(unsigned long long)arg1 ;
-(void)setHasCorrectRawBytesSinceLastCorruption:(BOOL)arg1 ;
-(BOOL)hasCorrectRawBytesSinceLastCorruption;
-(void)setCorrectFramesSinceLastCorruption:(unsigned long long)arg1 ;
-(void)setHasCorrectFramesSinceLastCorruption:(BOOL)arg1 ;
-(BOOL)hasCorrectFramesSinceLastCorruption;
-(void)setRecoveryTimeInMs:(unsigned long long)arg1 ;
-(void)setHasRecoveryTimeInMs:(BOOL)arg1 ;
-(BOOL)hasRecoveryTimeInMs;
-(unsigned long long)discardedRawBytes;
-(unsigned long long)correctRawBytesSinceLastCorruption;
-(unsigned long long)correctFramesSinceLastCorruption;
-(unsigned long long)recoveryTimeInMs;
@end

