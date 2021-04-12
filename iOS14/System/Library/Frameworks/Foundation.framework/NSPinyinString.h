/*
* Generated on Thursday, January 14, 2021 at 2:20:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithString:(id)arg1 syllableCount:(unsigned long long)arg2 lastSyllableIsPartial:(BOOL)arg3 score:(unsigned long long)arg4 replacementCount:(unsigned long long)arg5 transpositionCount:(unsigned long long)arg6 insertionCount:(unsigned long long)arg7 deletionCount:(unsigned long long)arg8 indexOfFirstModification:(unsigned long long)arg9 rangeCount:(unsigned long long)arg10 ranges:(NSRange*)arg11 ;
-(id)initWithString:(id)arg1 syllableCount:(unsigned long long)arg2 lastSyllableIsPartial:(BOOL)arg3 score:(unsigned long long)arg4 replacementCount:(unsigned long long)arg5 transpositionCount:(unsigned long long)arg6 insertionCount:(unsigned long long)arg7 deletionCount:(unsigned long long)arg8 rangeCount:(unsigned long long)arg9 ranges:(NSRange*)arg10 ;
-(unsigned short)characterAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)score;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)length;
-(id)description;
-(unsigned long long)syllableCount;
-(Class)classForCoder;
-(unsigned long long)indexOfFirstModification;
-(unsigned long long)numberOfReplacements;
-(unsigned long long)numberOfDeletions;
-(id)nonPinyinIndexSet;
-(BOOL)lastSyllableIsPartial;
-(unsigned long long)numberOfTranspositions;
-(NSRange)nonPinyinRangeAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)numberOfInsertions;
-(id)string;
-(unsigned long long)numberOfNonPinyinRanges;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

