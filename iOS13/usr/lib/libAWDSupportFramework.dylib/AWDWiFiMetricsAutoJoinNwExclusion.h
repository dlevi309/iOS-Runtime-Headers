/*
* Generated on Monday, March 1, 2021 at 2:35:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDWiFiMetricsAutoJoinNwExclusion : PBCodable <NSCopying> {

	unsigned _reasonCode;
	int _rssi;
	unsigned _usageRank;
	SCD_Struct_AW4 _has;

}

@property (assign,nonatomic) BOOL hasReasonCode; 
@property (assign,nonatomic) unsigned reasonCode;              //@synthesize reasonCode=_reasonCode - In the implementation block
@property (assign,nonatomic) BOOL hasRssi; 
@property (assign,nonatomic) int rssi;                         //@synthesize rssi=_rssi - In the implementation block
@property (assign,nonatomic) BOOL hasUsageRank; 
@property (assign,nonatomic) unsigned usageRank;               //@synthesize usageRank=_usageRank - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int)rssi;
-(void)setRssi:(int)arg1 ;
-(void)setHasRssi:(BOOL)arg1 ;
-(BOOL)hasRssi;
-(unsigned)reasonCode;
-(void)setReasonCode:(unsigned)arg1 ;
-(void)setHasReasonCode:(BOOL)arg1 ;
-(BOOL)hasReasonCode;
-(void)setUsageRank:(unsigned)arg1 ;
-(void)setHasUsageRank:(BOOL)arg1 ;
-(BOOL)hasUsageRank;
-(unsigned)usageRank;
@end

