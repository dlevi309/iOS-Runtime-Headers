/*
* Generated on Thursday, January 14, 2021 at 2:27:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
*/

#import <CorePDF/CorePDF-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/CPCopying.h>
#import <libobjc.A.dylib/CPDisposable.h>

@class CPMemoryOwner;

@interface CPCharSequence : NSObject <NSCopying, CPCopying, CPDisposable> {

	unsigned length;
	CPPDFChar* charArray;
	unsigned previousSize;
	unsigned size;
	CPMemoryOwner* sharedMemory;
	BOOL wasMerged;

}
-(CGRect)bounds;
-(void)finalize;
-(unsigned)length;
-(void)dispose;
-(void)resize:(unsigned)arg1 ;
-(void)sortBy:(/*function pointer*/void*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CPPDFChar*)charAtIndex:(unsigned)arg1 ;
-(void)dealloc;
-(id)initSuper;
-(BOOL)map:(/*function pointer*/void*)arg1 passing:(void*)arg2 ;
-(id)newSubsequenceFrom:(unsigned)arg1 length:(unsigned)arg2 ;
-(void)removeFrom:(unsigned)arg1 ;
-(id)initWithSizeFor:(unsigned)arg1 ;
-(void)addChar:(CPPDFChar*)arg1 ;
-(BOOL)wasMerged;
-(BOOL)removeSubsequences:(id)arg1 whereTrue:(/*function pointer*/void*)arg2 passing:(void*)arg3 ;
-(void)sortByAnchorYDecreasingXIncreasing;
-(void)splitToSubsequences:(id)arg1 whereTrue:(/*function pointer*/void*)arg2 passing:(void*)arg3 ;
-(void)mergeByAnchorXIncreasingYDecreasing:(id)arg1 ;
-(BOOL)map:(/*function pointer*/void*)arg1 whereNeighborsWith:(id)arg2 passing:(void*)arg3 ;
-(void)removeAllChars;
-(void)merge:(id)arg1 by:(/*function pointer*/void*)arg2 ;
-(CGRect)boundsFrom:(unsigned)arg1 length:(unsigned)arg2 ;
-(id)initWithChars:(CPPDFChar*)arg1 length:(unsigned)arg2 ;
-(CPPDFChar*)charArray;
-(void)addChars:(CPPDFChar*)arg1 length:(unsigned)arg2 ;
-(void)addChars:(CPPDFChar*)arg1 length:(unsigned)arg2 ifTrue:(/*function pointer*/void*)arg3 passing:(void*)arg4 ;
-(void)addCharsFromSequence:(id)arg1 ;
-(void)removeChar;
-(void)replaceCharAtIndex:(unsigned)arg1 withChar:(CPPDFChar*)arg2 ;
-(void)removeCharAtIndex:(unsigned)arg1 ;
-(void)sortByAnchorXIncreasingYDecreasing;
-(void)mergeByAnchorYDecreasingXIncreasing:(id)arg1 ;
-(void)copyToSubsequence:(id)arg1 from:(unsigned)arg2 length:(unsigned)arg3 ;
-(void)copyToSubsequence:(id)arg1 ifTrue:(/*function pointer*/void*)arg2 passing:(void*)arg3 ;
-(BOOL)removeToSubsequence:(id)arg1 ifTrue:(/*function pointer*/void*)arg2 passing:(void*)arg3 ;
-(BOOL)mapWithIndex:(/*function pointer*/void*)arg1 passing:(void*)arg2 ;
-(BOOL)mapWithIndex:(/*function pointer*/void*)arg1 from:(unsigned)arg2 length:(unsigned)arg3 passing:(void*)arg4 ;
-(BOOL)mapToPairs:(/*function pointer*/void*)arg1 passing:(void*)arg2 ;
-(BOOL)mapToPairsWithIndex:(/*function pointer*/void*)arg1 passing:(void*)arg2 ;
@end

