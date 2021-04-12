/*
* Generated on Monday, March 1, 2021 at 2:35:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDLQMDataTransfer : PBCodable <NSCopying> {

	NSString* _bundleName;
	int _lQM;
	unsigned _rxBytes;
	unsigned _stateDuration;
	unsigned _txBytes;
	SCD_Struct_AW1 _has;

}

@property (nonatomic,readonly) BOOL hasBundleName; 
@property (nonatomic,retain) NSString * bundleName;               //@synthesize bundleName=_bundleName - In the implementation block
@property (assign,nonatomic) BOOL hasLQM; 
@property (assign,nonatomic) int lQM;                             //@synthesize lQM=_lQM - In the implementation block
@property (assign,nonatomic) BOOL hasTxBytes; 
@property (assign,nonatomic) unsigned txBytes;                    //@synthesize txBytes=_txBytes - In the implementation block
@property (assign,nonatomic) BOOL hasRxBytes; 
@property (assign,nonatomic) unsigned rxBytes;                    //@synthesize rxBytes=_rxBytes - In the implementation block
@property (assign,nonatomic) BOOL hasStateDuration; 
@property (assign,nonatomic) unsigned stateDuration;              //@synthesize stateDuration=_stateDuration - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)bundleName;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setBundleName:(NSString *)arg1 ;
-(void)setRxBytes:(unsigned)arg1 ;
-(void)setTxBytes:(unsigned)arg1 ;
-(unsigned)rxBytes;
-(unsigned)txBytes;
-(void)setLQM:(int)arg1 ;
-(void)setHasLQM:(BOOL)arg1 ;
-(BOOL)hasLQM;
-(int)lQM;
-(void)setHasTxBytes:(BOOL)arg1 ;
-(BOOL)hasTxBytes;
-(void)setHasRxBytes:(BOOL)arg1 ;
-(BOOL)hasRxBytes;
-(BOOL)hasBundleName;
-(void)setStateDuration:(unsigned)arg1 ;
-(id)lQMAsString:(int)arg1 ;
-(int)StringAsLQM:(id)arg1 ;
-(void)setHasStateDuration:(BOOL)arg1 ;
-(BOOL)hasStateDuration;
-(unsigned)stateDuration;
@end

