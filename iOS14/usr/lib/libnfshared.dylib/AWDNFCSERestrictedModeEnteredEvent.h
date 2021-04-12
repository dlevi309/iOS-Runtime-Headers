/*
* Generated on Thursday, January 14, 2021 at 2:26:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libnfshared.dylib
*/

#import <libnfshared.dylib/libnfshared.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString;

@interface AWDNFCSERestrictedModeEnteredEvent : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	NSData* _attackLog;
	unsigned _hardwareType;
	NSString* _platformIdentifier;
	NSData* _restrictedModeUUID;
	BOOL _contactless;
	SCD_Struct_AW2 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;               //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasContactless; 
@property (assign,nonatomic) BOOL contactless;                           //@synthesize contactless=_contactless - In the implementation block
@property (nonatomic,readonly) BOOL hasRestrictedModeUUID; 
@property (nonatomic,retain) NSData * restrictedModeUUID;                //@synthesize restrictedModeUUID=_restrictedModeUUID - In the implementation block
@property (nonatomic,readonly) BOOL hasPlatformIdentifier; 
@property (nonatomic,retain) NSString * platformIdentifier;              //@synthesize platformIdentifier=_platformIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasAttackLog; 
@property (nonatomic,retain) NSData * attackLog;                         //@synthesize attackLog=_attackLog - In the implementation block
@property (assign,nonatomic) BOOL hasHardwareType; 
@property (assign,nonatomic) unsigned hardwareType;                      //@synthesize hardwareType=_hardwareType - In the implementation block
-(NSString *)platformIdentifier;
-(id)dictionaryRepresentation;
-(unsigned)hardwareType;
-(void)setHardwareType:(unsigned)arg1 ;
-(unsigned long long)timestamp;
-(void)setHasHardwareType:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setPlatformIdentifier:(NSString *)arg1 ;
-(id)description;
-(BOOL)hasHardwareType;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setRestrictedModeUUID:(NSData *)arg1 ;
-(void)setAttackLog:(NSData *)arg1 ;
-(void)setContactless:(BOOL)arg1 ;
-(void)setHasContactless:(BOOL)arg1 ;
-(BOOL)hasContactless;
-(BOOL)hasRestrictedModeUUID;
-(BOOL)hasPlatformIdentifier;
-(BOOL)hasAttackLog;
-(BOOL)contactless;
-(NSData *)restrictedModeUUID;
-(NSData *)attackLog;
@end

