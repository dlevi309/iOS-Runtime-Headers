/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSLocale, NSCountedSet;

@interface _LTTextLanguageDetectionResult : NSObject <NSSecureCoding> {

	NSLocale* _dominantLocale;
	NSCountedSet* _localeDetectionCount;
	NSCountedSet* _unsupportedLanguageCounts;

}

@property (nonatomic,copy,readonly) NSLocale * dominantLocale;                             //@synthesize dominantLocale=_dominantLocale - In the implementation block
@property (nonatomic,copy,readonly) NSCountedSet * localeDetectionCount;                   //@synthesize localeDetectionCount=_localeDetectionCount - In the implementation block
@property (nonatomic,copy,readonly) NSCountedSet * unsupportedLanguageCounts;              //@synthesize unsupportedLanguageCounts=_unsupportedLanguageCounts - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDetectedLocales:(id)arg1 unknownLanguages:(id)arg2 ;
-(id)initWithDetectionCounts:(id)arg1 availableLocales:(id)arg2 ;
-(NSLocale *)dominantLocale;
-(NSCountedSet *)localeDetectionCount;
-(NSCountedSet *)unsupportedLanguageCounts;
-(id)initWithCoder:(id)arg1 ;
@end

