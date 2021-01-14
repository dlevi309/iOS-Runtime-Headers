/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
*/

#import <TextInput/TextInput-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSLocale, NSString;

@interface TISmartPunctuationOptions : NSObject <NSCopying, NSSecureCoding> {

	NSLocale* _locale;
	NSString* _leftSingleQuote;
	NSString* _rightSingleQuote;
	NSString* _apostrophe;
	NSString* _leftDoubleQuote;
	NSString* _rightDoubleQuote;

}

@property (nonatomic,copy) NSString * leftSingleQuote;               //@synthesize leftSingleQuote=_leftSingleQuote - In the implementation block
@property (nonatomic,copy) NSString * rightSingleQuote;              //@synthesize rightSingleQuote=_rightSingleQuote - In the implementation block
@property (nonatomic,copy) NSString * apostrophe;                    //@synthesize apostrophe=_apostrophe - In the implementation block
@property (nonatomic,copy) NSString * leftDoubleQuote;               //@synthesize leftDoubleQuote=_leftDoubleQuote - In the implementation block
@property (nonatomic,copy) NSString * rightDoubleQuote;              //@synthesize rightDoubleQuote=_rightDoubleQuote - In the implementation block
@property (nonatomic,readonly) NSLocale * locale;                    //@synthesize locale=_locale - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)smartPunctuationOptionsForLocale:(id)arg1 ;
-(id)initWithLocale:(id)arg1 ;
-(NSLocale *)locale;
-(void)setRightDoubleQuote:(NSString *)arg1 ;
-(NSString *)rightDoubleQuote;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSString *)apostrophe;
-(void)setLeftDoubleQuote:(NSString *)arg1 ;
-(void)_generateDataFromLocale;
-(void)setRightSingleQuote:(NSString *)arg1 ;
-(NSString *)rightSingleQuote;
-(void)setApostrophe:(NSString *)arg1 ;
-(void)setLeftSingleQuote:(NSString *)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)leftDoubleQuote;
-(NSString *)leftSingleQuote;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

