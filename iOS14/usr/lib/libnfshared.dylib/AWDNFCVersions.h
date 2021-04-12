/*
* Generated on Thursday, January 14, 2021 at 2:26:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libnfshared.dylib
*/

#import <libnfshared.dylib/libnfshared.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDNFCVersions : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _hardwareType;
	unsigned _middlewareVersion;
	unsigned _nfccFWRevision;
	unsigned _nfccFWVersion;
	unsigned _nfccHWVersion;
	unsigned _nfccROMVersion;
	NSString* _platformVersion;
	unsigned _seAvailableIndices;
	unsigned _seDeviceType;
	unsigned _seFWVersion;
	unsigned _seHWVersion;
	unsigned _seMigrationInst;
	unsigned _seMigrationPkgs;
	unsigned _seMigrationState;
	unsigned _seOSMode;
	unsigned _seReferenceCounter;
	unsigned _seRestrictedMode;
	unsigned _seSequenceCounter;
	unsigned _seSignKeyType;
	unsigned _seTotalIndices;
	unsigned _seTransientDeselect;
	unsigned _seTransientPersistent;
	unsigned _seTransientReset;
	unsigned _seosHWVersion;
	unsigned _seosMigrationState;
	unsigned _seosOSMode;
	unsigned _seosOSVersion;
	NSString* _seosPlatformID;
	unsigned _seosSignKeyType;
	unsigned _seosTransientDeselect;
	unsigned _seosTransientPersistent;
	unsigned _seosTransientReset;
	SCD_Struct_AW13 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                  //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasMiddlewareVersion; 
