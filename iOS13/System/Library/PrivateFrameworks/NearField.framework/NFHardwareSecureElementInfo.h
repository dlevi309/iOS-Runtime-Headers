/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NearField.framework/NearField
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber, NSData, NSArray;

@interface NFHardwareSecureElementInfo : NSObject <NSSecureCoding> {

	BOOL _restrictedMode;
	BOOL _restrictedPerformanceMode;
	BOOL _osUpdateMode;
	BOOL _personalisable;
	BOOL _jcopTooOld;
	NSString* _identifier;
	unsigned long long _OSVersion;
	unsigned long long _fullOSVersion;
	unsigned long long _firmwareVersion;
	NSNumber* _compiledFWVersion;
	unsigned long long _hardwareVersion;
	unsigned long long _deviceType;
	NSNumber* _sequenceCounter;
	NSNumber* _referenceCounter;
	unsigned long long _osid;
	NSNumber* _otherOSValid;
	unsigned long long _OSMode;
	unsigned long long _signingKeyType;
	unsigned long long _migrationState;
	unsigned long long _migrationContext;
	NSNumber* _migrationPackages;
	NSNumber* _migrationInstances;
	NSString* _platformIdentifier;
	NSString* _serialNumber;
	NSString* _rsaCertificate;
	NSString* _ecdsaCertificate;
	NSString* _eckaCertificate;
	unsigned long long _appletMap;
	NSNumber* _persistentConfigID;
	NSString* _rootKeyID;
	NSString* _osKeyID;
	NSString* _firmwareKeyID;
	NSString* _nonce;
	NSData* _manifestQuery;
	NSArray* _bootHistory;
	unsigned long long _supportedTechnologies;
	unsigned long long _seType;
	NSString* _atrString;

}

