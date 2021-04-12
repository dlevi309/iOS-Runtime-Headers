/*
* Generated on Monday, March 1, 2021 at 2:32:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	SCD_Struct_AW1 _has;

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
-(unsigned)hardwareType;
-(void)setHardwareType:(unsigned)arg1 ;
-(NSString *)platformIdentifier;
-(void)setPlatformIdentifier:(NSString *)arg1 ;
-(void)setRestrictedModeUUID:(NSData *)arg1 ;
-(void)setAttackLog:(NSData *)arg1 ;
-(void)setContactless:(BOOL)arg1 ;
-(void)setHasContactless:(BOOL)arg1 ;
-(BOOL)hasContactless;
-(BOOL)hasRestrictedModeUUID;
-(BOOL)hasPlatformIdentifier;
-(BOOL)hasAttackLog;
-(void)setHasHardwareType:(BOOL)arg1 ;
-(BOOL)hasHardwareType;
-(BOOL)contactless;
-(NSData *)restrictedModeUUID;
-(NSData *)attackLog;
@end

