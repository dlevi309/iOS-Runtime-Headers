/*
* Generated on Monday, March 1, 2021 at 2:31:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
*/

#import <AuthKit/AuthKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSLock, NSString, NSNumber, NSLocale, NSData;

@interface AKDevice : NSObject <NSSecureCoding, NSCopying> {

	os_unfair_lock_s _unfairLock;
	CTServerConnectionRef _telephonyConnectionRef;
	NSLock* _telephonyLock;
	BOOL _shouldUpdateUniqueDeviceIdentifier;
	BOOL _shouldUpdateServerFriendlyDescription;
	BOOL _shouldUpdateColor;
	BOOL _shouldUpdateEnclosureColor;
	BOOL _shouldUpdateCoverGlassColor;
	BOOL _shouldUpdateHousingColor;
	BOOL _shouldUpdateBackingColor;
	BOOL _shouldUpdateLocale;
	BOOL _shouldUpdateROMAddress;
	BOOL _shouldUpdateMLBSerialNumber;
	BOOL _shouldUpdateModelNumber;
	NSString* _uniqueDeviceIdentifier;
	NSString* _serverFriendlyDescription;
	NSString* _color;
	NSString* _enclosureColor;
	NSNumber* _coverGlassColor;
	NSNumber* _housingColor;
	NSNumber* _backingColor;
	NSLocale* _locale;
	NSString* _ROMAddress;
	NSString* _MLBSerialNumber;
	NSString* _modelNumber;
	unsigned long long _linkType;

}

@property (readonly) NSString * serialNumber; 
@property (readonly) NSString * userChosenName; 
@property (readonly) NSString * userFullName; 
@property (readonly) NSString * internationalMobileEquipmentIdentity; 
@property (readonly) BOOL isProtectedWithPasscode; 
@property (readonly) BOOL isBiometricAuthCapable; 
@property (readonly) BOOL isFaceIDCapable; 
@property (readonly) BOOL isUnlocked; 
@property (readonly) BOOL isInCircle; 
@property (readonly) NSString * phoneNumber; 
@property (readonly) NSString * mobileEquipmentIdentifier; 
@property (readonly) NSString * integratedCircuitCardIdentifier; 
@property (readonly) BOOL isInternalBuild; 
@property (readonly) BOOL isMultiUserMode; 
@property (readonly) NSData * serializedData; 
@property (nonatomic,copy) NSString * serverFriendlyDescription;                   //@synthesize serverFriendlyDescription=_serverFriendlyDescription - In the implementation block
@property (nonatomic,copy) NSString * uniqueDeviceIdentifier;                      //@synthesize uniqueDeviceIdentifier=_uniqueDeviceIdentifier - In the implementation block
@property (nonatomic,copy) NSString * color;                                       //@synthesize color=_color - In the implementation block
@property (nonatomic,copy) NSString * enclosureColor;                              //@synthesize enclosureColor=_enclosureColor - In the implementation block
@property (nonatomic,copy) NSNumber * coverGlassColor;                             //@synthesize coverGlassColor=_coverGlassColor - In the implementation block
@property (nonatomic,copy) NSNumber * housingColor;                                //@synthesize housingColor=_housingColor - In the implementation block
@property (nonatomic,copy) NSNumber * backingColor;                                //@synthesize backingColor=_backingColor - In the implementation block
@property (nonatomic,copy) NSLocale * locale;                                      //@synthesize locale=_locale - In the implementation block
@property (nonatomic,copy) NSString * MLBSerialNumber;                             //@synthesize MLBSerialNumber=_MLBSerialNumber - In the implementation block
@property (nonatomic,copy) NSString * ROMAddress;                                  //@synthesize ROMAddress=_ROMAddress - In the implementation block
@property (nonatomic,copy) NSString * modelNumber;                                 //@synthesize modelNumber=_modelNumber - In the implementation block
@property (setter=setLinkType:) unsigned long long linkType;                       //@synthesize linkType=_linkType - In the implementation block
@property (readonly) NSString * localUserUUID; 
+(BOOL)supportsSecureCoding;
+(id)systemContainerURL;
+(id)currentDevice;
+(id)_osVersion;
+(id)_hardwareModel;
+(id)systemContainerCacheURL;
+(long long)currentDeviceAuthenticationMode;
+(id)_generateServerFriendlyDescriptionForPairedDevice:(id)arg1 ;
+(id)_osName;
+(id)_buildNumber;
+(id)activeIDSPeerDevice;
+(id)deviceWithSerializedData:(id)arg1 ;
+(id)deviceSpecificLocalizedStringWithKey:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setLocale:(NSLocale *)arg1 ;
-(NSLocale *)locale;
-(NSString *)phoneNumber;
-(NSString *)color;
-(void)setColor:(NSString *)arg1 ;
-(NSString *)serialNumber;
-(NSString *)uniqueDeviceIdentifier;
-(NSString *)userFullName;
-(CTServerConnectionRef)_telephonyConnection;
-(void)setModelNumber:(NSString *)arg1 ;
-(NSString *)modelNumber;
-(BOOL)isInternalBuild;
-(BOOL)isMultiUserMode;
-(NSString *)mobileEquipmentIdentifier;
-(NSString *)internationalMobileEquipmentIdentity;
-(NSString *)enclosureColor;
-(unsigned long long)linkType;
-(void)setLinkType:(unsigned long long)arg1 ;
-(void)setEnclosureColor:(NSString *)arg1 ;
-(NSData *)serializedData;
-(BOOL)isUnlocked;
-(BOOL)isProtectedWithPasscode;
-(NSString *)localUserUUID;
-(NSString *)serverFriendlyDescription;
-(BOOL)isInCircle;
-(NSString *)ROMAddress;
-(NSString *)MLBSerialNumber;
-(void)_setShouldUpdateToValue:(BOOL)arg1 ;
-(void)setUniqueDeviceIdentifier:(NSString *)arg1 ;
-(void)setCoverGlassColor:(NSNumber *)arg1 ;
-(void)setHousingColor:(NSNumber *)arg1 ;
-(void)setBackingColor:(NSNumber *)arg1 ;
-(void)setServerFriendlyDescription:(NSString *)arg1 ;
-(NSNumber *)coverGlassColor;
-(NSNumber *)housingColor;
-(NSNumber *)backingColor;
-(BOOL)isBiometricAuthCapable;
-(void)setROMAddress:(NSString *)arg1 ;
-(void)setMLBSerialNumber:(NSString *)arg1 ;
-(NSString *)userChosenName;
-(BOOL)isFaceIDCapable;
-(NSString *)integratedCircuitCardIdentifier;
-(id)_volumeGroupUUID;
@end

