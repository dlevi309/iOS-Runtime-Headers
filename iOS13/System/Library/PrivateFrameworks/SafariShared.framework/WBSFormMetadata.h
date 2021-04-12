/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(unsigned long long)type;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_init;
-(NSDictionary *)dictionaryRepresentation;
-(long long)uniqueID;
-(NSURL *)action;
-(unsigned long long)requestType;
-(BOOL)isVisible;
-(NSDictionary *)annotations;
-(NSArray *)controls;
-(NSDictionary *)passwordRequirements;
-(NSString *)passwordElementUniqueID;
-(NSString *)confirmPasswordElementUniqueID;
-(NSString *)userNameElementUniqueID;
-(BOOL)usesRelAsync;
-(BOOL)containsActiveElement;
-(BOOL)isEligibleForAutomaticLogin;
-(id)formMetadataByReplacingControlsWith:(id)arg1 ;
-(NSString *)oldPasswordElementUniqueID;
-(NSString *)textSample;
-(BOOL)isBestForPageLevelAutoFill;
-(BOOL)isBestForStreamlinedLogin;
-(id)initWithJSValue:(id)arg1 ;
-(BOOL)containsAtLeastOneSecureTextField;
-(BOOL)allowsAutocomplete;
-(NSString *)firstCreditCardCardholderFieldOrCreditCardNumberFieldUniqueID;
-(BOOL)isBestForCredentialPreFill;
-(BOOL)usesGeneratedPassword;
-(BOOL)isSearchForm;
-(void)setPasswordRequirements:(NSDictionary *)arg1 ;
@end

