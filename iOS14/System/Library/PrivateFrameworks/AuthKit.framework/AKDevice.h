/*
* Generated on Thursday, January 14, 2021 at 2:22:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)_generateServerFriendlyDescriptionForPairedDevice:(id)arg1 ;
+(id)_osVersion;
+(id)currentDevice;
+(id)deviceSpecificLocalizedStringWithKey:(id)arg1 ;
+(id)_hardwareModel;
+(id)deviceWithSerializedData:(id)arg1 ;
+(id)activeIDSPeerDevice;
+(id)systemContainerCacheURL;
+(id)_osName;
+(id)_buildNumber;
+(long long)currentDeviceAuthenticationMode;
+(id)systemContainerURL;
-(NSData *)serializedData;
-(NSString *)serialNumber;
-(NSString *)internationalMobileEquipmentIdentity;
-(NSLocale *)locale;
-(BOOL)isFaceIDCapable;
-(BOOL)isInCircle;
-(void)setLocale:(NSLocale *)arg1 ;
-(id)init;
-(void)setLinkType:(unsigned long long)arg1 ;
-(NSString *)uniqueDeviceIdentifier;
-(void)setBackingColor:(NSNumber *)arg1 ;
-(unsigned long long)linkType;
-(NSString *)color;
-(NSString *)phoneNumber;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)userFullName;
-(NSString *)userChosenName;
-(void)setUniqueDeviceIdentifier:(NSString *)arg1 ;
-(BOOL)isBiometricAuthCapable;
-(void)setHousingColor:(NSNumber *)arg1 ;
-(void)setMLBSerialNumber:(NSString *)arg1 ;
-(id)description;
-(NSNumber *)housingColor;
-(void)setColor:(NSString *)arg1 ;
-(NSNumber *)backingColor;
-(BOOL)isInternalBuild;
-(void)_setShouldUpdateToValue:(BOOL)arg1 ;
-(id)_volumeGroupUUID;
-(NSString *)MLBSerialNumber;
-(BOOL)isMultiUserMode;
-(void)setCoverGlassColor:(NSNumber *)arg1 ;
-(NSString *)ROMAddress;
-(void)setServerFriendlyDescription:(NSString *)arg1 ;
-(void)setROMAddress:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)modelNumber;
-(NSString *)enclosureColor;
-(void)setEnclosureColor:(NSString *)arg1 ;
-(NSString *)integratedCircuitCardIdentifier;
-(void)setModelNumber:(NSString *)arg1 ;
-(NSNumber *)coverGlassColor;
-(NSString *)mobileEquipmentIdentifier;
-(NSString *)serverFriendlyDescription;
-(BOOL)isUnlocked;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)localUserUUID;
-(CTServerConnectionRef)_telephonyConnection;
-(BOOL)isProtectedWithPasscode;
-(void)dealloc;
@end

