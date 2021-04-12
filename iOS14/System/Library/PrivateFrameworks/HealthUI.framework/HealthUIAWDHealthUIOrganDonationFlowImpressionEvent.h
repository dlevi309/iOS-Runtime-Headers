/*
* Generated on Thursday, January 14, 2021 at 2:24:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface HealthUIAWDHealthUIOrganDonationFlowImpressionEvent : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	int _sourceOfFlowImpression;
	SCD_Struct_He3 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasSourceOfFlowImpression; 
@property (assign,nonatomic) int sourceOfFlowImpression;                  //@synthesize sourceOfFlowImpression=_sourceOfFlowImpression - In the implementation block
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
-(int)sourceOfFlowImpression;
-(void)setSourceOfFlowImpression:(int)arg1 ;
-(void)setHasSourceOfFlowImpression:(BOOL)arg1 ;
-(BOOL)hasSourceOfFlowImpression;
-(id)sourceOfFlowImpressionAsString:(int)arg1 ;
-(int)StringAsSourceOfFlowImpression:(id)arg1 ;
@end

