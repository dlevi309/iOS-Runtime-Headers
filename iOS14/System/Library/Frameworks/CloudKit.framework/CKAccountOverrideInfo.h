/*
* Generated on Thursday, January 14, 2021 at 2:21:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CloudKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary;

@interface CKAccountOverrideInfo : NSObject <NSCopying, NSSecureCoding> {

	BOOL _isUnitTestingAccount;
	BOOL _accountWantsPushRegistration;
	BOOL _accountWantsFlowControl;
	NSString* _accountID;
	NSString* _email;
	NSString* _password;
	NSString* _secondEmail;
	NSDictionary* _accountPropertyOverrides;
	NSDictionary* _overridesByDataclass;

}

@property (nonatomic,copy) NSString * accountID;                                 //@synthesize accountID=_accountID - In the implementation block
@property (nonatomic,readonly) NSString * email;                                 //@synthesize email=_email - In the implementation block
@property (nonatomic,readonly) NSString * password;                              //@synthesize password=_password - In the implementation block
@property (nonatomic,copy) NSString * secondEmail;                               //@synthesize secondEmail=_secondEmail - In the implementation block
@property (assign,nonatomic) BOOL isUnitTestingAccount;                          //@synthesize isUnitTestingAccount=_isUnitTestingAccount - In the implementation block
@property (assign,nonatomic) BOOL accountWantsPushRegistration;                  //@synthesize accountWantsPushRegistration=_accountWantsPushRegistration - In the implementation block
@property (assign,nonatomic) BOOL accountWantsFlowControl;                       //@synthesize accountWantsFlowControl=_accountWantsFlowControl - In the implementation block
@property (nonatomic,copy) NSDictionary * accountPropertyOverrides;              //@synthesize accountPropertyOverrides=_accountPropertyOverrides - In the implementation block
@property (nonatomic,copy) NSDictionary * overridesByDataclass;                  //@synthesize overridesByDataclass=_overridesByDataclass - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)accountID;
-(void)setAccountID:(NSString *)arg1 ;
-(id)CKPropertiesDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)password;
-(BOOL)accountWantsPushRegistration;
-(id)description;
-(BOOL)isUnitTestingAccount;
-(NSDictionary *)accountPropertyOverrides;
-(void)setIsUnitTestingAccount:(BOOL)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setAccountWantsPushRegistration:(BOOL)arg1 ;
-(id)initWithAccountID:(id)arg1 ;
-(void)setAccountWantsFlowControl:(BOOL)arg1 ;
-(NSString *)secondEmail;
-(BOOL)accountWantsFlowControl;
-(void)setSecondEmail:(NSString *)arg1 ;
-(id)initWithEmail:(id)arg1 password:(id)arg2 ;
-(NSDictionary *)overridesByDataclass;
-(void)setAccountPropertyOverrides:(NSDictionary *)arg1 ;
-(void)setOverridesByDataclass:(NSDictionary *)arg1 ;
-(NSString *)email;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initAnonymousAccount;
@end

