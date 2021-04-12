/*
* Generated on Thursday, January 14, 2021 at 2:29:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDWiFiMetricRssiHistory : PBCodable <NSCopying> {

	SCD_Struct_AW15* _bcnFrmsHistorys;
	SCD_Struct_AW15* _bcnPerHistorys;
	SCD_Struct_AW15* _fwTxFrmsHistorys;
	SCD_Struct_AW15* _fwTxPerHistorys;
	SCD_Struct_AW15* _rssiHistorys;
	SCD_Struct_AW15* _txFrmsHistorys;
	SCD_Struct_AW15* _txPerHistorys;
	unsigned long long _timestamp;
	unsigned _gatewayARPHistory;
	SCD_Struct_AW3 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                            //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) unsigned long long rssiHistorysCount; 
@property (nonatomic,readonly) int* rssiHistorys; 
@property (nonatomic,readonly) unsigned long long txPerHistorysCount; 
@property (nonatomic,readonly) int* txPerHistorys; 
@property (nonatomic,readonly) unsigned long long txFrmsHistorysCount; 
@property (nonatomic,readonly) int* txFrmsHistorys; 
@property (nonatomic,readonly) unsigned long long fwTxPerHistorysCount; 
@property (nonatomic,readonly) int* fwTxPerHistorys; 
@property (nonatomic,readonly) unsigned long long fwTxFrmsHistorysCount; 
@property (nonatomic,readonly) int* fwTxFrmsHistorys; 
@property (nonatomic,readonly) unsigned long long bcnPerHistorysCount; 
@property (nonatomic,readonly) int* bcnPerHistorys; 
@property (nonatomic,readonly) unsigned long long bcnFrmsHistorysCount; 
@property (nonatomic,readonly) int* bcnFrmsHistorys; 
@property (assign,nonatomic) BOOL hasGatewayARPHistory; 
@property (assign,nonatomic) unsigned gatewayARPHistory;                              //@synthesize gatewayARPHistory=_gatewayARPHistory - In the implementation block
-(id)dictionaryRepresentation;
-(int*)txPerHistorys;
-(void)clearBcnFrmsHistorys;
-(void)setFwTxPerHistorys:(int*)arg1 count:(unsigned long long)arg2 ;
-(int)rssiHistoryAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)fwTxFrmsHistorysCount;
-(void)clearRssiHistorys;
-(void)setHasGatewayARPHistory:(BOOL)arg1 ;
-(unsigned long long)timestamp;
-(void)setGatewayARPHistory:(unsigned)arg1 ;
-(void)setTxFrmsHistorys:(int*)arg1 count:(unsigned long long)arg2 ;
-(void)setBcnPerHistorys:(int*)arg1 count:(unsigned long long)arg2 ;
-(void)clearFwTxPerHistorys;
-(int*)bcnFrmsHistorys;
-(void)addFwTxFrmsHistory:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(int)txFrmsHistoryAtIndex:(unsigned long long)arg1 ;
-(int*)fwTxFrmsHistorys;
-(int*)bcnPerHistorys;
-(unsigned long long)txPerHistorysCount;
-(void)addRssiHistory:(int)arg1 ;
-(BOOL)hasGatewayARPHistory;
-(void)setFwTxFrmsHistorys:(int*)arg1 count:(unsigned long long)arg2 ;
-(void)addBcnFrmsHistory:(int)arg1 ;
-(id)description;
-(void)setRssiHistorys:(int*)arg1 count:(unsigned long long)arg2 ;
-(void)setTxPerHistorys:(int*)arg1 count:(unsigned long long)arg2 ;
-(void)addBcnPerHistory:(int)arg1 ;
-(unsigned)gatewayARPHistory;
-(void)addTxFrmsHistory:(int)arg1 ;
-(int)fwTxFrmsHistoryAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)fwTxPerHistorysCount;
-(unsigned long long)bcnPerHistorysCount;
-(unsigned long long)bcnFrmsHistorysCount;
-(int)bcnPerHistoryAtIndex:(unsigned long long)arg1 ;
-(void)clearBcnPerHistorys;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(void)setBcnFrmsHistorys:(int*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)clearTxFrmsHistorys;
-(void)clearTxPerHistorys;
-(int)fwTxPerHistoryAtIndex:(unsigned long long)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(int)bcnFrmsHistoryAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)txFrmsHistorysCount;
-(void)clearFwTxFrmsHistorys;
-(int*)txFrmsHistorys;
-(unsigned long long)rssiHistorysCount;
-(void)addFwTxPerHistory:(int)arg1 ;
-(int*)fwTxPerHistorys;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(int*)rssiHistorys;
-(void)addTxPerHistory:(int)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(int)txPerHistoryAtIndex:(unsigned long long)arg1 ;
@end

