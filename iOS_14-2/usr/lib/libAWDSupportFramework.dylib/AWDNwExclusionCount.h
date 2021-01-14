/*
* Generated on Thursday, January 14, 2021 at 2:29:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDNwExclusionCount : PBCodable <NSCopying> {

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
-(id)dictionaryRepresentation;
-(void)setRssi:(int)arg1 ;
-(void)setHasRssi:(BOOL)arg1 ;
-(BOOL)hasRssi;
-(int)rssi;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned)reasonCode;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setReasonCode:(unsigned)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setUsageRank:(unsigned)arg1 ;
-(unsigned)usageRank;
-(void)setHasReasonCode:(BOOL)arg1 ;
-(BOOL)hasReasonCode;
-(void)setHasUsageRank:(BOOL)arg1 ;
-(BOOL)hasUsageRank;
@end

