/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSLocale;

@interface AXMLanguage : NSObject <NSSecureCoding> {

	NSString* _primaryComponent;
	NSString* _secondaryComponent;
	NSString* _languageCode;
	NSLocale* _locale;

}

@property (nonatomic,retain) NSString * primaryComponent;                   //@synthesize primaryComponent=_primaryComponent - In the implementation block
@property (nonatomic,retain) NSString * secondaryComponent;                 //@synthesize secondaryComponent=_secondaryComponent - In the implementation block
@property (nonatomic,retain) NSString * languageCode;                       //@synthesize languageCode=_languageCode - In the implementation block
@property (nonatomic,retain) NSLocale * locale;                             //@synthesize locale=_locale - In the implementation block
@property (nonatomic,readonly) NSString * languageDisplayName; 
+(void)initialize;
+(BOOL)supportsSecureCoding;
+(void)_updateDefaultLanguages;
+(id)currentSystemLanguage;
+(id)currentLocaleLanguage;
+(id)languageCodesForLanguages:(id)arg1 ;
+(BOOL)languageInSet:(id)arg1 isSupertypeOfLanguage:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setLocale:(NSLocale *)arg1 ;
-(NSLocale *)locale;
-(NSString *)languageCode;
-(id)initWithLocale:(id)arg1 ;
-(void)setLanguageCode:(NSString *)arg1 ;
-(id)initWithLanguageCode:(id)arg1 ;
-(BOOL)isSupertypeOfLanguage:(id)arg1 ;
-(NSString *)primaryComponent;
-(NSString *)secondaryComponent;
-(BOOL)isSubtypeOfLanguage:(id)arg1 ;
-(BOOL)isEqualToAXMLanguage:(id)arg1 ;
-(void)setPrimaryComponent:(NSString *)arg1 ;
-(void)setSecondaryComponent:(NSString *)arg1 ;
-(NSString *)languageDisplayName;
@end

