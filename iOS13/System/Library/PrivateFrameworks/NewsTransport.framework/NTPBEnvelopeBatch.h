/*
* Generated on Monday, March 1, 2021 at 2:32:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	SCD_Struct_NT5 _has;

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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(int)majorVersion;
-(int)minorVersion;
-(int)patchVersion;
-(void)setMajorVersion:(int)arg1 ;
-(void)setMinorVersion:(int)arg1 ;
-(void)setPatchVersion:(int)arg1 ;
-(void)setHasPatchVersion:(BOOL)arg1 ;
-(BOOL)hasPatchVersion;
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
-(NSMutableArray *)envelopes;
-(void)setEnvelopes:(NSMutableArray *)arg1 ;
-(int)envelopeDroppedCountDueToSizeLimit;
@end

