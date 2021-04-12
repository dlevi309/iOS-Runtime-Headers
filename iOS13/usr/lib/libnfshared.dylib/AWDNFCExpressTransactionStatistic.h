/*
* Generated on Monday, March 1, 2021 at 2:32:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	SCD_Struct_AW2 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                   //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain) NSMutableArray * transactionLists;              //@synthesize transactionLists=_transactionLists - In the implementation block
@property (assign,nonatomic) BOOL hasExpressModeConfiguration; 
@property (assign,nonatomic) unsigned expressModeConfiguration;              //@synthesize expressModeConfiguration=_expressModeConfiguration - In the implementation block
+(Class)transactionListType;
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
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setTransactionLists:(NSMutableArray *)arg1 ;
-(void)addTransactionList:(id)arg1 ;
-(unsigned long long)transactionListsCount;
-(void)clearTransactionLists;
-(id)transactionListAtIndex:(unsigned long long)arg1 ;
-(void)setExpressModeConfiguration:(unsigned)arg1 ;
-(void)setHasExpressModeConfiguration:(BOOL)arg1 ;
-(BOOL)hasExpressModeConfiguration;
-(NSMutableArray *)transactionLists;
-(unsigned)expressModeConfiguration;
@end

