/*
* Generated on Thursday, January 14, 2021 at 2:22:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <HomeKit/HomeKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, HMPBCharacteristicReference;

@interface HMPBCharacteristicWriteAction : PBCodable <NSCopying> {

	NSData* _actionUUID;
	HMPBCharacteristicReference* _characteristicReference;
	NSData* _targetValue;

}

@property (nonatomic,readonly) BOOL hasActionUUID; 
@property (nonatomic,retain) NSData * actionUUID;                                                //@synthesize actionUUID=_actionUUID - In the implementation block
@property (nonatomic,readonly) BOOL hasTargetValue; 
@property (nonatomic,retain) NSData * targetValue;                                               //@synthesize targetValue=_targetValue - In the implementation block
@property (nonatomic,readonly) BOOL hasCharacteristicReference; 
@property (nonatomic,retain) HMPBCharacteristicReference * characteristicReference;              //@synthesize characteristicReference=_characteristicReference - In the implementation block
-(id)dictionaryRepresentation;
-(void)setActionUUID:(NSData *)arg1 ;
-(BOOL)hasActionUUID;
-(HMPBCharacteristicReference *)characteristicReference;
-(void)setCharacteristicReference:(HMPBCharacteristicReference *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSData *)targetValue;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(NSData *)actionUUID;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasTargetValue;
-(BOOL)hasCharacteristicReference;
-(void)setTargetValue:(NSData *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

