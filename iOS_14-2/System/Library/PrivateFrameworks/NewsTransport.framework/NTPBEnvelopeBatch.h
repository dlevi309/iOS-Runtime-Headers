/*
* Generated on Thursday, January 14, 2021 at 2:23:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface NTPBEnvelopeBatch : PBCodable <NSCopying> {

	int _envelopeDroppedCountDueToSizeLimit;
	NSMutableArray* _envelopes;
	int _majorVersion;
	int _minorVersion;
	int _patchVersion;
	SCD_Struct_NT2 _has;

}

@property (nonatomic,retain) NSMutableArray * envelopes;                              //@synthesize envelopes=_envelopes - In the implementation block
@property (assign,nonatomic) BOOL hasMajorVersion; 
@property (assign,nonatomic) int majorVersion;                                        //@synthesize majorVersion=_majorVersion - In the implementation block
@property (assign,nonatomic) BOOL hasMinorVersion; 
@property (assign,nonatomic) int minorVersion;                                        //@synthesize minorVersion=_minorVersion - In the implementation block
@property (assign,nonatomic) BOOL hasPatchVersion; 
@property (assign,nonatomic) int patchVersion;                                        //@synthesize patchVersion=_patchVersion - In the implementation block
@property (assign,nonatomic) BOOL hasEnvelopeDroppedCountDueToSizeLimit; 
@property (assign,nonatomic) int envelopeDroppedCountDueToSizeLimit;                  //@synthesize envelopeDroppedCountDueToSizeLimit=_envelopeDroppedCountDueToSizeLimit - In the implementation block
+(Class)envelopeType;
-(id)dictionaryRepresentation;
-(void)setPatchVersion:(int)arg1 ;
-(void)setHasPatchVersion:(BOOL)arg1 ;
-(BOOL)hasPatchVersion;
-(void)setMajorVersion:(int)arg1 ;
-(void)setMinorVersion:(int)arg1 ;
-(NSMutableArray *)envelopes;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(int)majorVersion;
-(void)setEnvelopes:(NSMutableArray *)arg1 ;
-(int)minorVersion;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)addEnvelope:(id)arg1 ;
-(void)clearEnvelopes;
-(unsigned long long)envelopesCount;
-(id)envelopeAtIndex:(unsigned long long)arg1 ;
-(void)setHasMajorVersion:(BOOL)arg1 ;
-(BOOL)hasMajorVersion;
-(void)setHasMinorVersion:(BOOL)arg1 ;
-(BOOL)hasMinorVersion;
-(void)setEnvelopeDroppedCountDueToSizeLimit:(int)arg1 ;
-(void)setHasEnvelopeDroppedCountDueToSizeLimit:(BOOL)arg1 ;
-(BOOL)hasEnvelopeDroppedCountDueToSizeLimit;
-(int)envelopeDroppedCountDueToSizeLimit;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)patchVersion;
-(BOOL)isEqual:(id)arg1 ;
@end

