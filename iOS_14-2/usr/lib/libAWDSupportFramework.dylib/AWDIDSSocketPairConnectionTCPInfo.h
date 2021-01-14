/*
* Generated on Thursday, January 14, 2021 at 2:28:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDIDSSocketPairConnectionTCPInfo : PBCodable <NSCopying> {

	unsigned long long _bandwidth;
	unsigned long long _currentRTT;
	unsigned long long _timestamp;
	unsigned _linkType;
	SCD_Struct_AW1 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;               //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasLinkType; 
@property (assign,nonatomic) unsigned linkType;                          //@synthesize linkType=_linkType - In the implementation block
@property (assign,nonatomic) BOOL hasCurrentRTT; 
@property (assign,nonatomic) unsigned long long currentRTT;              //@synthesize currentRTT=_currentRTT - In the implementation block
@property (assign,nonatomic) BOOL hasBandwidth; 
@property (assign,nonatomic) unsigned long long bandwidth;               //@synthesize bandwidth=_bandwidth - In the implementation block
-(unsigned long long)currentRTT;
-(id)dictionaryRepresentation;
-(void)setLinkType:(unsigned)arg1 ;
-(void)setHasCurrentRTT:(BOOL)arg1 ;
-(unsigned)linkType;
-(unsigned long long)timestamp;
-(unsigned long long)bandwidth;
-(void)setCurrentRTT:(unsigned long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasLinkType;
-(BOOL)hasBandwidth;
-(void)setHasLinkType:(BOOL)arg1 ;
-(id)description;
-(void)setBandwidth:(unsigned long long)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasCurrentRTT;
-(void)setHasBandwidth:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

