/*
* Generated on Thursday, January 14, 2021 at 2:28:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
*/

#import <ProactiveML/ProactiveML-Structs.h>
#import <libobjc.A.dylib/PMLTransformerProtocol.h>

@class NSLocale, NSString;

@interface PMLHashingVectorizer : NSObject <PMLTransformerProtocol> {

	int _buckets;
	BOOL _normalize;
	NSRange _characterNGramRange;
	NSRange _tokenNGramRange;
	BOOL _shouldNormalizeTokens;
	BOOL _shouldNormalizeCharacters;
	NSLocale* _localeForNonwordTokens;
	BOOL _tokenizeNewlines;
	BOOL _intercept;

}

@property (assign,nonatomic) BOOL normalize;                        //@synthesize normalize=_normalize - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)withBucketSize:(int)arg1 andNgrams:(int)arg2 ;
+(id)withBucketSize:(int)arg1 characterNGramRange:(NSRange)arg2 tokenNGramRange:(NSRange)arg3 shouldNormalizeTokens:(BOOL)arg4 shouldNormalizeCharacters:(BOOL)arg5 localeForNonwordTokens:(id)arg6 tokenizeNewlines:(BOOL)arg7 withIntercept:(BOOL)arg8 ;
+(id)withBucketSize:(int)arg1 ngrams:(int)arg2 localeForNonwordTokens:(id)arg3 tokenizeNewlines:(BOOL)arg4 andIntercept:(BOOL)arg5 ;
+(id)withBucketSize:(int)arg1 characterNGramRange:(NSRange)arg2 tokenNGramRange:(NSRange)arg3 shouldNormalizeTokens:(BOOL)arg4 shouldNormalizeCharacters:(BOOL)arg5 withIntercept:(BOOL)arg6 ;
-(id)init;
-(BOOL)normalize;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(id)transform:(id)arg1 ;
-(id)toPlistWithChunks:(id)arg1 ;
-(id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3 ;
-(void)setNormalize:(BOOL)arg1 ;
-(id)transformBatch:(id)arg1 ;
-(id)initWithBucketSize:(int)arg1 ngrams:(int)arg2 localeForNonwordTokens:(id)arg3 tokenizeNewlines:(BOOL)arg4 andIntercept:(BOOL)arg5 ;
-(id)initWithBucketSize:(int)arg1 characterNGramRange:(NSRange)arg2 tokenNGramRange:(NSRange)arg3 shouldNormalizeTokens:(BOOL)arg4 shouldNormalizeCharacters:(BOOL)arg5 localeForNonwordTokens:(id)arg6 tokenizeNewlines:(BOOL)arg7 withIntercept:(BOOL)arg8 ;
-(BOOL)isEqualToHashingVectorizer:(id)arg1 ;
@end

