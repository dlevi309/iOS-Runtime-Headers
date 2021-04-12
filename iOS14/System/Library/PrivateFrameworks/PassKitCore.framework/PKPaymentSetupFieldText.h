/*
* Generated on Thursday, January 14, 2021 at 2:21:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPaymentSetupField.h>

@class NSNumberFormatter, NSMutableCharacterSet, NSString, NSArray;

@interface PKPaymentSetupFieldText : PKPaymentSetupField {

	NSNumberFormatter* _currencyFormatter;
	NSNumberFormatter* _amountFormatter;
	NSMutableCharacterSet* _allowedCharacters;
	BOOL _secureText;
	BOOL _secureVisibleText;
	BOOL _numeric;
	BOOL _luhnCheck;
	BOOL _keepPaddingCharactersForSubmission;
	unsigned long long _minLength;
	unsigned long long _maxLength;
	NSString* _currencyCode;
	NSString* _displayFormatPlaceholder;
	NSArray* _paddingCharacters;

}

@property (assign,nonatomic) unsigned long long minLength;                                   //@synthesize minLength=_minLength - In the implementation block
@property (assign,nonatomic) unsigned long long maxLength;                                   //@synthesize maxLength=_maxLength - In the implementation block
@property (assign,getter=isSecureText,nonatomic) BOOL secureText;                            //@synthesize secureText=_secureText - In the implementation block
@property (assign,getter=isSecureVisibleText,nonatomic) BOOL secureVisibleText;              //@synthesize secureVisibleText=_secureVisibleText - In the implementation block
@property (assign,getter=isNumeric,nonatomic) BOOL numeric;                                  //@synthesize numeric=_numeric - In the implementation block
@property (assign,getter=useLuhnCheck,nonatomic) BOOL luhnCheck;                             //@synthesize luhnCheck=_luhnCheck - In the implementation block
@property (nonatomic,copy) NSString * displayFormatPlaceholder;                              //@synthesize displayFormatPlaceholder=_displayFormatPlaceholder - In the implementation block
@property (nonatomic,copy) NSString * currencyCode;                                          //@synthesize currencyCode=_currencyCode - In the implementation block
@property (assign,nonatomic) BOOL keepPaddingCharactersForSubmission;                        //@synthesize keepPaddingCharactersForSubmission=_keepPaddingCharactersForSubmission - In the implementation block
@property (nonatomic,retain) NSArray * paddingCharacters;                                    //@synthesize paddingCharacters=_paddingCharacters - In the implementation block
@property (nonatomic,copy) NSMutableCharacterSet * allowedCharacters; 
-(NSString *)currencyCode;
-(void)setDefaultValue:(id)arg1 ;
-(id)displayString;
-(void)setMinLength:(unsigned long long)arg1 ;
-(unsigned long long)maxLength;
-(unsigned long long)minLength;
-(id)initWithIdentifier:(id)arg1 type:(unsigned long long)arg2 ;
-(BOOL)isNumeric;
-(void)updateWithConfiguration:(id)arg1 ;
-(void)setCurrencyCode:(NSString *)arg1 ;
-(unsigned long long)fieldType;
-(void)setMaxLength:(unsigned long long)arg1 ;
-(void)updateWithAttribute:(id)arg1 ;
-(id)_submissionStringForValue:(id)arg1 ;
-(void)setNumeric:(BOOL)arg1 ;
-(BOOL)useLuhnCheck;
-(BOOL)submissionStringMeetsAllRequirements;
-(BOOL)hasDisplayFormat;
-(id)stringByApplyingDisplayFormat:(id)arg1 ;
-(id)displayFormatPaddingCharacters;
-(BOOL)isSecureText;
-(NSString *)displayFormatPlaceholder;
-(void)setSecureText:(BOOL)arg1 ;
-(BOOL)isSecureVisibleText;
-(void)setSecureVisibleText:(BOOL)arg1 ;
-(void)setLuhnCheck:(BOOL)arg1 ;
-(NSMutableCharacterSet *)allowedCharacters;
-(void)setDisplayFormatPlaceholder:(NSString *)arg1 ;
-(void)updateDisplayFormat:(id)arg1 ;
-(void)setAllowedCharacters:(NSMutableCharacterSet *)arg1 ;
-(BOOL)keepPaddingCharactersForSubmission;
-(void)setKeepPaddingCharactersForSubmission:(BOOL)arg1 ;
-(NSArray *)paddingCharacters;
-(void)setPaddingCharacters:(NSArray *)arg1 ;
-(void)setCurrentValue:(id)arg1 ;
@end

