/*
* Generated on Thursday, January 14, 2021 at 2:25:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProofReader.framework/ProofReader
*/


#import <ProofReader/ProofReader-Structs.h>
@class NSArray;

@interface PRCandidate : NSObject {

	NSArray* _candidateWords;
	NSRange _replacementRange;
	double _errorScore;
	double _lmScore;
	BOOL _blocklisted;
	BOOL _hasCustomErrorScore;

}
+(id)candidateWithString:(id)arg1 replacementRange:(NSRange)arg2 errorScore:(double)arg3 ;
+(id)candidateWithBuffer:(char*)arg1 encoding:(unsigned)arg2 transform:(unsigned long long)arg3 replacementRange:(NSRange)arg4 errorScore:(double)arg5 capitalizationDictionaryArray:(id)arg6 ;
+(id)candidateWithWords:(id)arg1 replacementRange:(NSRange)arg2 errorScore:(double)arg3 ;
+(id)candidateWithWords:(id)arg1 replacementRange:(NSRange)arg2 errorType:(unsigned long long)arg3 errorModel:(id)arg4 ;
+(id)candidateWithString:(id)arg1 replacementRange:(NSRange)arg2 errorType:(unsigned long long)arg3 errorModel:(id)arg4 ;
+(id)replacementCandidateWithString:(id)arg1 replacementRange:(NSRange)arg2 intendedCharacter:(unsigned short)arg3 actualCharacter:(unsigned short)arg4 errorModel:(id)arg5 ;
+(id)transpositionCandidateWithString:(id)arg1 replacementRange:(NSRange)arg2 intendedFirstCharacter:(unsigned short)arg3 intendedSecondCharacter:(unsigned short)arg4 errorModel:(id)arg5 ;
+(id)candidateWithBuffer:(char*)arg1 encoding:(unsigned)arg2 transform:(unsigned long long)arg3 replacementRange:(NSRange)arg4 errorType:(unsigned long long)arg5 errorModel:(id)arg6 capitalizationDictionaryArray:(id)arg7 ;
+(id)replacementCandidateWithBuffer:(char*)arg1 encoding:(unsigned)arg2 transform:(unsigned long long)arg3 replacementRange:(NSRange)arg4 intendedCharacter:(unsigned short)arg5 actualCharacter:(unsigned short)arg6 errorModel:(id)arg7 capitalizationDictionaryArray:(id)arg8 ;
+(id)transpositionCandidateWithBuffer:(char*)arg1 encoding:(unsigned)arg2 transform:(unsigned long long)arg3 replacementRange:(NSRange)arg4 intendedFirstCharacter:(unsigned short)arg5 intendedSecondCharacter:(unsigned short)arg6 errorModel:(id)arg7 capitalizationDictionaryArray:(id)arg8 ;
-(double)score;
-(NSRange)replacementRange;
-(id)description;
-(id)string;
-(void)dealloc;
-(unsigned long long)numberOfWords;
-(id)candidateWords;
-(void)setLanguageModelScore:(double)arg1 ;
-(void)setBlocklisted:(BOOL)arg1 ;
-(BOOL)isBlocklisted;
-(id)initWithCandidateWords:(id)arg1 replacementRange:(NSRange)arg2 errorScore:(double)arg3 ;
-(id)initWithString:(id)arg1 replacementRange:(NSRange)arg2 errorScore:(double)arg3 ;
-(void)setCustomErrorScore:(BOOL)arg1 ;
-(double)errorScore;
-(double)languageModelScore;
-(void)setErrorScore:(double)arg1 ;
-(BOOL)hasCustomErrorScore;
@end

