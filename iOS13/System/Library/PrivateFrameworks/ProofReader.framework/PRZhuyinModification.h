/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProofReader.framework/ProofReader
*/

#import <ProofReader/ProofReader-Structs.h>
#import <ProofReader/PRModification.h>

@class NSString;

@interface PRZhuyinModification : PRModification {

	NSRange _range;
	NSString* _replacementString;
	unsigned long long _modificationType;
	NSRange _syllableRange;
	NSRange _additionalSyllableRange;
	double _modificationScore;
	unsigned long long _syllableCountScore;
	unsigned char _letters[5];
	BOOL _producesPartialSyllable;

}
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSRange)range;
-(id)replacementString;
-(unsigned long long)modificationType;
-(NSRange)syllableRange;
-(double)modificationScore;
-(NSRange)additionalSyllableRange;
-(id)initWithRange:(NSRange)arg1 replacementString:(id)arg2 modificationType:(unsigned long long)arg3 syllableRange:(NSRange)arg4 additionalSyllableRange:(NSRange)arg5 modificationScore:(double)arg6 syllableCountScore:(unsigned long long)arg7 syllableLetters:(const char*)arg8 producesPartialSyllable:(BOOL)arg9 ;
-(unsigned long long)syllableCountScore;
-(BOOL)producesPartialSyllable;
-(id)initWithRange:(NSRange)arg1 replacementString:(id)arg2 modificationType:(unsigned long long)arg3 syllableRange:(NSRange)arg4 modificationScore:(double)arg5 syllableCountScore:(unsigned long long)arg6 syllableLetters:(const char*)arg7 producesPartialSyllable:(BOOL)arg8 ;
-(NSRange)combinedSyllableRange;
-(BOOL)_shouldAppendLetter:(unsigned char)arg1 ;
@end

