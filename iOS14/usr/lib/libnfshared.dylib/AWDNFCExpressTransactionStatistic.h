/*
* Generated on Thursday, January 14, 2021 at 2:26:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libnfshared.dylib
*/

#import <libnfshared.dylib/libnfshared.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface AWDNFCExpressTransactionStatistic : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _expressModeConfiguration;
	NSMutableArray* _transactionLists;
	SCD_Struct_AW3 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                   //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain) NSMutableArray * transactionLists;              //@synthesize transactionLists=_transactionLists - In the implementation block
@property (assign,nonatomic) BOOL hasExpressModeConfiguration; 
@property (assign,nonatomic) unsigned expressModeConfiguration;              //@synthesize expressModeConfiguration=_expressModeConfiguration - In the implementation block
+(Class)transactionListType;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)addTransactionList:(id)arg1 ;
-(unsigned long long)transactionListsCount;
-(void)clearTransactionLists;
-(id)transactionListAtIndex:(unsigned long long)arg1 ;
-(void)setExpressModeConfiguration:(unsigned)arg1 ;
-(void)setHasExpressModeConfiguration:(BOOL)arg1 ;
-(BOOL)hasExpressModeConfiguration;
-(NSMutableArray *)transactionLists;
-(void)setTransactionLists:(NSMutableArray *)arg1 ;
-(unsigned)expressModeConfiguration;
@end

