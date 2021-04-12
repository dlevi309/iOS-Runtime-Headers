/*
* Generated on Thursday, January 14, 2021 at 2:23:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSLocale, NSString;

@interface _LTSpeechTranscription : NSObject <NSSecureCoding> {

	BOOL _lowConfidence;
	NSLocale* _locale;
	NSString* _formattedString;
	NSString* _sanitizedFormattedString;
	double _minConfidence;
	double _maxConfidence;
	double _confidence;

}

@property (nonatomic,copy) NSLocale * locale;                                        //@synthesize locale=_locale - In the implementation block
@property (assign,nonatomic) double confidence;                                      //@synthesize confidence=_confidence - In the implementation block
@property (assign,nonatomic) double minConfidence;                                   //@synthesize minConfidence=_minConfidence - In the implementation block
@property (assign,nonatomic) double maxConfidence;                                   //@synthesize maxConfidence=_maxConfidence - In the implementation block
@property (nonatomic,copy) NSString * formattedString;                               //@synthesize formattedString=_formattedString - In the implementation block
@property (assign,getter=isLowConfidence,nonatomic) BOOL lowConfidence;              //@synthesize lowConfidence=_lowConfidence - In the implementation block
@property (nonatomic,copy) NSString * sanitizedFormattedString;                      //@synthesize sanitizedFormattedString=_sanitizedFormattedString - In the implementation block
+(BOOL)supportsSecureCoding;
-(double)confidence;
-(NSLocale *)locale;
-(void)setLocale:(NSLocale *)arg1 ;
-(void)setFormattedString:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setSanitizedFormattedString:(NSString *)arg1 ;
-(BOOL)isLowConfidence;
-(void)setLowConfidence:(BOOL)arg1 ;
-(NSString *)sanitizedFormattedString;
-(double)minConfidence;
-(double)maxConfidence;
-(void)setConfidence:(double)arg1 ;
-(void)setMinConfidence:(double)arg1 ;
-(void)setMaxConfidence:(double)arg1 ;
-(id)initWithRecognitionChoice:(id)arg1 inSausage:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFormattedString:(id)arg1 locale:(id)arg2 confidence:(double)arg3 minConfidence:(double)arg4 maxConfidence:(double)arg5 ;
-(NSString *)formattedString;
@end

