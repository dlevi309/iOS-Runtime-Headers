/*
* Generated on Monday, March 1, 2021 at 2:31:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPaymentSetupField.h>

@class NSNumberFormatter, NSString, NSMutableCharacterSet, NSArray;

@interface PKPaymentSetupFieldText : PKPaymentSetupField {

	NSNumberFormatter* _currencyFormatter;
	NSNumberFormatter* _amountFormatter;
	BOOL _secureText;
	BOOL _secureVisibleText;
	BOOL _numeric;
	BOOL _luhnCheck;
	BOOL _keepPaddingCharactersForSubmission;
	unsigned long long _minLength;
	unsigned long long _maxLength;
	NSString* _currencyCode;
	NSString* _displayFormatPlaceholder;
	NSMutableCharacterSet* _allowedCharacters;
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
@property (nonatomic,retain) NSMutableCharacterSet * allowedCharacters;                      //@synthesize allowedCharacters=_allowedCharacters - In the implementation block
@property (nonatomic,retain) NSArray * paddingCharacters;                                    //@synthesize paddingCharacters=_paddingCharacters - In the implementation block
-(NSString *)currencyCode;
-(void)setCurrencyCode:(NSString *)arg1 ;
-(unsigned long long)minLength;
-(unsigned long long)maxLength;
-(void)setMaxLength:(unsigned long long)arg1 ;
-(id)displayString;
-(void)setMinLength:(unsigned long long)arg1 ;
-(void)setCurrentValue:(id)arg1 ;
-(unsigned long long)fieldType;
-(void)updateWithConfiguration:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 type:(unsigned long long)arg2 ;
-(void)updateWithAttribute:(id)arg1 ;
-(id)_submissionStringForValue:(id)arg1 ;
-(BOOL)submissionStringMeetsAllRequirements;
-(BOOL)hasDisplayFormat;
-(id)stringByApplyingDisplayFormat:(id)arg1 ;
-(id)displayFormatPaddingCharacters;
-(BOOL)isNumeric;
-(BOOL)useLuhnCheck;
-(NSString *)displayFormatPlaceholder;
-(BOOL)isSecureText;
-(void)setSecureText:(BOOL)arg1 ;
-(BOOL)isSecureVisibleText;
-(void)setSecureVisibleText:(BOOL)arg1 ;
-(void)setNumeric:(BOOL)arg1 ;
-(void)setLuhnCheck:(BOOL)arg1 ;
-(void)setDisplayFormatPlaceholder:(NSString *)arg1 ;
-(void)updateDisplayFormat:(id)arg1 ;
-(NSMutableCharacterSet *)allowedCharacters;
-(BOOL)keepPaddingCharactersForSubmission;
-(void)setKeepPaddingCharactersForSubmission:(BOOL)arg1 ;
-(void)setAllowedCharacters:(NSMutableCharacterSet *)arg1 ;
-(NSArray *)paddingCharacters;
-(void)setPaddingCharacters:(NSArray *)arg1 ;
@end

