/*
* Generated on Thursday, January 14, 2021 at 2:28:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDIMessageHealthCheckPerformed : PBCodable <NSCopying> {

	SCD_Struct_AW21* _aliasesMatcheds;
	SCD_Struct_AW21* _coarseMatcheds;
	SCD_Struct_AW21* _numMisseds;
	SCD_Struct_AW21* _numOutOfOrders;
	unsigned long long _timestamp;
	unsigned _numMessages;
	unsigned _numberOfRequests;
	unsigned _numberOfResponses;
	SCD_Struct_AW1 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                           //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasNumberOfRequests; 
@property (assign,nonatomic) unsigned numberOfRequests;                              //@synthesize numberOfRequests=_numberOfRequests - In the implementation block
@property (assign,nonatomic) BOOL hasNumberOfResponses; 
@property (assign,nonatomic) unsigned numberOfResponses;                             //@synthesize numberOfResponses=_numberOfResponses - In the implementation block
@property (assign,nonatomic) BOOL hasNumMessages; 
@property (assign,nonatomic) unsigned numMessages;                                   //@synthesize numMessages=_numMessages - In the implementation block
@property (nonatomic,readonly) unsigned long long numOutOfOrdersCount; 
@property (nonatomic,readonly) unsigned* numOutOfOrders; 
@property (nonatomic,readonly) unsigned long long numMissedsCount; 
@property (nonatomic,readonly) unsigned* numMisseds; 
@property (nonatomic,readonly) unsigned long long aliasesMatchedsCount; 
@property (nonatomic,readonly) unsigned* aliasesMatcheds; 
@property (nonatomic,readonly) unsigned long long coarseMatchedsCount; 
@property (nonatomic,readonly) unsigned* coarseMatcheds; 
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
-(void)dealloc;
-(unsigned)numberOfRequests;
-(void)setNumberOfRequests:(unsigned)arg1 ;
-(void)setNumberOfResponses:(unsigned)arg1 ;
-(void)setNumMessages:(unsigned)arg1 ;
-(void)addNumOutOfOrder:(unsigned)arg1 ;
-(void)addNumMissed:(unsigned)arg1 ;
-(void)addAliasesMatched:(unsigned)arg1 ;
-(void)addCoarseMatched:(unsigned)arg1 ;
-(unsigned long long)numOutOfOrdersCount;
-(void)clearNumOutOfOrders;
-(unsigned)numOutOfOrderAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)numMissedsCount;
-(void)clearNumMisseds;
-(unsigned)numMissedAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)aliasesMatchedsCount;
-(void)clearAliasesMatcheds;
-(unsigned)aliasesMatchedAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)coarseMatchedsCount;
-(void)clearCoarseMatcheds;
-(unsigned)coarseMatchedAtIndex:(unsigned long long)arg1 ;
-(void)setHasNumberOfRequests:(BOOL)arg1 ;
-(BOOL)hasNumberOfRequests;
-(void)setHasNumberOfResponses:(BOOL)arg1 ;
-(BOOL)hasNumberOfResponses;
-(void)setHasNumMessages:(BOOL)arg1 ;
-(BOOL)hasNumMessages;
-(unsigned*)numOutOfOrders;
-(void)setNumOutOfOrders:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(unsigned*)numMisseds;
-(void)setNumMisseds:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(unsigned*)aliasesMatcheds;
-(void)setAliasesMatcheds:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(unsigned*)coarseMatcheds;
-(void)setCoarseMatcheds:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(unsigned)numberOfResponses;
-(unsigned)numMessages;
@end

