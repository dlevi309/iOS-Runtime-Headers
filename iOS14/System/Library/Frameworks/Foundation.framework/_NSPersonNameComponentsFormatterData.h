/*
* Generated on Thursday, January 14, 2021 at 2:20:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSLocale, NPNameParser;

@interface _NSPersonNameComponentsFormatterData : NSObject <NSCopying, NSSecureCoding> {

	long long _style;
	BOOL _phonetic;
	BOOL _forceFamilyNameFirst;
	BOOL _forceGivenNameFirst;
	BOOL _ignoresFallbacks;
	NSLocale* _locale;
	NPNameParser* _nameParser;

}

@property (assign) long long style;                        //@synthesize style=_style - In the implementation block
@property (assign) BOOL phonetic;                          //@synthesize phonetic=_phonetic - In the implementation block
@property (assign) BOOL forceFamilyNameFirst;              //@synthesize forceFamilyNameFirst=_forceFamilyNameFirst - In the implementation block
@property (assign) BOOL forceGivenNameFirst;               //@synthesize forceGivenNameFirst=_forceGivenNameFirst - In the implementation block
@property (assign) BOOL ignoresFallbacks;                  //@synthesize ignoresFallbacks=_ignoresFallbacks - In the implementation block
@property (copy) NSLocale * locale;                        //@synthesize locale=_locale - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSLocale *)locale;
-(void)setLocale:(NSLocale *)arg1 ;
-(void)setPhonetic:(BOOL)arg1 ;
-(void)setForceGivenNameFirst:(BOOL)arg1 ;
-(void)setIgnoresFallbacks:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)forceGivenNameFirst;
-(BOOL)forceFamilyNameFirst;
-(BOOL)phonetic;
-(void)setForceFamilyNameFirst:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setStyle:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)style;
-(BOOL)ignoresFallbacks;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