@property (nonatomic,readonly) NSString * identifier;                                 //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) unsigned long long OSVersion;                          //@synthesize OSVersion=_OSVersion - In the implementation block
@property (nonatomic,readonly) unsigned long long fullOSVersion;                      //@synthesize fullOSVersion=_fullOSVersion - In the implementation block
@property (nonatomic,readonly) unsigned long long firmwareVersion;                    //@synthesize firmwareVersion=_firmwareVersion - In the implementation block
@property (nonatomic,readonly) NSNumber * compiledFWVersion;                          //@synthesize compiledFWVersion=_compiledFWVersion - In the implementation block
@property (nonatomic,readonly) unsigned long long hardwareVersion;                    //@synthesize hardwareVersion=_hardwareVersion - In the implementation block
@property (nonatomic,readonly) unsigned long long deviceType;                         //@synthesize deviceType=_deviceType - In the implementation block
@property (nonatomic,readonly) NSNumber * sequenceCounter;                            //@synthesize sequenceCounter=_sequenceCounter - In the implementation block
@property (nonatomic,readonly) NSNumber * referenceCounter;                           //@synthesize referenceCounter=_referenceCounter - In the implementation block
@property (nonatomic,readonly) unsigned long long osid;                               //@synthesize osid=_osid - In the implementation block
@property (nonatomic,readonly) NSNumber * otherOSValid;                               //@synthesize otherOSValid=_otherOSValid - In the implementation block
@property (nonatomic,readonly) BOOL restrictedMode;                                   //@synthesize restrictedMode=_restrictedMode - In the implementation block
@property (nonatomic,readonly) BOOL restrictedPerformanceMode;                        //@synthesize restrictedPerformanceMode=_restrictedPerformanceMode - In the implementation block
@property (nonatomic,readonly) BOOL osUpdateMode;                                     //@synthesize osUpdateMode=_osUpdateMode - In the implementation block
@property (nonatomic,readonly) unsigned long long OSMode;                             //@synthesize OSMode=_OSMode - In the implementation block
@property (nonatomic,readonly) unsigned long long signingKeyType;                     //@synthesize signingKeyType=_signingKeyType - In the implementation block
@property (nonatomic,readonly) unsigned long long migrationState;                     //@synthesize migrationState=_migrationState - In the implementation block
@property (nonatomic,readonly) unsigned long long migrationContext;                   //@synthesize migrationContext=_migrationContext - In the implementation block
@property (nonatomic,readonly) NSNumber * migrationPackages;                          //@synthesize migrationPackages=_migrationPackages - In the implementation block
@property (nonatomic,readonly) NSNumber * migrationInstances;                         //@synthesize migrationInstances=_migrationInstances - In the implementation block
@property (nonatomic,readonly) NSString * platformIdentifier;                         //@synthesize platformIdentifier=_platformIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * serialNumber;                               //@synthesize serialNumber=_serialNumber - In the implementation block
@property (nonatomic,readonly) NSString * rsaCertificate;                             //@synthesize rsaCertificate=_rsaCertificate - In the implementation block
@property (nonatomic,readonly) NSString * ecdsaCertificate;                           //@synthesize ecdsaCertificate=_ecdsaCertificate - In the implementation block
@property (nonatomic,readonly) NSString * eckaCertificate;                            //@synthesize eckaCertificate=_eckaCertificate - In the implementation block
@property (nonatomic,readonly) unsigned long long appletMap;                          //@synthesize appletMap=_appletMap - In the implementation block
@property (nonatomic,readonly) NSNumber * persistentConfigID;                         //@synthesize persistentConfigID=_persistentConfigID - In the implementation block
@property (nonatomic,readonly) NSString * rootKeyID;                                  //@synthesize rootKeyID=_rootKeyID - In the implementation block
@property (nonatomic,readonly) NSString * osKeyID;                                    //@synthesize osKeyID=_osKeyID - In the implementation block
@property (nonatomic,readonly) NSString * firmwareKeyID;                              //@synthesize firmwareKeyID=_firmwareKeyID - In the implementation block
@property (nonatomic,readonly) NSString * nonce;                                      //@synthesize nonce=_nonce - In the implementation block
@property (nonatomic,readonly) NSData * manifestQuery;                                //@synthesize manifestQuery=_manifestQuery - In the implementation block
@property (nonatomic,readonly) BOOL personalisable;                                   //@synthesize personalisable=_personalisable - In the implementation block
@property (nonatomic,readonly) NSArray * bootHistory;                                 //@synthesize bootHistory=_bootHistory - In the implementation block
@property (nonatomic,readonly) unsigned long long supportedTechnologies;              //@synthesize supportedTechnologies=_supportedTechnologies - In the implementation block
@property (nonatomic,readonly) unsigned long long seType;                             //@synthesize seType=_seType - In the implementation block
@property (nonatomic,readonly) NSString * atrString;                                  //@synthesize atrString=_atrString - In the implementation block
@property (nonatomic,readonly) BOOL jcopTooOld;                                       //@synthesize jcopTooOld=_jcopTooOld - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)identifier;
-(NSNumber *)sequenceCounter;
-(unsigned long long)deviceType;
-(NSString *)nonce;
-(NSString *)serialNumber;
-(unsigned long long)OSVersion;
-(unsigned long long)firmwareVersion;
-(unsigned long long)hardwareVersion;
-(BOOL)personalisable;
-(NSData *)manifestQuery;
-(BOOL)restrictedMode;
-(NSString *)platformIdentifier;
-(unsigned long long)migrationState;
-(id)asDictionary;
-(unsigned long long)supportedTechnologies;
-(unsigned long long)OSMode;
-(BOOL)jcopTooOld;
-(void)_setIsInRestrictedMode:(BOOL)arg1 ;
-(NSArray *)bootHistory;
-(void)_setIsInRestrictedPerformanceMode:(BOOL)arg1 ;
-(void)setBootHistory:(NSArray *)arg1 ;
-(unsigned long long)fullOSVersion;
-(NSNumber *)compiledFWVersion;
-(NSNumber *)referenceCounter;
-(unsigned long long)osid;
-(NSNumber *)otherOSValid;
-(BOOL)restrictedPerformanceMode;
-(BOOL)osUpdateMode;
-(unsigned long long)signingKeyType;
-(unsigned long long)migrationContext;
-(NSNumber *)migrationPackages;
-(NSNumber *)migrationInstances;
-(NSString *)rsaCertificate;
-(NSString *)ecdsaCertificate;
-(NSString *)eckaCertificate;
-(unsigned long long)appletMap;
-(NSNumber *)persistentConfigID;
-(NSString *)rootKeyID;
-(NSString *)osKeyID;
-(NSString *)firmwareKeyID;
-(unsigned long long)seType;
-(NSString *)atrString;
@end

