/*
* Generated on Monday, March 1, 2021 at 2:33:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
*/

#import <ProactiveML/ProactiveML-Structs.h>
#import <libobjc.A.dylib/PMLTransformerProtocol.h>

@class PMLLexicon, NSCharacterSet, NSString;

@interface PMLFastTextVectorizer : NSObject <PMLTransformerProtocol> {

	PMLLexicon* _lexicon;
	unsigned long long _featureVectorLength;
	unsigned long long _vocabSize;
	unsigned long long _bucketSize;
	NSRange _characterNGramRange;
	unsigned long long _maxTokenNGramLength;
	NSCharacterSet* _splitCharacterSet;
	unsigned long long _maxTokenLength;
	NSString* _bow;
	NSString* _eow;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)transform:(id)arg1 ;
-(id)toPlistWithChunks:(id)arg1 ;
-(id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3 ;
-(id)initWithLexiconPath:(id)arg1 bucketSize:(unsigned long long)arg2 characterNGramRange:(NSRange)arg3 maxTokenNGramLength:(unsigned long long)arg4 featureVectorLength:(unsigned long long)arg5 maxTokenLength:(unsigned long long)arg6 bow:(id)arg7 eow:(id)arg8 ;
-(id)initWithLexicon:(id)arg1 bucketSize:(unsigned long long)arg2 characterNGramRange:(NSRange)arg3 maxTokenNGramLength:(unsigned long long)arg4 featureVectorLength:(unsigned long long)arg5 maxTokenLength:(unsigned long long)arg6 bow:(id)arg7 eow:(id)arg8 ;
-(unsigned long long)_getVocabSize;
-(unsigned long long)_hashUniCharToBucket:(const unsigned short*)arg1 len:(int)arg2 ;
-(id)_splitTextToTokens:(id)arg1 ;
-(void)_addCharacterNGramHashesToCounter:(id)arg1 tokenIndices:(id)arg2 ;
-(void)_addTokenNGramHashesToCounter:(id)arg1 tokenIndices:(id)arg2 ;
@end

