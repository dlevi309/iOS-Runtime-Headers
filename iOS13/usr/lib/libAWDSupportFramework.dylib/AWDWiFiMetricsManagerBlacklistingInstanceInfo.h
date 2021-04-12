/*
* Generated on Monday, March 1, 2021 at 2:35:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDWiFiMetricsManagerBlacklistingInstanceInfo : PBCodable <NSCopying> {

	unsigned long long _blacklistingTimestamp;
	unsigned _blacklistingReason;
	unsigned _reservedInfo;
	SCD_Struct_AW4 _has;

}

@property (assign,nonatomic) BOOL hasBlacklistingReason; 
@property (assign,nonatomic) unsigned blacklistingReason;                           //@synthesize blacklistingReason=_blacklistingReason - In the implementation block
@property (assign,nonatomic) BOOL hasBlacklistingTimestamp; 
@property (assign,nonatomic) unsigned long long blacklistingTimestamp;              //@synthesize blacklistingTimestamp=_blacklistingTimestamp - In the implementation block
@property (assign,nonatomic) BOOL hasReservedInfo; 
@property (assign,nonatomic) unsigned reservedInfo;                                 //@synthesize reservedInfo=_reservedInfo - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setBlacklistingReason:(unsigned)arg1 ;
-(void)setHasBlacklistingReason:(BOOL)arg1 ;
-(BOOL)hasBlacklistingReason;
-(void)setBlacklistingTimestamp:(unsigned long long)arg1 ;
-(void)setHasBlacklistingTimestamp:(BOOL)arg1 ;
-(BOOL)hasBlacklistingTimestamp;
-(void)setReservedInfo:(unsigned)arg1 ;
-(void)setHasReservedInfo:(BOOL)arg1 ;
-(BOOL)hasReservedInfo;
-(unsigned)blacklistingReason;
-(unsigned long long)blacklistingTimestamp;
-(unsigned)reservedInfo;
@end

