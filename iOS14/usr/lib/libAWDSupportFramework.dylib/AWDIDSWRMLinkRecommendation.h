/*
* Generated on Thursday, January 14, 2021 at 2:28:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDIDSWRMLinkRecommendation : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _infraWiFiState;
	unsigned _magnetState;
	unsigned _primaryLinkType;
	unsigned _recommendedLinkType;
	SCD_Struct_AW2 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasRecommendedLinkType; 
@property (assign,nonatomic) unsigned recommendedLinkType;              //@synthesize recommendedLinkType=_recommendedLinkType - In the implementation block
@property (assign,nonatomic) BOOL hasPrimaryLinkType; 
@property (assign,nonatomic) unsigned primaryLinkType;                  //@synthesize primaryLinkType=_primaryLinkType - In the implementation block
@property (assign,nonatomic) BOOL hasMagnetState; 
@property (assign,nonatomic) unsigned magnetState;                      //@synthesize magnetState=_magnetState - In the implementation block
@property (assign,nonatomic) BOOL hasInfraWiFiState; 
@property (assign,nonatomic) unsigned infraWiFiState;                   //@synthesize infraWiFiState=_infraWiFiState - In the implementation block
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned)recommendedLinkType;
-(unsigned)primaryLinkType;
-(unsigned)magnetState;
-(unsigned)infraWiFiState;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setRecommendedLinkType:(unsigned)arg1 ;
-(void)setHasRecommendedLinkType:(BOOL)arg1 ;
-(BOOL)hasRecommendedLinkType;
-(void)setPrimaryLinkType:(unsigned)arg1 ;
-(void)setHasPrimaryLinkType:(BOOL)arg1 ;
-(BOOL)hasPrimaryLinkType;
-(void)setMagnetState:(unsigned)arg1 ;
-(void)setHasMagnetState:(BOOL)arg1 ;
-(BOOL)hasMagnetState;
-(void)setInfraWiFiState:(unsigned)arg1 ;
-(void)setHasInfraWiFiState:(BOOL)arg1 ;
-(BOOL)hasInfraWiFiState;
@end

