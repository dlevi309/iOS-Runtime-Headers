/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <HomeKit/HomeKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface HMPBNaturalLightingAction : PBCodable <NSCopying> {

	NSData* _lightProfileUUID;
	NSData* _uuid;
	BOOL _naturalLightingEnabled;
	SCD_Struct_HM1 _has;

}

@property (nonatomic,readonly) BOOL hasUuid; 
@property (nonatomic,retain) NSData * uuid;                               //@synthesize uuid=_uuid - In the implementation block
@property (assign,nonatomic) BOOL hasNaturalLightingEnabled; 
@property (assign,nonatomic) BOOL naturalLightingEnabled;                 //@synthesize naturalLightingEnabled=_naturalLightingEnabled - In the implementation block
@property (nonatomic,readonly) BOOL hasLightProfileUUID; 
@property (nonatomic,retain) NSData * lightProfileUUID;                   //@synthesize lightProfileUUID=_lightProfileUUID - In the implementation block
-(id)dictionaryRepresentation;
-(NSData *)uuid;
-(BOOL)hasUuid;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasLightProfileUUID;
-(void)writeTo:(id)arg1 ;
-(void)setLightProfileUUID:(NSData *)arg1 ;
-(void)setNaturalLightingEnabled:(BOOL)arg1 ;
-(NSData *)lightProfileUUID;
-(void)setHasNaturalLightingEnabled:(BOOL)arg1 ;
-(BOOL)hasNaturalLightingEnabled;
-(BOOL)naturalLightingEnabled;
-(void)setUuid:(NSData *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

