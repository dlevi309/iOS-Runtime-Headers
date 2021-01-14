/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber, NSArray, NSDictionary, NSString, NSURL;

@interface WBSFormMetadata : NSObject <NSSecureCoding> {

	NSNumber* _containsAtLeastOneSecureTextField;
	NSArray* _controls;
	BOOL _allowsAutocomplete;
	BOOL _containsActiveElement;
	BOOL _bestForCredentialPreFill;
	BOOL _bestForPageLevelAutoFill;
	BOOL _bestForStreamlinedLogin;
	BOOL _eligibleForAutomaticLogin;
	BOOL _visible;
	BOOL _usesRelAsync;
	BOOL _usesGeneratedPassword;
	BOOL _isSearchForm;
	NSDictionary* _annotations;
	unsigned long long _type;
	NSString* _confirmPasswordElementUniqueID;
	NSString* _firstCreditCardCardholderFieldOrCreditCardNumberFieldUniqueID;
	NSURL* _action;
	long long _uniqueID;
	NSString* _oldPasswordElementUniqueID;
	NSString* _passwordElementUniqueID;
	NSString* _textSample;
	NSString* _userNameElementUniqueID;
	unsigned long long _requestType;
	NSDictionary* _passwordRequirements;

}

@property (nonatomic,copy) NSDictionary * passwordRequirements;                                                            //@synthesize passwordRequirements=_passwordRequirements - In the implementation block
@property (nonatomic,readonly) BOOL allowsAutocomplete;                                                                    //@synthesize allowsAutocomplete=_allowsAutocomplete - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * annotations;                                                            //@synthesize annotations=_annotations - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                                                                    //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSString * confirmPasswordElementUniqueID;                                             //@synthesize confirmPasswordElementUniqueID=_confirmPasswordElementUniqueID - In the implementation block
@property (nonatomic,readonly) BOOL containsActiveElement;                                                                 //@synthesize containsActiveElement=_containsActiveElement - In the implementation block
@property (nonatomic,copy,readonly) NSString * firstCreditCardCardholderFieldOrCreditCardNumberFieldUniqueID;              //@synthesize firstCreditCardCardholderFieldOrCreditCardNumberFieldUniqueID=_firstCreditCardCardholderFieldOrCreditCardNumberFieldUniqueID - In the implementation block
@property (nonatomic,readonly) NSURL * action;                                                                             //@synthesize action=_action - In the implementation block
@property (nonatomic,copy,readonly) NSArray * controls; 
@property (nonatomic,readonly) long long uniqueID;                                                                         //@synthesize uniqueID=_uniqueID - In the implementation block
@property (getter=isBestForCredentialPreFill,nonatomic,readonly) BOOL bestForCredentialPreFill;                            //@synthesize bestForCredentialPreFill=_bestForCredentialPreFill - In the implementation block
@property (getter=isBestForPageLevelAutoFill,nonatomic,readonly) BOOL bestForPageLevelAutoFill;                            //@synthesize bestForPageLevelAutoFill=_bestForPageLevelAutoFill - In the implementation block
@property (getter=isBestForStreamlinedLogin,nonatomic,readonly) BOOL bestForStreamlinedLogin;                              //@synthesize bestForStreamlinedLogin=_bestForStreamlinedLogin - In the implementation block
@property (getter=isEligibleForAutomaticLogin,nonatomic,readonly) BOOL eligibleForAutomaticLogin;                          //@synthesize eligibleForAutomaticLogin=_eligibleForAutomaticLogin - In the implementation block
@property (getter=isVisible,nonatomic,readonly) BOOL visible;                                                              //@synthesize visible=_visible - In the implementation block
@property (nonatomic,readonly) BOOL usesRelAsync;                                                                          //@synthesize usesRelAsync=_usesRelAsync - In the implementation block
@property (nonatomic,copy,readonly) NSString * oldPasswordElementUniqueID;                                                 //@synthesize oldPasswordElementUniqueID=_oldPasswordElementUniqueID - In the implementation block
@property (nonatomic,copy,readonly) NSString * passwordElementUniqueID;                                                    //@synthesize passwordElementUniqueID=_passwordElementUniqueID - In the implementation block
@property (nonatomic,copy,readonly) NSString * textSample;                                                                 //@synthesize textSample=_textSample - In the implementation block
@property (nonatomic,copy,readonly) NSString * userNameElementUniqueID;                                                    //@synthesize userNameElementUniqueID=_userNameElementUniqueID - In the implementation block
@property (nonatomic,readonly) BOOL usesGeneratedPassword;                                                                 //@synthesize usesGeneratedPassword=_usesGeneratedPassword - In the implementation block
@property (nonatomic,readonly) unsigned long long requestType;                                                             //@synthesize requestType=_requestType - In the implementation block
@property (nonatomic,readonly) BOOL isSearchForm;                                                                          //@synthesize isSearchForm=_isSearchForm - In the implementation block
@property (nonatomic,readonly) BOOL containsAtLeastOneSecureTextField; 
@property (nonatomic,copy,readonly) NSDictionary * dictionaryRepresentation; 
+(BOOL)supportsSecureCoding;
-(NSDictionary *)annotations;
-(NSDictionary *)dictionaryRepresentation;
-(long long)uniqueID;
-(BOOL)isBestForPageLevelAutoFill;
-(id)initWithJSValue:(id)arg1 ;
-(BOOL)containsAtLeastOneSecureTextField;
-(BOOL)allowsAutocomplete;
-(NSString *)firstCreditCardCardholderFieldOrCreditCardNumberFieldUniqueID;
-(BOOL)isBestForCredentialPreFill;
-(BOOL)usesRelAsync;
-(BOOL)usesGeneratedPassword;
-(unsigned long long)requestType;
-(BOOL)isSearchForm;
-(NSDictionary *)passwordRequirements;
-(void)setPasswordRequirements:(NSDictionary *)arg1 ;
-(BOOL)isBestForStreamlinedLogin;
-(NSArray *)controls;
-(void)encodeWithCoder:(id)arg1 ;
-(NSURL *)action;
-(NSString *)textSample;
-(BOOL)isVisible;
-(BOOL)isEligibleForAutomaticLogin;
-(NSString *)userNameElementUniqueID;
-(NSString *)passwordElementUniqueID;
-(unsigned long long)type;
-(NSString *)oldPasswordElementUniqueID;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)confirmPasswordElementUniqueID;
-(id)_init;
-(BOOL)containsActiveElement;
-(BOOL)isEqual:(id)arg1 ;
-(id)formMetadataByReplacingControlsWith:(id)arg1 ;
@end

