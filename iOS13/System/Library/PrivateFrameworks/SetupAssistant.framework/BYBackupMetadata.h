/*
* Generated on Monday, March 1, 2021 at 2:31:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
*/

#import <SetupAssistant/SetupAssistant-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface BYBackupMetadata : PBCodable <NSCopying> {

	long long _userInterfaceStyleMode;
	unsigned _appAnalyticsOptIn;
	unsigned _deviceAnalyticsOptIn;
	unsigned _homeButtonHapticKind;
	NSData* _nanoRegistryData;
	unsigned _version;
	NSData* _walletData;
	BOOL _autoUpdateEnabled;
	BOOL _didSeeTrueTonePane;
	BOOL _findMyiPhoneOptIn;
	BOOL _locationServicesOptIn;
	BOOL _screenTimeEnabled;
	BOOL _siriOptIn;
	SCD_Struct_BY3 _has;

}

@property (assign,nonatomic) unsigned version;                              //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) BOOL hasNanoRegistryData; 
@property (nonatomic,retain) NSData * nanoRegistryData;                     //@synthesize nanoRegistryData=_nanoRegistryData - In the implementation block
@property (assign,nonatomic) BOOL hasHomeButtonHapticKind; 
@property (assign,nonatomic) unsigned homeButtonHapticKind;                 //@synthesize homeButtonHapticKind=_homeButtonHapticKind - In the implementation block
@property (assign,nonatomic) BOOL hasDeviceAnalyticsOptIn; 
@property (assign,nonatomic) unsigned deviceAnalyticsOptIn;                 //@synthesize deviceAnalyticsOptIn=_deviceAnalyticsOptIn - In the implementation block
@property (assign,nonatomic) BOOL hasAppAnalyticsOptIn; 
@property (assign,nonatomic) unsigned appAnalyticsOptIn;                    //@synthesize appAnalyticsOptIn=_appAnalyticsOptIn - In the implementation block
@property (assign,nonatomic) BOOL hasLocationServicesOptIn; 
@property (assign,nonatomic) BOOL locationServicesOptIn;                    //@synthesize locationServicesOptIn=_locationServicesOptIn - In the implementation block
@property (assign,nonatomic) BOOL hasFindMyiPhoneOptIn; 
@property (assign,nonatomic) BOOL findMyiPhoneOptIn;                        //@synthesize findMyiPhoneOptIn=_findMyiPhoneOptIn - In the implementation block
@property (assign,nonatomic) BOOL hasSiriOptIn; 
@property (assign,nonatomic) BOOL siriOptIn;                                //@synthesize siriOptIn=_siriOptIn - In the implementation block
@property (assign,nonatomic) BOOL hasScreenTimeEnabled; 
@property (assign,nonatomic) BOOL screenTimeEnabled;                        //@synthesize screenTimeEnabled=_screenTimeEnabled - In the implementation block
@property (assign,nonatomic) BOOL hasAutoUpdateEnabled; 
@property (assign,nonatomic) BOOL autoUpdateEnabled;                        //@synthesize autoUpdateEnabled=_autoUpdateEnabled - In the implementation block
@property (assign,nonatomic) BOOL hasDidSeeTrueTonePane; 
@property (assign,nonatomic) BOOL didSeeTrueTonePane;                       //@synthesize didSeeTrueTonePane=_didSeeTrueTonePane - In the implementation block
@property (assign,nonatomic) BOOL hasUserInterfaceStyleMode; 
@property (assign,nonatomic) long long userInterfaceStyleMode;              //@synthesize userInterfaceStyleMode=_userInterfaceStyleMode - In the implementation block
@property (nonatomic,readonly) BOOL hasWalletData; 
@property (nonatomic,retain) NSData * walletData;                           //@synthesize walletData=_walletData - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)version;
-(id)dictionaryRepresentation;
-(void)setVersion:(unsigned)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setNanoRegistryData:(NSData *)arg1 ;
-(void)setWalletData:(NSData *)arg1 ;
-(BOOL)hasNanoRegistryData;
-(void)setHomeButtonHapticKind:(unsigned)arg1 ;
-(void)setHasHomeButtonHapticKind:(BOOL)arg1 ;
-(BOOL)hasHomeButtonHapticKind;
-(void)setDeviceAnalyticsOptIn:(unsigned)arg1 ;
-(void)setHasDeviceAnalyticsOptIn:(BOOL)arg1 ;
-(BOOL)hasDeviceAnalyticsOptIn;
-(void)setAppAnalyticsOptIn:(unsigned)arg1 ;
-(void)setHasAppAnalyticsOptIn:(BOOL)arg1 ;
-(BOOL)hasAppAnalyticsOptIn;
-(void)setLocationServicesOptIn:(BOOL)arg1 ;
-(void)setHasLocationServicesOptIn:(BOOL)arg1 ;
-(BOOL)hasLocationServicesOptIn;
-(void)setFindMyiPhoneOptIn:(BOOL)arg1 ;
-(void)setHasFindMyiPhoneOptIn:(BOOL)arg1 ;
-(BOOL)hasFindMyiPhoneOptIn;
-(void)setSiriOptIn:(BOOL)arg1 ;
-(void)setHasSiriOptIn:(BOOL)arg1 ;
-(BOOL)hasSiriOptIn;
-(void)setScreenTimeEnabled:(BOOL)arg1 ;
-(void)setHasScreenTimeEnabled:(BOOL)arg1 ;
-(BOOL)hasScreenTimeEnabled;
-(void)setAutoUpdateEnabled:(BOOL)arg1 ;
-(void)setHasAutoUpdateEnabled:(BOOL)arg1 ;
-(BOOL)hasAutoUpdateEnabled;
-(void)setDidSeeTrueTonePane:(BOOL)arg1 ;
-(void)setHasDidSeeTrueTonePane:(BOOL)arg1 ;
-(BOOL)hasDidSeeTrueTonePane;
-(void)setUserInterfaceStyleMode:(long long)arg1 ;
-(void)setHasUserInterfaceStyleMode:(BOOL)arg1 ;
-(BOOL)hasUserInterfaceStyleMode;
-(BOOL)hasWalletData;
-(NSData *)nanoRegistryData;
-(unsigned)homeButtonHapticKind;
-(unsigned)deviceAnalyticsOptIn;
-(unsigned)appAnalyticsOptIn;
-(BOOL)locationServicesOptIn;
-(BOOL)findMyiPhoneOptIn;
-(BOOL)siriOptIn;
-(BOOL)screenTimeEnabled;
-(BOOL)autoUpdateEnabled;
-(BOOL)didSeeTrueTonePane;
-(long long)userInterfaceStyleMode;
-(NSData *)walletData;
@end

