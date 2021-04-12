/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface HealthUIAWDHealthUIOrganDonationFlowImpressionEvent : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	int _sourceOfFlowImpression;
	SCD_Struct_He8 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasSourceOfFlowImpression; 
@property (assign,nonatomic) int sourceOfFlowImpression;                  //@synthesize sourceOfFlowImpression=_sourceOfFlowImpression - In the implementation block
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
-(void)setSourceOfFlowImpression:(int)arg1 ;
-(int)sourceOfFlowImpression;
-(void)setHasSourceOfFlowImpression:(BOOL)arg1 ;
-(BOOL)hasSourceOfFlowImpression;
-(id)sourceOfFlowImpressionAsString:(int)arg1 ;
-(int)StringAsSourceOfFlowImpression:(id)arg1 ;
@end

