/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKContactFieldConfiguration.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSCharacterSet, NSRegularExpression;

@interface PKTextContactFieldConfiguration : PKContactFieldConfiguration <NSSecureCoding> {

	BOOL _numeric;
	BOOL _keepPaddingCharactersForSubmission;
	BOOL _isValidCharacterSet;
	long long _minLength;
	long long _maxLength;
	NSString* _displayFormat;
	NSString* _displayFormatPlaceholder;
	NSCharacterSet* _characterSet;
	NSRegularExpression* _validRegex;

}

@property (nonatomic,readonly) long long minLength;                                   //@synthesize minLength=_minLength - In the implementation block
@property (nonatomic,readonly) long long maxLength;                                   //@synthesize maxLength=_maxLength - In the implementation block
@property (getter=isNumeric,nonatomic,readonly) BOOL numeric;                         //@synthesize numeric=_numeric - In the implementation block
@property (nonatomic,copy,readonly) NSString * displayFormat;                         //@synthesize displayFormat=_displayFormat - In the implementation block
@property (nonatomic,copy,readonly) NSString * displayFormatPlaceholder;              //@synthesize displayFormatPlaceholder=_displayFormatPlaceholder - In the implementation block
@property (nonatomic,readonly) BOOL keepPaddingCharactersForSubmission;               //@synthesize keepPaddingCharactersForSubmission=_keepPaddingCharactersForSubmission - In the implementation block
@property (nonatomic,readonly) NSCharacterSet * characterSet;                         //@synthesize characterSet=_characterSet - In the implementation block
@property (nonatomic,readonly) BOOL isValidCharacterSet;                              //@synthesize isValidCharacterSet=_isValidCharacterSet - In the implementation block
@property (nonatomic,readonly) NSRegularExpression * validRegex;                      //@synthesize validRegex=_validRegex - In the implementation block
+(BOOL)supportsSecureCoding;
-(long long)maxLength;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)minLength;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)isNumeric;
-(NSCharacterSet *)characterSet;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)displayFormat;
-(NSString *)displayFormatPlaceholder;
-(BOOL)keepPaddingCharactersForSubmission;
-(NSRegularExpression *)validRegex;
-(BOOL)isValidCharacterSet;
@end

