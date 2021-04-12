/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray, _LTTranslationStatistics;

@interface _LTTranslationCandidate : NSObject <NSSecureCoding> {

	BOOL _lowConfidence;
	NSString* _formattedString;
	NSString* _sanitizedFormattedString;
	double _confidence;
	NSArray* _preToPostITN;
	NSArray* _tokens;
	NSArray* _senses;
	_LTTranslationStatistics* _statistics;
	NSArray* _proToPostITN;

}

@property (assign,nonatomic) double confidence;                                      //@synthesize confidence=_confidence - In the implementation block
@property (assign,getter=isLowConfidence,nonatomic) BOOL lowConfidence;              //@synthesize lowConfidence=_lowConfidence - In the implementation block
@property (nonatomic,copy) NSArray * tokens;                                         //@synthesize tokens=_tokens - In the implementation block
@property (nonatomic,copy) NSString * formattedString;                               //@synthesize formattedString=_formattedString - In the implementation block
@property (nonatomic,copy) NSString * sanitizedFormattedString;                      //@synthesize sanitizedFormattedString=_sanitizedFormattedString - In the implementation block
@property (nonatomic,copy) NSArray * proToPostITN;                                   //@synthesize proToPostITN=_proToPostITN - In the implementation block
@property (nonatomic,copy) NSArray * senses;                                         //@synthesize senses=_senses - In the implementation block
@property (nonatomic,copy) _LTTranslationStatistics * statistics;                    //@synthesize statistics=_statistics - In the implementation block
@property (nonatomic,readonly) NSArray * preToPostITN;                               //@synthesize preToPostITN=_preToPostITN - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setTokens:(NSArray *)arg1 ;
-(double)confidence;
-(NSArray *)tokens;
-(void)setFormattedString:(NSString *)arg1 ;
-(_LTTranslationStatistics *)statistics;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)senses;
-(void)setStatistics:(_LTTranslationStatistics *)arg1 ;
-(void)updateWithEngineMeta:(id)arg1 locale:(id)arg2 ;
-(id)initWithOspreyPhrase:(id)arg1 ;
-(id)initWithOspreyMtResponsePhrase:(id)arg1 locale:(id)arg2 ;
-(void)setSanitizedFormattedString:(NSString *)arg1 ;
-(BOOL)isLowConfidence;
-(void)setLowConfidence:(BOOL)arg1 ;
-(id)initWithFormattedString:(id)arg1 sanitizedFormattedString:(id)arg2 confidence:(double)arg3 lowConfidence:(BOOL)arg4 tokens:(id)arg5 preToPostITN:(id)arg6 ;
-(NSString *)sanitizedFormattedString;
-(void)setConfidence:(double)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)preToPostITN;
-(NSArray *)proToPostITN;
-(void)setProToPostITN:(NSArray *)arg1 ;
-(NSString *)formattedString;
-(void)setSenses:(NSArray *)arg1 ;
@end

