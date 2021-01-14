/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OctagonTrust.framework/OctagonTrust
*/

#import <OctagonTrust/OctagonTrust-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface OTEscrowRecordMetadataClientMetadata : PBCodable <NSCopying> {

	unsigned long long _devicePlatform;
	unsigned long long _secureBackupMetadataTimestamp;
	unsigned long long _secureBackupNumericPassphraseLength;
	unsigned long long _secureBackupUsesComplexPassphrase;
	unsigned long long _secureBackupUsesNumericPassphrase;
	NSString* _deviceColor;
	NSString* _deviceEnclosureColor;
	NSString* _deviceMid;
	NSString* _deviceModel;
	NSString* _deviceModelClass;
	NSString* _deviceModelVersion;
	NSString* _deviceName;
	SCD_Struct_OT2 _has;

}

@property (assign,nonatomic) BOOL hasSecureBackupMetadataTimestamp; 
@property (assign,nonatomic) unsigned long long secureBackupMetadataTimestamp;                    //@synthesize secureBackupMetadataTimestamp=_secureBackupMetadataTimestamp - In the implementation block
@property (assign,nonatomic) BOOL hasSecureBackupNumericPassphraseLength; 
@property (assign,nonatomic) unsigned long long secureBackupNumericPassphraseLength;              //@synthesize secureBackupNumericPassphraseLength=_secureBackupNumericPassphraseLength - In the implementation block
@property (assign,nonatomic) BOOL hasSecureBackupUsesComplexPassphrase; 
@property (assign,nonatomic) unsigned long long secureBackupUsesComplexPassphrase;                //@synthesize secureBackupUsesComplexPassphrase=_secureBackupUsesComplexPassphrase - In the implementation block
@property (assign,nonatomic) BOOL hasSecureBackupUsesNumericPassphrase; 
@property (assign,nonatomic) unsigned long long secureBackupUsesNumericPassphrase;                //@synthesize secureBackupUsesNumericPassphrase=_secureBackupUsesNumericPassphrase - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceColor; 
@property (nonatomic,retain) NSString * deviceColor;                                              //@synthesize deviceColor=_deviceColor - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceEnclosureColor; 
@property (nonatomic,retain) NSString * deviceEnclosureColor;                                     //@synthesize deviceEnclosureColor=_deviceEnclosureColor - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceMid; 
@property (nonatomic,retain) NSString * deviceMid;                                                //@synthesize deviceMid=_deviceMid - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceModel; 
@property (nonatomic,retain) NSString * deviceModel;                                              //@synthesize deviceModel=_deviceModel - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceModelClass; 
@property (nonatomic,retain) NSString * deviceModelClass;                                         //@synthesize deviceModelClass=_deviceModelClass - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceModelVersion; 
@property (nonatomic,retain) NSString * deviceModelVersion;                                       //@synthesize deviceModelVersion=_deviceModelVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceName; 
@property (nonatomic,retain) NSString * deviceName;                                               //@synthesize deviceName=_deviceName - In the implementation block
@property (assign,nonatomic) BOOL hasDevicePlatform; 
@property (assign,nonatomic) unsigned long long devicePlatform;                                   //@synthesize devicePlatform=_devicePlatform - In the implementation block
-(void)setDevicePlatform:(unsigned long long)arg1 ;
-(id)dictionaryRepresentation;
-(void)setDeviceModel:(NSString *)arg1 ;
-(BOOL)hasDevicePlatform;
-(unsigned long long)devicePlatform;
-(NSString *)deviceName;
-(NSString *)deviceModel;
-(BOOL)hasDeviceModel;
-(NSString *)deviceEnclosureColor;
-(BOOL)hasDeviceName;
-(void)mergeFrom:(id)arg1 ;
-(void)setDeviceEnclosureColor:(NSString *)arg1 ;
-(void)setDeviceColor:(NSString *)arg1 ;
-(id)description;
-(BOOL)hasDeviceMid;
-(NSString *)deviceColor;
-(void)setSecureBackupMetadataTimestamp:(unsigned long long)arg1 ;
-(BOOL)hasDeviceColor;
-(void)setHasSecureBackupMetadataTimestamp:(BOOL)arg1 ;
-(BOOL)hasSecureBackupMetadataTimestamp;
-(void)setSecureBackupNumericPassphraseLength:(unsigned long long)arg1 ;
-(void)setHasSecureBackupNumericPassphraseLength:(BOOL)arg1 ;
-(BOOL)hasSecureBackupNumericPassphraseLength;
-(void)setSecureBackupUsesComplexPassphrase:(unsigned long long)arg1 ;
-(void)setHasSecureBackupUsesComplexPassphrase:(BOOL)arg1 ;
-(BOOL)hasSecureBackupUsesComplexPassphrase;
-(void)setSecureBackupUsesNumericPassphrase:(unsigned long long)arg1 ;
-(void)setHasSecureBackupUsesNumericPassphrase:(BOOL)arg1 ;
-(BOOL)hasSecureBackupUsesNumericPassphrase;
-(BOOL)hasDeviceEnclosureColor;
-(NSString *)deviceMid;
-(BOOL)hasDeviceModelClass;
-(BOOL)hasDeviceModelVersion;
-(void)setHasDevicePlatform:(BOOL)arg1 ;
-(unsigned long long)secureBackupMetadataTimestamp;
-(unsigned long long)secureBackupNumericPassphraseLength;
-(unsigned long long)secureBackupUsesComplexPassphrase;
-(unsigned long long)secureBackupUsesNumericPassphrase;
-(void)setDeviceMid:(NSString *)arg1 ;
-(NSString *)deviceModelClass;
-(void)setDeviceModelClass:(NSString *)arg1 ;
-(NSString *)deviceModelVersion;
-(void)setDeviceModelVersion:(NSString *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setDeviceName:(NSString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

