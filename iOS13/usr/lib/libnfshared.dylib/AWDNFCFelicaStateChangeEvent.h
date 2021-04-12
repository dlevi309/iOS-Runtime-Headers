/*
* Generated on Monday, March 1, 2021 at 2:32:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libnfshared.dylib
*/

#import <libnfshared.dylib/libnfshared.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface AWDNFCFelicaStateChangeEvent : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _spID;
	unsigned _transactionSectorCombination;
	unsigned _transactionType;
	NSData* _transitEndStation;
	unsigned _transitGreenCarTicket;
	unsigned _transitInsideStation;
	NSData* _transitStartStation;
	BOOL _blacklisted;
	BOOL _onlineTransaction;
	SCD_Struct_AW4 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                       //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasOnlineTransaction; 
@property (assign,nonatomic) BOOL onlineTransaction;                             //@synthesize onlineTransaction=_onlineTransaction - In the implementation block
@property (assign,nonatomic) BOOL hasSpID; 
@property (assign,nonatomic) unsigned spID;                                      //@synthesize spID=_spID - In the implementation block
@property (assign,nonatomic) BOOL hasTransactionType; 
@property (assign,nonatomic) unsigned transactionType;                           //@synthesize transactionType=_transactionType - In the implementation block
@property (assign,nonatomic) BOOL hasTransactionSectorCombination; 
@property (assign,nonatomic) unsigned transactionSectorCombination;              //@synthesize transactionSectorCombination=_transactionSectorCombination - In the implementation block
@property (nonatomic,readonly) BOOL hasTransitStartStation; 
@property (nonatomic,retain) NSData * transitStartStation;                       //@synthesize transitStartStation=_transitStartStation - In the implementation block
@property (nonatomic,readonly) BOOL hasTransitEndStation; 
@property (nonatomic,retain) NSData * transitEndStation;                         //@synthesize transitEndStation=_transitEndStation - In the implementation block
@property (assign,nonatomic) BOOL hasTransitInsideStation; 
@property (assign,nonatomic) unsigned transitInsideStation;                      //@synthesize transitInsideStation=_transitInsideStation - In the implementation block
@property (assign,nonatomic) BOOL hasTransitGreenCarTicket; 
@property (assign,nonatomic) unsigned transitGreenCarTicket;                     //@synthesize transitGreenCarTicket=_transitGreenCarTicket - In the implementation block
@property (assign,nonatomic) BOOL hasBlacklisted; 
@property (assign,nonatomic) BOOL blacklisted;                                   //@synthesize blacklisted=_blacklisted - In the implementation block
-(void)dealloc;
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
-(void)setTransactionType:(unsigned)arg1 ;
-(unsigned)transactionType;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTransactionType;
-(void)setHasTransactionType:(BOOL)arg1 ;
-(void)setBlacklisted:(BOOL)arg1 ;
-(void)setTransitStartStation:(NSData *)arg1 ;
-(void)setTransitEndStation:(NSData *)arg1 ;
-(void)setOnlineTransaction:(BOOL)arg1 ;
-(void)setHasOnlineTransaction:(BOOL)arg1 ;
-(BOOL)hasOnlineTransaction;
-(void)setSpID:(unsigned)arg1 ;
-(void)setHasSpID:(BOOL)arg1 ;
-(BOOL)hasSpID;
-(void)setTransactionSectorCombination:(unsigned)arg1 ;
-(void)setHasTransactionSectorCombination:(BOOL)arg1 ;
-(BOOL)hasTransactionSectorCombination;
-(BOOL)hasTransitStartStation;
-(BOOL)hasTransitEndStation;
-(void)setTransitInsideStation:(unsigned)arg1 ;
-(void)setHasTransitInsideStation:(BOOL)arg1 ;
-(BOOL)hasTransitInsideStation;
-(void)setTransitGreenCarTicket:(unsigned)arg1 ;
-(void)setHasTransitGreenCarTicket:(BOOL)arg1 ;
-(BOOL)hasTransitGreenCarTicket;
-(void)setHasBlacklisted:(BOOL)arg1 ;
-(BOOL)hasBlacklisted;
-(BOOL)onlineTransaction;
-(unsigned)spID;
-(unsigned)transactionSectorCombination;
-(NSData *)transitStartStation;
-(NSData *)transitEndStation;
-(unsigned)transitInsideStation;
-(unsigned)transitGreenCarTicket;
-(BOOL)blacklisted;
@end

