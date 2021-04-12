/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProofReader.framework/ProofReader
*/


#import <ProofReader/ProofReader-Structs.h>
@class NSMutableArray, PRErrorModel, NSArray;

@interface PRCandidateList : NSObject {

	NSMutableArray* _candidates;
	unsigned long long _maxCount;
	NSRange _defaultReplacementRange;
	PRErrorModel* _errorModel;
	NSArray* _capitalizationDictionaryArray;

}
-(void)dealloc;
-(id)description;
-(unsigned long long)count;
-(id)candidates;
-(unsigned long long)maxCount;
-(void)addCandidate:(id)arg1 ;
-(BOOL)isFull;
-(NSRange)defaultReplacementRange;
-(void)addCandidateWithBuffer:(char*)arg1 encoding:(unsigned)arg2 transform:(unsigned long long)arg3 errorType:(unsigned long long)arg4 ;
-(void)addCandidateWithBuffer:(char*)arg1 encoding:(unsigned)arg2 errorType:(unsigned long long)arg3 ;
-(void)addReplacementCandidateWithBuffer:(char*)arg1 encoding:(unsigned)arg2 transform:(unsigned long long)arg3 intendedCharacter:(unsigned short)arg4 actualCharacter:(unsigned short)arg5 ;
-(void)addTranspositionCandidateWithBuffer:(char*)arg1 encoding:(unsigned)arg2 transform:(unsigned long long)arg3 intendedFirstCharacter:(unsigned short)arg4 intendedSecondCharacter:(unsigned short)arg5 ;
-(id)initWithMaxCount:(unsigned long long)arg1 defaultReplacementRange:(NSRange)arg2 customErrorModel:(id)arg3 capitalizationDictionaryArray:(id)arg4 ;
-(void)addCandidateWithString:(id)arg1 errorType:(unsigned long long)arg2 ;
-(void)addCandidateWithWords:(id)arg1 replacementRange:(NSRange)arg2 errorType:(unsigned long long)arg3 ;
-(void)addCandidateWithString:(id)arg1 replacementRange:(NSRange)arg2 errorType:(unsigned long long)arg3 ;
-(id)candidateStrings;
-(id)candidateWithString:(id)arg1 ;
@end