@property (assign,nonatomic) unsigned middlewareVersion;                    //@synthesize middlewareVersion=_middlewareVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasPlatformVersion; 
@property (nonatomic,retain) NSString * platformVersion;                    //@synthesize platformVersion=_platformVersion - In the implementation block
@property (assign,nonatomic) BOOL hasNfccHWVersion; 
@property (assign,nonatomic) unsigned nfccHWVersion;                        //@synthesize nfccHWVersion=_nfccHWVersion - In the implementation block
@property (assign,nonatomic) BOOL hasNfccROMVersion; 
@property (assign,nonatomic) unsigned nfccROMVersion;                       //@synthesize nfccROMVersion=_nfccROMVersion - In the implementation block
@property (assign,nonatomic) BOOL hasNfccFWVersion; 
@property (assign,nonatomic) unsigned nfccFWVersion;                        //@synthesize nfccFWVersion=_nfccFWVersion - In the implementation block
@property (assign,nonatomic) BOOL hasNfccFWRevision; 
@property (assign,nonatomic) unsigned nfccFWRevision;                       //@synthesize nfccFWRevision=_nfccFWRevision - In the implementation block
@property (assign,nonatomic) BOOL hasSeDeviceType; 
@property (assign,nonatomic) unsigned seDeviceType;                         //@synthesize seDeviceType=_seDeviceType - In the implementation block
@property (assign,nonatomic) BOOL hasSeHWVersion; 
@property (assign,nonatomic) unsigned seHWVersion;                          //@synthesize seHWVersion=_seHWVersion - In the implementation block
@property (assign,nonatomic) BOOL hasSeFWVersion; 
@property (assign,nonatomic) unsigned seFWVersion;                          //@synthesize seFWVersion=_seFWVersion - In the implementation block
@property (assign,nonatomic) BOOL hasSeSignKeyType; 
@property (assign,nonatomic) unsigned seSignKeyType;                        //@synthesize seSignKeyType=_seSignKeyType - In the implementation block
@property (assign,nonatomic) BOOL hasSeSequenceCounter; 
@property (assign,nonatomic) unsigned seSequenceCounter;                    //@synthesize seSequenceCounter=_seSequenceCounter - In the implementation block
@property (assign,nonatomic) BOOL hasSeReferenceCounter; 
@property (assign,nonatomic) unsigned seReferenceCounter;                   //@synthesize seReferenceCounter=_seReferenceCounter - In the implementation block
@property (assign,nonatomic) BOOL hasSeOSMode; 
@property (assign,nonatomic) unsigned seOSMode;                             //@synthesize seOSMode=_seOSMode - In the implementation block
@property (assign,nonatomic) BOOL hasSeRestrictedMode; 
@property (assign,nonatomic) unsigned seRestrictedMode;                     //@synthesize seRestrictedMode=_seRestrictedMode - In the implementation block
@property (assign,nonatomic) BOOL hasSeMigrationState; 
@property (assign,nonatomic) unsigned seMigrationState;                     //@synthesize seMigrationState=_seMigrationState - In the implementation block
@property (assign,nonatomic) BOOL hasSeMigrationPkgs; 
@property (assign,nonatomic) unsigned seMigrationPkgs;                      //@synthesize seMigrationPkgs=_seMigrationPkgs - In the implementation block
@property (assign,nonatomic) BOOL hasSeMigrationInst; 
@property (assign,nonatomic) unsigned seMigrationInst;                      //@synthesize seMigrationInst=_seMigrationInst - In the implementation block
@property (nonatomic,readonly) BOOL hasSeosPlatformID; 
@property (nonatomic,retain) NSString * seosPlatformID;                     //@synthesize seosPlatformID=_seosPlatformID - In the implementation block
@property (assign,nonatomic) BOOL hasSeosHWVersion; 
@property (assign,nonatomic) unsigned seosHWVersion;                        //@synthesize seosHWVersion=_seosHWVersion - In the implementation block
@property (assign,nonatomic) BOOL hasSeosOSVersion; 
@property (assign,nonatomic) unsigned seosOSVersion;                        //@synthesize seosOSVersion=_seosOSVersion - In the implementation block
@property (assign,nonatomic) BOOL hasSeosOSMode; 
@property (assign,nonatomic) unsigned seosOSMode;                           //@synthesize seosOSMode=_seosOSMode - In the implementation block
@property (assign,nonatomic) BOOL hasSeosSignKeyType; 
@property (assign,nonatomic) unsigned seosSignKeyType;                      //@synthesize seosSignKeyType=_seosSignKeyType - In the implementation block
@property (assign,nonatomic) BOOL hasSeosMigrationState; 
@property (assign,nonatomic) unsigned seosMigrationState;                   //@synthesize seosMigrationState=_seosMigrationState - In the implementation block
@property (assign,nonatomic) BOOL hasHardwareType; 
@property (assign,nonatomic) unsigned hardwareType;                         //@synthesize hardwareType=_hardwareType - In the implementation block
@property (assign,nonatomic) BOOL hasSeTransientDeselect; 
@property (assign,nonatomic) unsigned seTransientDeselect;                  //@synthesize seTransientDeselect=_seTransientDeselect - In the implementation block
@property (assign,nonatomic) BOOL hasSeTransientReset; 
@property (assign,nonatomic) unsigned seTransientReset;                     //@synthesize seTransientReset=_seTransientReset - In the implementation block
@property (assign,nonatomic) BOOL hasSeTransientPersistent; 
@property (assign,nonatomic) unsigned seTransientPersistent;                //@synthesize seTransientPersistent=_seTransientPersistent - In the implementation block
@property (assign,nonatomic) BOOL hasSeAvailableIndices; 
@property (assign,nonatomic) unsigned seAvailableIndices;                   //@synthesize seAvailableIndices=_seAvailableIndices - In the implementation block
@property (assign,nonatomic) BOOL hasSeTotalIndices; 
@property (assign,nonatomic) unsigned seTotalIndices;                       //@synthesize seTotalIndices=_seTotalIndices - In the implementation block
@property (assign,nonatomic) BOOL hasSeosTransientDeselect; 
@property (assign,nonatomic) unsigned seosTransientDeselect;                //@synthesize seosTransientDeselect=_seosTransientDeselect - In the implementation block
@property (assign,nonatomic) BOOL hasSeosTransientReset; 
@property (assign,nonatomic) unsigned seosTransientReset;                   //@synthesize seosTransientReset=_seosTransientReset - In the implementation block
@property (assign,nonatomic) BOOL hasSeosTransientPersistent; 
@property (assign,nonatomic) unsigned seosTransientPersistent;              //@synthesize seosTransientPersistent=_seosTransientPersistent - In the implementation block
-(unsigned)seHWVersion;
-(BOOL)hasSeMigrationInst;
-(unsigned)seosOSMode;
-(id)dictionaryRepresentation;
-(unsigned)seDeviceType;
-(BOOL)hasSeosTransientDeselect;
-(BOOL)hasSeosTransientReset;
-(BOOL)hasSeHWVersion;
-(void)setSeHWVersion:(unsigned)arg1 ;
-(void)setHasNfccROMVersion:(BOOL)arg1 ;
-(void)setSeosTransientReset:(unsigned)arg1 ;
-(unsigned)seosHWVersion;
-(unsigned)seMigrationState;
-(BOOL)hasSeosOSVersion;
-(unsigned)hardwareType;
-(void)setHasSeosMigrationState:(BOOL)arg1 ;
-(void)setHardwareType:(unsigned)arg1 ;
-(unsigned)seTotalIndices;
-(unsigned)seosTransientDeselect;
-(NSString *)platformVersion;
-(BOOL)hasSeAvailableIndices;
-(void)setHasSeTransientReset:(BOOL)arg1 ;
-(void)setHasSeMigrationInst:(BOOL)arg1 ;
-(void)setHasSeosTransientDeselect:(BOOL)arg1 ;
-(void)setHasSeHWVersion:(BOOL)arg1 ;
-(unsigned long long)timestamp;
-(void)setHasHardwareType:(BOOL)arg1 ;
-(BOOL)hasMiddlewareVersion;
-(void)setSeosTransientPersistent:(unsigned)arg1 ;
-(BOOL)hasPlatformVersion;
-(unsigned)seMigrationInst;
-(void)mergeFrom:(id)arg1 ;
-(unsigned)middlewareVersion;
-(void)setHasSeReferenceCounter:(BOOL)arg1 ;
-(unsigned)seAvailableIndices;
-(BOOL)hasSeosTransientPersistent;
-(void)setSeosTransientDeselect:(unsigned)arg1 ;
-(unsigned)seTransientDeselect;
-(void)setSeTransientDeselect:(unsigned)arg1 ;
-(void)setSeosOSVersion:(unsigned)arg1 ;
-(BOOL)hasSeosPlatformID;
-(unsigned)seosMigrationState;
-(NSString *)seosPlatformID;
-(void)setHasNfccHWVersion:(BOOL)arg1 ;
-(unsigned)nfccROMVersion;
-(BOOL)hasSeReferenceCounter;
-(unsigned)seosOSVersion;
-(void)setNfccFWRevision:(unsigned)arg1 ;
-(unsigned)seTransientPersistent;
-(id)description;
-(void)setSeMigrationPkgs:(unsigned)arg1 ;
-(BOOL)hasSeTransientPersistent;
-(void)setHasSeSequenceCounter:(BOOL)arg1 ;
-(unsigned)seReferenceCounter;
-(BOOL)hasSeSignKeyType;
-(void)setHasSeosOSVersion:(BOOL)arg1 ;
-(void)setSeDeviceType:(unsigned)arg1 ;
-(void)setHasNfccFWRevision:(BOOL)arg1 ;
-(unsigned)nfccFWVersion;
-(unsigned)seMigrationPkgs;
-(BOOL)hasSeMigrationState;
-(unsigned)seOSMode;
-(unsigned)seSequenceCounter;
-(void)setHasSeRestrictedMode:(BOOL)arg1 ;
-(void)setHasSeTransientPersistent:(BOOL)arg1 ;
-(void)setHasSeTransientDeselect:(BOOL)arg1 ;
-(BOOL)hasHardwareType;
-(void)setSeOSMode:(unsigned)arg1 ;
-(void)setNfccHWVersion:(unsigned)arg1 ;
-(void)setHasSeMigrationState:(BOOL)arg1 ;
-(BOOL)hasSeosMigrationState;
-(void)setHasSeMigrationPkgs:(BOOL)arg1 ;
-(BOOL)hasSeosSignKeyType;
-(void)setSeFWVersion:(unsigned)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setHasSeosTransientPersistent:(BOOL)arg1 ;
-(void)setNfccROMVersion:(unsigned)arg1 ;
-(void)setHasSeosSignKeyType:(BOOL)arg1 ;
-(unsigned long long)hash;
-(void)setHasSeosTransientReset:(BOOL)arg1 ;
-(unsigned)seosTransientReset;
-(unsigned)seFWVersion;
-(BOOL)hasSeosHWVersion;
-(BOOL)hasTimestamp;
-(void)setHasNfccFWVersion:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned)nfccHWVersion;
-(void)setHasSeTotalIndices:(BOOL)arg1 ;
-(unsigned)seosSignKeyType;
-(unsigned)seTransientReset;
-(void)setSeosPlatformID:(NSString *)arg1 ;
-(void)setSeAvailableIndices:(unsigned)arg1 ;
-(BOOL)hasSeRestrictedMode;
-(BOOL)hasSeosOSMode;
-(void)setSeMigrationInst:(unsigned)arg1 ;
-(void)setHasSeosHWVersion:(BOOL)arg1 ;
-(void)setHasSeOSMode:(BOOL)arg1 ;
-(void)setMiddlewareVersion:(unsigned)arg1 ;
-(void)setSeosHWVersion:(unsigned)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setSeTotalIndices:(unsigned)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasSeMigrationPkgs;
-(BOOL)hasSeDeviceType;
-(void)setSeMigrationState:(unsigned)arg1 ;
-(void)setSeSignKeyType:(unsigned)arg1 ;
-(BOOL)hasSeOSMode;
-(unsigned)seosTransientPersistent;
-(BOOL)hasSeTransientDeselect;
-(void)setSeTransientPersistent:(unsigned)arg1 ;
-(BOOL)hasNfccROMVersion;
-(BOOL)hasNfccHWVersion;
-(BOOL)hasSeFWVersion;
-(void)setPlatformVersion:(NSString *)arg1 ;
-(void)setSeosMigrationState:(unsigned)arg1 ;
-(BOOL)hasSeTransientReset;
-(void)setNfccFWVersion:(unsigned)arg1 ;
-(void)setSeosOSMode:(unsigned)arg1 ;
-(void)setHasSeDeviceType:(BOOL)arg1 ;
-(void)setHasSeFWVersion:(BOOL)arg1 ;
-(void)setSeRestrictedMode:(unsigned)arg1 ;
-(unsigned)nfccFWRevision;
-(void)setHasMiddlewareVersion:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSeSequenceCounter:(unsigned)arg1 ;
-(void)setHasSeSignKeyType:(BOOL)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(unsigned)seRestrictedMode;
-(void)setHasSeAvailableIndices:(BOOL)arg1 ;
-(BOOL)hasNfccFWRevision;
-(void)setSeTransientReset:(unsigned)arg1 ;
-(BOOL)hasSeSequenceCounter;
-(void)setSeReferenceCounter:(unsigned)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasSeTotalIndices;
-(BOOL)hasNfccFWVersion;
-(void)setHasSeosOSMode:(BOOL)arg1 ;
-(unsigned)seSignKeyType;
-(void)setSeosSignKeyType:(unsigned)arg1 ;
@end

