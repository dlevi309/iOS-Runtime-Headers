/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProofReader.framework/ProofReader
*/

#import <ProofReader/ProofReader-Structs.h>
#import <Foundation/NSPinyinString.h>

@interface PRPinyinString : NSPinyinString {

	unsigned long long _originalLength;
	unsigned long long _originalCheckedLength;
	unsigned long long _modificationCount;
	unsigned long long* _modificationTypes;
	NSRange* _originalRanges;
	NSRange* _finalRanges;
	NSRange* _originalSyllableRanges;
	NSRange* _originalAdditionalSyllableRanges;

}
+(id)alternativesForInputString:(id)arg1 ;
+(id)prefixesForInputString:(id)arg1 ;
+(id)correctionsForInputString:(id)arg1 ;
-(id)string;
-(void)dealloc;
-(unsigned long long)length;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned short)characterAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)syllableCount;
-(BOOL)lastSyllableIsPartial;
-(unsigned long long)score;
-(unsigned long long)numberOfNonPinyinRanges;
-(unsigned long long)numberOfReplacements;
-(unsigned long long)numberOfTranspositions;
-(unsigned long long)numberOfInsertions;
-(unsigned long long)numberOfDeletions;
-(unsigned long long)indexOfFirstModification;
-(NSRange)nonPinyinRangeAtIndex:(unsigned long long)arg1 ;
-(id)nonPinyinIndexSet;
-(unsigned long long)numberOfModifications;
-(unsigned long long)typeOfModificationAtIndex:(unsigned long long)arg1 ;
-(NSRange)originalRangeForModificationAtIndex:(unsigned long long)arg1 ;
-(NSRange)finalRangeForModificationAtIndex:(unsigned long long)arg1 ;
-(NSRange)originalSyllableRangeForModificationAtIndex:(unsigned long long)arg1 ;
-(NSRange)originalAdditionalSyllableRangeForModificationAtIndex:(unsigned long long)arg1 ;
-(id)annotatedString;
-(unsigned long long)originalLength;
-(unsigned long long)originalCheckedLength;
-(id)initWithString:(id)arg1 syllableCount:(unsigned long long)arg2 lastSyllableIsPartial:(BOOL)arg3 score:(unsigned long long)arg4 originalLength:(unsigned long long)arg5 modificationType:(unsigned long long)arg6 originalModificationRange:(NSRange)arg7 finalModificationRange:(NSRange)arg8 ;
-(id)initWithString:(id)arg1 syllableCount:(unsigned long long)arg2 lastSyllableIsPartial:(BOOL)arg3 score:(unsigned long long)arg4 originalLength:(unsigned long long)arg5 modificationType:(unsigned long long)arg6 originalModificationRange:(NSRange)arg7 finalModificationRange:(NSRange)arg8 originalSyllableRange:(NSRange)arg9 ;
-(id)initWithString:(id)arg1 syllableCount:(unsigned long long)arg2 lastSyllableIsPartial:(BOOL)arg3 score:(unsigned long long)arg4 originalLength:(unsigned long long)arg5 modificationType:(unsigned long long)arg6 originalModificationRange:(NSRange)arg7 finalModificationRange:(NSRange)arg8 originalSyllableRange:(NSRange)arg9 originalAdditionalSyllableRange:(NSRange)arg10 ;
-(id)initWithUncheckedString:(id)arg1 score:(unsigned long long)arg2 originalLength:(unsigned long long)arg3 ;
-(id)initWithString:(id)arg1 syllableCount:(unsigned long long)arg2 lastSyllableIsPartial:(BOOL)arg3 score:(unsigned long long)arg4 originalLength:(unsigned long long)arg5 originalCheckedLength:(unsigned long long)arg6 numberOfModifications:(unsigned long long)arg7 modificationTypes:(unsigned long long*)arg8 originalModificationRanges:(NSRange*)arg9 finalModificationRanges:(NSRange*)arg10 originalSyllableRanges:(NSRange*)arg11 originalAdditionalSyllableRanges:(NSRange*)arg12 ;
-(unsigned long long)finalCheckedLength;
@end
