/*
* Generated on Thursday, January 14, 2021 at 2:22:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <HomeKit/HomeKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HMPBCharacteristicWriteAction, HMPBMediaPlaybackAction, HMPBNaturalLightingAction;

@interface HMPBActionContainer : PBCodable <NSCopying> {

	HMPBCharacteristicWriteAction* _characteristicWriteAction;
	HMPBMediaPlaybackAction* _mediaPlaybackAction;
	HMPBNaturalLightingAction* _naturalLightingAction;
	int _type;
	SCD_Struct_HM1 _has;

}

@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type;                                                               //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL hasCharacteristicWriteAction; 
@property (nonatomic,retain) HMPBCharacteristicWriteAction * characteristicWriteAction;              //@synthesize characteristicWriteAction=_characteristicWriteAction - In the implementation block
@property (nonatomic,readonly) BOOL hasMediaPlaybackAction; 
@property (nonatomic,retain) HMPBMediaPlaybackAction * mediaPlaybackAction;                          //@synthesize mediaPlaybackAction=_mediaPlaybackAction - In the implementation block
@property (nonatomic,readonly) BOOL hasNaturalLightingAction; 
@property (nonatomic,retain) HMPBNaturalLightingAction * naturalLightingAction;                      //@synthesize naturalLightingAction=_naturalLightingAction - In the implementation block
-(id)dictionaryRepresentation;
-(void)setMediaPlaybackAction:(HMPBMediaPlaybackAction *)arg1 ;
-(id)typeAsString:(int)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(void)setCharacteristicWriteAction:(HMPBCharacteristicWriteAction *)arg1 ;
-(BOOL)hasType;
-(void)mergeFrom:(id)arg1 ;
-(void)setType:(int)arg1 ;
-(void)setNaturalLightingAction:(HMPBNaturalLightingAction *)arg1 ;
-(id)description;
-(int)type;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(HMPBCharacteristicWriteAction *)characteristicWriteAction;
-(HMPBMediaPlaybackAction *)mediaPlaybackAction;
-(HMPBNaturalLightingAction *)naturalLightingAction;
-(BOOL)hasCharacteristicWriteAction;
-(BOOL)hasMediaPlaybackAction;
-(BOOL)hasNaturalLightingAction;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

