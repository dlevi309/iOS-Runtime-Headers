/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface HDCodableDevice : PBCodable <NSCopying> {

	double _creationDate;
	NSString* _fDAUDI;
	NSString* _firmwareVersion;
	NSString* _hardwareVersion;
	NSString* _localIdentifier;
	NSString* _manufacturer;
	NSString* _model;
	NSString* _name;
	NSString* _softwareVersion;
	NSData* _uuid;
	SCD_Struct_HD7 _has;

}

@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) NSString * name;                         //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) BOOL hasManufacturer; 
@property (nonatomic,retain) NSString * manufacturer;                 //@synthesize manufacturer=_manufacturer - In the implementation block
@property (nonatomic,readonly) BOOL hasModel; 
@property (nonatomic,retain) NSString * model;                        //@synthesize model=_model - In the implementation block
@property (nonatomic,readonly) BOOL hasHardwareVersion; 
@property (nonatomic,retain) NSString * hardwareVersion;              //@synthesize hardwareVersion=_hardwareVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasFirmwareVersion; 
@property (nonatomic,retain) NSString * firmwareVersion;              //@synthesize firmwareVersion=_firmwareVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasSoftwareVersion; 
@property (nonatomic,retain) NSString * softwareVersion;              //@synthesize softwareVersion=_softwareVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasLocalIdentifier; 
@property (nonatomic,retain) NSString * localIdentifier;              //@synthesize localIdentifier=_localIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasFDAUDI; 
@property (nonatomic,retain) NSString * fDAUDI;                       //@synthesize fDAUDI=_fDAUDI - In the implementation block
@property (nonatomic,readonly) BOOL hasUuid; 
@property (nonatomic,retain) NSData * uuid;                           //@synthesize uuid=_uuid - In the implementation block
@property (assign,nonatomic) BOOL hasCreationDate; 
@property (assign,nonatomic) double creationDate;                     //@synthesize creationDate=_creationDate - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(NSData *)uuid;
-(void)setUuid:(NSData *)arg1 ;
-(NSString *)model;
-(double)creationDate;
-(void)writeTo:(id)arg1 ;
-(void)setModel:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setCreationDate:(double)arg1 ;
-(void)setHasCreationDate:(BOOL)arg1 ;
-(BOOL)hasCreationDate;
-(BOOL)hasName;
-(NSString *)firmwareVersion;
-(NSString *)hardwareVersion;
-(NSString *)localIdentifier;
-(void)setLocalIdentifier:(NSString *)arg1 ;
-(NSString *)manufacturer;
-(void)setManufacturer:(NSString *)arg1 ;
-(BOOL)hasManufacturer;
-(BOOL)hasModel;
-(BOOL)hasUuid;
-(NSString *)softwareVersion;
-(void)setFirmwareVersion:(NSString *)arg1 ;
-(BOOL)hasFirmwareVersion;
-(void)setSoftwareVersion:(NSString *)arg1 ;
-(void)setHardwareVersion:(NSString *)arg1 ;
-(void)setFDAUDI:(NSString *)arg1 ;
-(BOOL)hasHardwareVersion;
-(BOOL)hasSoftwareVersion;
-(BOOL)hasLocalIdentifier;
-(BOOL)hasFDAUDI;
-(NSString *)fDAUDI;
@end

