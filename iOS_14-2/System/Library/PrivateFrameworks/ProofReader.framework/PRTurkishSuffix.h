/*
* Generated on Thursday, January 14, 2021 at 2:25:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProofReader.framework/ProofReader
*/


#import <ProofReader/ProofReader-Structs.h>
@class NSString;

@interface PRTurkishSuffix : NSObject {

	NSString* _pattern;
	NSString* _name;
	unsigned char _patternBuffer[16];
	unsigned char _isOptional[16];
	unsigned long long _patternBufferLength;
	int _suffixType;
	BOOL _postponesApostrophe;

}
+(id)standardTurkishNounSuffixes;
+(id)standardTurkishVerbSuffixes;
+(id)standardTurkishSuffixes;
+(void)_enumerateSuffixMatchesForBuffer:(char*)arg1 length:(unsigned long long)arg2 followedByLetter:(unsigned char)arg3 options:(unsigned long long)arg4 depth:(unsigned long long)arg5 matchState:(int)arg6 suffixStack:(id*)arg7 suffixRangeStack:(NSRange*)arg8 usingBlock:(/*^block*/id)arg9 ;
+(void)enumerateSuffixMatchesForBuffer:(char*)arg1 length:(unsigned long long)arg2 options:(unsigned long long)arg3 usingBlock:(/*^block*/id)arg4 ;
+(void)enumerateSuffixMatchesForWord:(id)arg1 options:(unsigned long long)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)name;
-(id)description;
-(id)pattern;
-(void)dealloc;
-(void)_fillPatternBuffer;
-(int)suffixType;
-(BOOL)postponesApostrophe;
-(id)initWithPattern:(id)arg1 name:(id)arg2 type:(int)arg3 postponesApostrophe:(BOOL)arg4 ;
-(unsigned long long)matchingIndexInBuffer:(char*)arg1 length:(unsigned long long)arg2 followedByLetter:(unsigned char)arg3 matchWithNameOnly:(BOOL*)arg4 ;
@end

