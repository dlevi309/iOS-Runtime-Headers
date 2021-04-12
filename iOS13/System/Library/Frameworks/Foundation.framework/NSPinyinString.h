/*
* Generated on Monday, March 1, 2021 at 2:30:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSString.h>

@class NSString;

@interface NSPinyinString : NSString {

	NSString* _string;
	unsigned long long _syllableCount;
	unsigned long long _score;
	unsigned long long _rangeCount;
	unsigned long long _replacementCount;
	unsigned long long _transpositionCount;
	unsigned long long _insertionCount;
	unsigned long long _deletionCount;
	unsigned long long _firstModificationIndex;
	NSRange* _ranges;
	BOOL _lastSyllableIsPartial;

}
+(id)alternativesForInputString:(id)arg1 ;
+(id)prefixesForInputString:(id)arg1 ;
-(id)string;
-(void)dealloc;
-(unsigned long long)length;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned short)characterAtIndex:(unsigned long long)arg1 ;
-(Class)classForCoder;
-(id)initWithString:(id)arg1 syllableCount:(unsigned long long)arg2 lastSyllableIsPartial:(BOOL)arg3 score:(unsigned long long)arg4 replacementCount:(unsigned long long)arg5 transpositionCount:(unsigned long long)arg6 insertionCount:(unsigned long long)arg7 deletionCount:(unsigned long long)arg8 indexOfFirstModification:(unsigned long long)arg9 rangeCount:(unsigned long long)arg10 ranges:(NSRange*)arg11 ;
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
-(id)initWithString:(id)arg1 syllableCount:(unsigned long long)arg2 lastSyllableIsPartial:(BOOL)arg3 score:(unsigned long long)arg4 replacementCount:(unsigned long long)arg5 transpositionCount:(unsigned long long)arg6 insertionCount:(unsigned long long)arg7 deletionCount:(unsigned long long)arg8 rangeCount:(unsigned long long)arg9 ranges:(NSRange*)arg10 ;
@end

