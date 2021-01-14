/*
* Generated on Thursday, January 14, 2021 at 2:26:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiAnalytics.framework/WiFiAnalytics
*/

#import <WiFiAnalytics/WiFiAnalytics-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface WiFiAnalyticsAWDWiFiNWActivityRateAndAggregation : PBCodable <NSCopying> {

	SCD_Struct_Wi8* _ampduAGGs;
	SCD_Struct_Wi8* _rxMCSSuccess;
	SCD_Struct_Wi8* _rxVHTSuccess;
	SCD_Struct_Wi8* _txMCSSuccess;
	SCD_Struct_Wi8* _txVHTSuccess;

}

@property (nonatomic,readonly) unsigned long long rxVHTSuccessCount; 
@property (nonatomic,readonly) unsigned long long* rxVHTSuccess; 
@property (nonatomic,readonly) unsigned long long txVHTSuccessCount; 
@property (nonatomic,readonly) unsigned long long* txVHTSuccess; 
@property (nonatomic,readonly) unsigned long long rxMCSSuccessCount; 
@property (nonatomic,readonly) unsigned long long* rxMCSSuccess; 
@property (nonatomic,readonly) unsigned long long txMCSSuccessCount; 
@property (nonatomic,readonly) unsigned long long* txMCSSuccess; 
@property (nonatomic,readonly) unsigned long long ampduAGGsCount; 
@property (nonatomic,readonly) unsigned long long* ampduAGGs; 
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(unsigned long long)rxVHTSuccessCount;
-(void)clearRxVHTSuccess;
-(unsigned long long)rxVHTSuccessAtIndex:(unsigned long long)arg1 ;
-(void)addRxVHTSuccess:(unsigned long long)arg1 ;
-(unsigned long long)txVHTSuccessCount;
-(void)clearTxVHTSuccess;
-(unsigned long long)txVHTSuccessAtIndex:(unsigned long long)arg1 ;
-(void)addTxVHTSuccess:(unsigned long long)arg1 ;
-(unsigned long long)rxMCSSuccessCount;
-(void)clearRxMCSSuccess;
-(unsigned long long)rxMCSSuccessAtIndex:(unsigned long long)arg1 ;
-(void)addRxMCSSuccess:(unsigned long long)arg1 ;
-(unsigned long long)txMCSSuccessCount;
-(void)clearTxMCSSuccess;
-(unsigned long long)txMCSSuccessAtIndex:(unsigned long long)arg1 ;
-(void)addTxMCSSuccess:(unsigned long long)arg1 ;
-(unsigned long long)ampduAGGsCount;
-(void)clearAmpduAGGs;
-(unsigned long long)ampduAGGAtIndex:(unsigned long long)arg1 ;
-(void)addAmpduAGG:(unsigned long long)arg1 ;
-(unsigned long long*)rxVHTSuccess;
-(void)setRxVHTSuccess:(unsigned long long*)arg1 count:(unsigned long long)arg2 ;
-(unsigned long long*)txVHTSuccess;
-(void)setTxVHTSuccess:(unsigned long long*)arg1 count:(unsigned long long)arg2 ;
-(unsigned long long*)rxMCSSuccess;
-(void)setRxMCSSuccess:(unsigned long long*)arg1 count:(unsigned long long)arg2 ;
-(unsigned long long*)txMCSSuccess;
-(void)setTxMCSSuccess:(unsigned long long*)arg1 count:(unsigned long long)arg2 ;
-(unsigned long long*)ampduAGGs;
-(void)setAmpduAGGs:(unsigned long long*)arg1 count:(unsigned long long)arg2 ;
@end

