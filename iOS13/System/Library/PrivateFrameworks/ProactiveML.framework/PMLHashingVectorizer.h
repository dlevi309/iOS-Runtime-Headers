/*
* Generated on Monday, March 1, 2021 at 2:33:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)normalize;
-(id)transform:(id)arg1 ;
-(id)toPlistWithChunks:(id)arg1 ;
-(id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3 ;
-(id)initWithBucketSize:(int)arg1 ngrams:(int)arg2 localeForNonwordTokens:(id)arg3 tokenizeNewlines:(BOOL)arg4 andIntercept:(BOOL)arg5 ;
-(id)initWithBucketSize:(int)arg1 characterNGramRange:(NSRange)arg2 tokenNGramRange:(NSRange)arg3 shouldNormalizeTokens:(BOOL)arg4 shouldNormalizeCharacters:(BOOL)arg5 localeForNonwordTokens:(id)arg6 tokenizeNewlines:(BOOL)arg7 withIntercept:(BOOL)arg8 ;
-(BOOL)isEqualToHashingVectorizer:(id)arg1 ;
-(void)setNormalize:(BOOL)arg1 ;
@end

