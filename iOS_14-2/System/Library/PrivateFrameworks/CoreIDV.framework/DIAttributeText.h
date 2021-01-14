/*
* Generated on Thursday, January 14, 2021 at 2:24:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreIDV.framework/CoreIDV
*/

#import <CoreIDV/DIAttribute.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface DIAttributeText : DIAttribute <NSSecureCoding> {

	BOOL _isSecureText;
	BOOL _isSecureVisibleText;
	BOOL _isNumeric;
	BOOL _luhnCheck;
	NSString* defaultValue;
	NSString* currentValue;
	unsigned long long _minLength;
	unsigned long long _maxLength;
	NSString* _displayFormatPlaceholder;

}

@property (assign,nonatomic) unsigned long long minLength;                              //@synthesize minLength=_minLength - In the implementation block
@property (assign,nonatomic) unsigned long long maxLength;                              //@synthesize maxLength=_maxLength - In the implementation block
@property (assign,nonatomic) BOOL isSecureText;                                         //@synthesize isSecureText=_isSecureText - In the implementation block
@property (assign,nonatomic) BOOL isSecureVisibleText;                                  //@synthesize isSecureVisibleText=_isSecureVisibleText - In the implementation block
@property (assign,nonatomic) BOOL isNumeric;                                            //@synthesize isNumeric=_isNumeric - In the implementation block
@property (nonatomic,copy) NSString * defaultValue; 
@property (assign,getter=useLuhnCheck,nonatomic) BOOL luhnCheck;                        //@synthesize luhnCheck=_luhnCheck - In the implementation block
@property (nonatomic,copy) NSString * displayFormatPlaceholder;                         //@synthesize displayFormatPlaceholder=_displayFormatPlaceholder - In the implementation block
@property (getter=getCurrentValue,nonatomic,copy) NSString * currentValue; 
+(BOOL)supportsSecureCoding;
-(void)setDefaultValue:(NSString *)arg1 ;
-(void)setMinLength:(unsigned long long)arg1 ;
-(id)init;
-(unsigned long long)maxLength;
-(NSString *)defaultValue;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)minLength;
-(BOOL)isNumeric;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)setMaxLength:(unsigned long long)arg1 ;
-(BOOL)useLuhnCheck;
-(id)submissionString;
-(id)displayFormatPaddingCharacters;
-(BOOL)isSecureText;
-(NSString *)displayFormatPlaceholder;
-(BOOL)isSecureVisibleText;
-(void)setLuhnCheck:(BOOL)arg1 ;
-(void)setDisplayFormatPlaceholder:(NSString *)arg1 ;
-(void)setCurrentValue:(NSString *)arg1 ;
-(id)getCurrentValue;
-(void)setIsSecureText:(BOOL)arg1 ;
-(void)setIsSecureVisibleText:(BOOL)arg1 ;
-(void)setIsNumeric:(BOOL)arg1 ;
@end

