/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSData *)targetValue;
-(void)setTargetValue:(NSData *)arg1 ;
-(NSData *)actionUUID;
-(void)setActionUUID:(NSData *)arg1 ;
-(BOOL)hasActionUUID;
-(HMPBCharacteristicReference *)characteristicReference;
-(void)setCharacteristicReference:(HMPBCharacteristicReference *)arg1 ;
-(BOOL)hasTargetValue;
-(BOOL)hasCharacteristicReference;
@end

