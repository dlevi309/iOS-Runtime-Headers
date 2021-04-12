/*
* Generated on Thursday, January 14, 2021 at 2:29:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AWDWiFiLTECoexBin;

@interface AWDWiFiLTECoexCounters : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	AWDWiFiLTECoexBin* _heavyLTECoexBin;
	AWDWiFiLTECoexBin* _lightLTECoexBin;
	AWDWiFiLTECoexBin* _noLTECoexBin;
	SCD_Struct_AW5 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                     //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasNoLTECoexBin; 
@property (nonatomic,retain) AWDWiFiLTECoexBin * noLTECoexBin;                 //@synthesize noLTECoexBin=_noLTECoexBin - In the implementation block
@property (nonatomic,readonly) BOOL hasLightLTECoexBin; 
@property (nonatomic,retain) AWDWiFiLTECoexBin * lightLTECoexBin;              //@synthesize lightLTECoexBin=_lightLTECoexBin - In the implementation block
@property (nonatomic,readonly) BOOL hasHeavyLTECoexBin; 
@property (nonatomic,retain) AWDWiFiLTECoexBin * heavyLTECoexBin;              //@synthesize heavyLTECoexBin=_heavyLTECoexBin - In the implementation block
-(id)dictionaryRepresentation;
-(BOOL)hasLightLTECoexBin;
-(AWDWiFiLTECoexBin *)lightLTECoexBin;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(AWDWiFiLTECoexBin *)noLTECoexBin;
-(void)setHeavyLTECoexBin:(AWDWiFiLTECoexBin *)arg1 ;
-(id)description;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)hasNoLTECoexBin;
-(void)setLightLTECoexBin:(AWDWiFiLTECoexBin *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setNoLTECoexBin:(AWDWiFiLTECoexBin *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(AWDWiFiLTECoexBin *)heavyLTECoexBin;
-(BOOL)hasHeavyLTECoexBin;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

