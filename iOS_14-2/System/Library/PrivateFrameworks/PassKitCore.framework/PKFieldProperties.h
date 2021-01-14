/*
* Generated on Thursday, January 14, 2021 at 2:21:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSString;

@interface PKFieldProperties : NSObject <NSSecureCoding> {

	BOOL _authenticationRequired;
	BOOL _backgroundTransaction;
	BOOL _secondaryPropertiesRequired;
	BOOL _secondaryPropertiesAcquired;
	BOOL _ECP2Field;
	unsigned long long _technology;
	long long _terminalType;
	long long _valueAddedServiceMode;
	unsigned long long _terminalSubtype;
	unsigned long long _pairingRequested;
	NSArray* _TCIs;
	NSArray* _merchantIdentifiers;
	NSString* _applicationIdentifier;
	NSString* _credentialIdentifier;

}

@property (nonatomic,readonly) unsigned long long technology;                   //@synthesize technology=_technology - In the implementation block
@property (nonatomic,readonly) long long terminalType;                          //@synthesize terminalType=_terminalType - In the implementation block
@property (nonatomic,readonly) long long valueAddedServiceMode;                 //@synthesize valueAddedServiceMode=_valueAddedServiceMode - In the implementation block
@property (nonatomic,readonly) unsigned long long terminalSubtype;              //@synthesize terminalSubtype=_terminalSubtype - In the implementation block
@property (nonatomic,readonly) long long accessTerminalSubtype; 
@property (nonatomic,readonly) BOOL shouldIgnore; 
@property (assign,nonatomic) BOOL authenticationRequired;                       //@synthesize authenticationRequired=_authenticationRequired - In the implementation block
@property (assign,nonatomic) BOOL backgroundTransaction;                        //@synthesize backgroundTransaction=_backgroundTransaction - In the implementation block
@property (assign,nonatomic) BOOL secondaryPropertiesRequired;                  //@synthesize secondaryPropertiesRequired=_secondaryPropertiesRequired - In the implementation block
@property (assign,nonatomic) BOOL secondaryPropertiesAcquired;                  //@synthesize secondaryPropertiesAcquired=_secondaryPropertiesAcquired - In the implementation block
@property (assign,nonatomic) unsigned long long pairingRequested;               //@synthesize pairingRequested=_pairingRequested - In the implementation block
@property (assign,getter=isECP2Field,nonatomic) BOOL ECP2Field;                 //@synthesize ECP2Field=_ECP2Field - In the implementation block
@property (nonatomic,copy) NSArray * TCIs;                                      //@synthesize TCIs=_TCIs - In the implementation block
@property (nonatomic,copy) NSArray * merchantIdentifiers;                       //@synthesize merchantIdentifiers=_merchantIdentifiers - In the implementation block
@property (nonatomic,copy) NSString * applicationIdentifier;                    //@synthesize applicationIdentifier=_applicationIdentifier - In the implementation block
@property (nonatomic,copy) NSString * credentialIdentifier;                     //@synthesize credentialIdentifier=_credentialIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)fieldPropertiesForFieldNotification:(id)arg1 ;
-(void)setApplicationIdentifier:(NSString *)arg1 ;
-(NSArray *)TCIs;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isECP2Field;
-(long long)terminalType;
-(long long)valueAddedServiceMode;
-(long long)accessTerminalSubtype;
-(id)initWithTechnology:(unsigned long long)arg1 terminalType:(long long)arg2 terminalSubtype:(unsigned long long)arg3 valueAddedServiceMode:(long long)arg4 ;
-(BOOL)shouldIgnore;
-(unsigned long long)terminalSubtype;
-(unsigned long long)pairingRequested;
-(BOOL)authenticationRequired;
-(BOOL)backgroundTransaction;
-(void)setBackgroundTransaction:(BOOL)arg1 ;
-(BOOL)secondaryPropertiesRequired;
-(void)setECP2Field:(BOOL)arg1 ;
-(BOOL)secondaryPropertiesAcquired;
-(void)setSecondaryPropertiesAcquired:(BOOL)arg1 ;
-(void)setPairingRequested:(unsigned long long)arg1 ;
-(void)setMerchantIdentifiers:(NSArray *)arg1 ;
-(NSString *)applicationIdentifier;
-(void)setTCIs:(NSArray *)arg1 ;
-(id)description;
-(NSArray *)merchantIdentifiers;
-(NSString *)credentialIdentifier;
-(void)setCredentialIdentifier:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setAuthenticationRequired:(BOOL)arg1 ;
-(unsigned long long)technology;
-(void)setSecondaryPropertiesRequired:(BOOL)arg1 ;
@end

