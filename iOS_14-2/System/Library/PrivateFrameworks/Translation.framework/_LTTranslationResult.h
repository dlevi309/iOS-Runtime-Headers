/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSLocale, NSArray;

@interface _LTTranslationResult : NSObject <NSSecureCoding> {

	NSString* _identifier;
	NSLocale* _locale;
	NSArray* _translations;
	NSString* _sourceString;
	NSString* _sanitizedSourceString;
	long long _route;
	NSArray* _alignments;

}

@property (nonatomic,copy) NSString * identifier;                         //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSArray * translations;                        //@synthesize translations=_translations - In the implementation block
@property (nonatomic,copy) NSLocale * locale;                             //@synthesize locale=_locale - In the implementation block
@property (nonatomic,copy) NSString * sourceString;                       //@synthesize sourceString=_sourceString - In the implementation block
@property (nonatomic,copy) NSString * sanitizedSourceString;              //@synthesize sanitizedSourceString=_sanitizedSourceString - In the implementation block
@property (assign,nonatomic) long long route;                             //@synthesize route=_route - In the implementation block
@property (nonatomic,copy) NSArray * alignments;                          //@synthesize alignments=_alignments - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)resultWithLocale:(id)arg1 translations:(id)arg2 ;
+(id)passthroughResultWithString:(id)arg1 sanitizedString:(id)arg2 locale:(id)arg3 ;
-(void)setRoute:(long long)arg1 ;
-(NSLocale *)locale;
-(long long)route;
-(void)setLocale:(NSLocale *)arg1 ;
-(NSArray *)translations;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setSanitizedSourceString:(NSString *)arg1 ;
-(void)setAlignments:(NSArray *)arg1 ;
-(id)initWithOspreySpeechTranslationMTResponse:(id)arg1 ;
-(NSString *)sanitizedSourceString;
-(NSArray *)alignments;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithOspreyBatchResponse:(id)arg1 ;
-(void)setSourceString:(NSString *)arg1 ;
-(void)updateAlignmentWithSourceSpan:(id)arg1 targetSpan:(id)arg2 ;
-(id)initWithOspreyResponse:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setTranslations:(NSArray *)arg1 ;
-(NSString *)identifier;
-(NSString *)sourceString;
@end

