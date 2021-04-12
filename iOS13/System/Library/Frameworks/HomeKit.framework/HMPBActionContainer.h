/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <HomeKit/HomeKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HMPBCharacteristicWriteAction, HMPBMediaPlaybackAction;

@interface HMPBActionContainer : PBCodable <NSCopying> {

	HMPBCharacteristicWriteAction* _characteristicWriteAction;
	HMPBMediaPlaybackAction* _mediaPlaybackAction;
	int _type;
	SCD_Struct_HM1 _has;

}

@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type;                                                               //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL hasCharacteristicWriteAction; 
@property (nonatomic,retain) HMPBCharacteristicWriteAction * characteristicWriteAction;              //@synthesize characteristicWriteAction=_characteristicWriteAction - In the implementation block
@property (nonatomic,readonly) BOOL hasMediaPlaybackAction; 
@property (nonatomic,retain) HMPBMediaPlaybackAction * mediaPlaybackAction;                          //@synthesize mediaPlaybackAction=_mediaPlaybackAction - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)type;
-(void)setType:(int)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)typeAsString:(int)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(void)setMediaPlaybackAction:(HMPBMediaPlaybackAction *)arg1 ;
-(void)setCharacteristicWriteAction:(HMPBCharacteristicWriteAction *)arg1 ;
-(HMPBCharacteristicWriteAction *)characteristicWriteAction;
-(HMPBMediaPlaybackAction *)mediaPlaybackAction;
-(BOOL)hasCharacteristicWriteAction;
-(BOOL)hasMediaPlaybackAction;
@end

