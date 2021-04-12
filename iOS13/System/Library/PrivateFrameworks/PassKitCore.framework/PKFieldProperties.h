/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSError;

@interface PKFieldProperties : NSObject <NSSecureCoding> {

	BOOL _shouldIgnore;
	BOOL _authenticationRequired;
	BOOL _ECP2Field;
	unsigned long long _technology;
	long long _terminalType;
	long long _valueAddedServiceMode;
	unsigned long long _terminalSubtype;
	long long _accessTerminalSubtype;
	NSArray* _TCIs;
	NSArray* _merchantIdentifiers;
	NSError* _error;

}

@property (nonatomic,readonly) unsigned long long technology;                   //@synthesize technology=_technology - In the implementation block
@property (nonatomic,readonly) long long terminalType;                          //@synthesize terminalType=_terminalType - In the implementation block
@property (nonatomic,readonly) long long valueAddedServiceMode;                 //@synthesize valueAddedServiceMode=_valueAddedServiceMode - In the implementation block
@property (nonatomic,readonly) unsigned long long terminalSubtype;              //@synthesize terminalSubtype=_terminalSubtype - In the implementation block
@property (nonatomic,readonly) long long accessTerminalSubtype;                 //@synthesize accessTerminalSubtype=_accessTerminalSubtype - In the implementation block
@property (nonatomic,readonly) BOOL shouldIgnore;                               //@synthesize shouldIgnore=_shouldIgnore - In the implementation block
@property (assign,nonatomic) BOOL authenticationRequired;                       //@synthesize authenticationRequired=_authenticationRequired - In the implementation block
@property (assign,getter=isECP2Field,nonatomic) BOOL ECP2Field;                 //@synthesize ECP2Field=_ECP2Field - In the implementation block
@property (nonatomic,copy) NSArray * TCIs;                                      //@synthesize TCIs=_TCIs - In the implementation block
@property (nonatomic,copy) NSArray * merchantIdentifiers;                       //@synthesize merchantIdentifiers=_merchantIdentifiers - In the implementation block
@property (nonatomic,copy) NSError * error;                                     //@synthesize error=_error - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)fieldPropertiesForFieldNotification:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(void)setAuthenticationRequired:(BOOL)arg1 ;
-(unsigned long long)technology;
-(void)setMerchantIdentifiers:(NSArray *)arg1 ;
-(NSArray *)TCIs;
-(void)setTCIs:(NSArray *)arg1 ;
-(long long)terminalType;
-(long long)valueAddedServiceMode;
-(id)initWithTechnology:(unsigned long long)arg1 terminalType:(long long)arg2 terminalSubtype:(unsigned long long)arg3 valueAddedServiceMode:(long long)arg4 ;
-(unsigned long long)terminalSubtype;
-(long long)accessTerminalSubtype;
-(long long)accessTerminalSubtype;
-(BOOL)shouldIgnore;
-(BOOL)shouldIgnore;
-(BOOL)authenticationRequired;
-(BOOL)isECP2Field;
-(void)setECP2Field:(BOOL)arg1 ;
-(NSArray *)merchantIdentifiers;
@end

