/*
* Generated on Thursday, January 14, 2021 at 2:25:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProofReader.framework/ProofReader
*/

#import <ProofReader/ProofReader-Structs.h>
#import <ProofReader/PRModification.h>

@class NSString;

@interface PRPinyinModification : PRModification {

	NSRange _range;
	NSString* _replacementString;
	unsigned long long _modificationType;
	NSRange _syllableRange;
	NSRange _additionalSyllableRange;
	double _modificationScore;
	unsigned long long _syllableCountScore;
	unsigned char _letters[7];
	BOOL _producesPartialSyllable;
	BOOL _isTemporary;

}
+(id)modificationsForInputString:(id)arg1 ;
+(id)finalModificationsForInputString:(id)arg1 ;
-(BOOL)isTemporary;
-(NSRange)range;
-(unsigned long long)modificationType;
-(id)description;
-(id)replacementString;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(id)initWithRange:(NSRange)arg1 replacementString:(id)arg2 modificationType:(unsigned long long)arg3 syllableRange:(NSRange)arg4 additionalSyllableRange:(NSRange)arg5 modificationScore:(double)arg6 syllableCountScore:(unsigned long long)arg7 syllableLetters:(const char*)arg8 producesPartialSyllable:(BOOL)arg9 ;
-(double)modificationScore;
-(unsigned long long)syllableCountScore;
-(NSRange)syllableRange;
-(NSRange)additionalSyllableRange;
-(BOOL)producesPartialSyllable;
-(id)initWithRange:(NSRange)arg1 replacementString:(id)arg2 modificationType:(unsigned long long)arg3 syllableRange:(NSRange)arg4 modificationScore:(double)arg5 syllableCountScore:(unsigned long long)arg6 syllableLetters:(const char*)arg7 producesPartialSyllable:(BOOL)arg8 ;
-(NSRange)combinedSyllableRange;
-(BOOL)_shouldAppendLetter:(unsigned char)arg1 ;
-(id)initWithRange:(NSRange)arg1 replacementString:(id)arg2 modificationType:(unsigned long long)arg3 syllableRange:(NSRange)arg4 additionalSyllableRange:(NSRange)arg5 modificationScore:(double)arg6 syllableCountScore:(unsigned long long)arg7 syllableLetters:(const char*)arg8 producesPartialSyllable:(BOOL)arg9 isTemporary:(BOOL)arg10 ;
-(id)initWithRange:(NSRange)arg1 replacementString:(id)arg2 modificationType:(unsigned long long)arg3 syllableRange:(NSRange)arg4 additionalSyllableRange:(NSRange)arg5 modificationScore:(double)arg6 ;
-(id)initWithRange:(NSRange)arg1 replacementString:(id)arg2 modificationType:(unsigned long long)arg3 syllableRange:(NSRange)arg4 modificationScore:(double)arg5 syllableCountScore:(unsigned long long)arg6 syllableLetters:(const char*)arg7 producesPartialSyllable:(BOOL)arg8 isTemporary:(BOOL)arg9 ;
-(id)initWithRange:(NSRange)arg1 replacementString:(id)arg2 modificationType:(unsigned long long)arg3 syllableRange:(NSRange)arg4 modificationScore:(double)arg5 isTemporary:(BOOL)arg6 ;
-(id)initWithRange:(NSRange)arg1 replacementString:(id)arg2 modificationType:(unsigned long long)arg3 syllableRange:(NSRange)arg4 modificationScore:(double)arg5 ;
@end

