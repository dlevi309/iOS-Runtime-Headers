/*
* Generated on Thursday, January 14, 2021 at 2:29:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)dictionaryRepresentation;
-(void)setTxBytes:(unsigned)arg1 ;
-(unsigned)txBytes;
-(void)setHasRxBytes:(BOOL)arg1 ;
-(unsigned)rxBytes;
-(void)setRxBytes:(unsigned)arg1 ;
-(int)lQM;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasStateDuration:(BOOL)arg1 ;
-(NSString *)bundleName;
-(BOOL)hasTxBytes;
-(BOOL)hasLQM;
-(void)setLQM:(int)arg1 ;
-(id)description;
-(BOOL)hasRxBytes;
-(void)setHasTxBytes:(BOOL)arg1 ;
-(BOOL)hasStateDuration;
-(unsigned long long)hash;
-(void)setHasLQM:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned)stateDuration;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setStateDuration:(unsigned)arg1 ;
-(void)setBundleName:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(BOOL)hasBundleName;
-(id)lQMAsString:(int)arg1 ;
-(int)StringAsLQM:(id)arg1 ;
@end

