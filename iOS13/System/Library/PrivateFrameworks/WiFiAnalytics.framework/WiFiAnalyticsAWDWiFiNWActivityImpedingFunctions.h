/*
* Generated on Monday, March 1, 2021 at 2:33:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WiFiAnalytics.framework/WiFiAnalytics
*/

#import <WiFiAnalytics/WiFiAnalytics-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface WiFiAnalyticsAWDWiFiNWActivityImpedingFunctions : PBCodable <NSCopying> {

	NSMutableArray* _cTLMIndexs;
	NSMutableArray* _txDutyCyclePcts;
	NSMutableArray* _txPowerBackoffDBs;

}

@property (nonatomic,retain) NSMutableArray * cTLMIndexs;                     //@synthesize cTLMIndexs=_cTLMIndexs - In the implementation block
@property (nonatomic,retain) NSMutableArray * txPowerBackoffDBs;              //@synthesize txPowerBackoffDBs=_txPowerBackoffDBs - In the implementation block
@property (nonatomic,retain) NSMutableArray * txDutyCyclePcts;                //@synthesize txDutyCyclePcts=_txDutyCyclePcts - In the implementation block
+(Class)cTLMIndexType;
+(Class)txPowerBackoffDBType;
+(Class)txDutyCyclePctType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)addCTLMIndex:(id)arg1 ;
-(void)addTxPowerBackoffDB:(id)arg1 ;
-(void)addTxDutyCyclePct:(id)arg1 ;
-(unsigned long long)cTLMIndexsCount;
-(void)clearCTLMIndexs;
-(id)cTLMIndexAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)txPowerBackoffDBsCount;
-(void)clearTxPowerBackoffDBs;
-(id)txPowerBackoffDBAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)txDutyCyclePctsCount;
-(void)clearTxDutyCyclePcts;
-(id)txDutyCyclePctAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)cTLMIndexs;
-(void)setCTLMIndexs:(NSMutableArray *)arg1 ;
-(NSMutableArray *)txPowerBackoffDBs;
-(void)setTxPowerBackoffDBs:(NSMutableArray *)arg1 ;
-(NSMutableArray *)txDutyCyclePcts;
-(void)setTxDutyCyclePcts:(NSMutableArray *)arg1 ;
@end

