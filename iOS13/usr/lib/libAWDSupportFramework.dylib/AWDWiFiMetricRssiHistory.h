/*
* Generated on Monday, March 1, 2021 at 2:35:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDWiFiMetricRssiHistory : PBCodable <NSCopying> {

	SCD_Struct_AW16* _bcnFrmsHistorys;
	SCD_Struct_AW16* _bcnPerHistorys;
	SCD_Struct_AW16* _fwTxFrmsHistorys;
	SCD_Struct_AW16* _fwTxPerHistorys;
	SCD_Struct_AW16* _rssiHistorys;
	SCD_Struct_AW16* _txFrmsHistorys;
	SCD_Struct_AW16* _txPerHistorys;
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
-(unsigned long long)rssiHistorysCount;
-(void)clearRssiHistorys;
-(int)rssiHistoryAtIndex:(unsigned long long)arg1 ;
-(void)addRssiHistory:(int)arg1 ;
-(unsigned long long)txPerHistorysCount;
-(void)clearTxPerHistorys;
-(int)txPerHistoryAtIndex:(unsigned long long)arg1 ;
-(void)addTxPerHistory:(int)arg1 ;
-(unsigned long long)txFrmsHistorysCount;
-(void)clearTxFrmsHistorys;
-(int)txFrmsHistoryAtIndex:(unsigned long long)arg1 ;
-(void)addTxFrmsHistory:(int)arg1 ;
-(unsigned long long)fwTxPerHistorysCount;
-(void)clearFwTxPerHistorys;
-(int)fwTxPerHistoryAtIndex:(unsigned long long)arg1 ;
-(void)addFwTxPerHistory:(int)arg1 ;
-(unsigned long long)fwTxFrmsHistorysCount;
-(void)clearFwTxFrmsHistorys;
-(int)fwTxFrmsHistoryAtIndex:(unsigned long long)arg1 ;
-(void)addFwTxFrmsHistory:(int)arg1 ;
-(unsigned long long)bcnPerHistorysCount;
-(void)clearBcnPerHistorys;
-(int)bcnPerHistoryAtIndex:(unsigned long long)arg1 ;
-(void)addBcnPerHistory:(int)arg1 ;
-(unsigned long long)bcnFrmsHistorysCount;
-(void)clearBcnFrmsHistorys;
-(int)bcnFrmsHistoryAtIndex:(unsigned long long)arg1 ;
-(void)addBcnFrmsHistory:(int)arg1 ;
-(int*)rssiHistorys;
-(void)setRssiHistorys:(int*)arg1 count:(unsigned long long)arg2 ;
-(int*)txPerHistorys;
-(void)setTxPerHistorys:(int*)arg1 count:(unsigned long long)arg2 ;
-(int*)txFrmsHistorys;
-(void)setTxFrmsHistorys:(int*)arg1 count:(unsigned long long)arg2 ;
-(int*)fwTxPerHistorys;
-(void)setFwTxPerHistorys:(int*)arg1 count:(unsigned long long)arg2 ;
-(int*)fwTxFrmsHistorys;
-(void)setFwTxFrmsHistorys:(int*)arg1 count:(unsigned long long)arg2 ;
-(int*)bcnPerHistorys;
-(void)setBcnPerHistorys:(int*)arg1 count:(unsigned long long)arg2 ;
-(int*)bcnFrmsHistorys;
-(void)setBcnFrmsHistorys:(int*)arg1 count:(unsigned long long)arg2 ;
-(void)setGatewayARPHistory:(unsigned)arg1 ;
-(void)setHasGatewayARPHistory:(BOOL)arg1 ;
-(BOOL)hasGatewayARPHistory;
-(unsigned)gatewayARPHistory;
@end

