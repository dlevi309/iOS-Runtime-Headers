/*
* Generated on Monday, March 1, 2021 at 2:35:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
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
-(void)setNoLTECoexBin:(AWDWiFiLTECoexBin *)arg1 ;
-(void)setLightLTECoexBin:(AWDWiFiLTECoexBin *)arg1 ;
-(void)setHeavyLTECoexBin:(AWDWiFiLTECoexBin *)arg1 ;
-(BOOL)hasNoLTECoexBin;
-(BOOL)hasLightLTECoexBin;
-(BOOL)hasHeavyLTECoexBin;
-(AWDWiFiLTECoexBin *)noLTECoexBin;
-(AWDWiFiLTECoexBin *)lightLTECoexBin;
-(AWDWiFiLTECoexBin *)heavyLTECoexBin;
@end

