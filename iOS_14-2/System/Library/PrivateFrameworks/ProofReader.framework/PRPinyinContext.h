/*
* Generated on Thursday, January 14, 2021 at 2:25:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProofReader.framework/ProofReader
*/

#import <ProofReader/ProofReader-Structs.h>
#import <ProofReader/PRAutocorrectionContext.h>

@class NSMutableArray;

@interface PRPinyinContext : PRAutocorrectionContext {

	NSMutableArray* _modifications;
	NSMutableArray* _addedModifications;
	NSMutableArray* _removedModifications;
	NSMutableArray* _addedRemovedModifications;
	NSMutableArray* _prefixes;
	NSMutableArray* _guesses;
	NSMutableArray* _completions;
	NSMutableArray* _corrections;
	char* _buffer;
	char* _altBuffer;
	char* _altBufferScores;
	NSMutableArray* _geometryDataArray;
	unsigned long long* _syllableLengthArray;
	void* _connection;
	unsigned long long _length;
	unsigned long long _lengthBeforeApostrophes;
	unsigned long long _startingPoint;
	unsigned long long _lastIndexes[4];
	unsigned long long _nextIndexes[2];
	unsigned long long _startIndex;
	unsigned long long _endIndex;
	unsigned long long _abbreviatedSyllableCount;
	unsigned long long _previouslyAnalyzedLength;
	double _validSequenceCorrectionThreshold;
	BOOL _lastSyllableIsPartial;

}
-(id)init;
-(id)description;
-(id)guesses;
-(id)correction;
-(void)reset;
-(id)prefixes;
-(id)completions;
-(void)dealloc;
-(void)_removeModificationsAndMoveStartingPoint;
-(void)_advanceIndexes;
-(void)_addTranspositions;
-(void)_addReplacements;
-(void)_addDeletions;
-(void)_filterModifications;
-(void)addInputCharacter:(unsigned short)arg1 geometryModel:(void*)arg2 geometryData:(id)arg3 ;
-(void)_addInsertions;
-(void)removeNumberOfInputCharacters:(unsigned long long)arg1 ;
-(id)currentModifications;
-(id)addedModifications;
-(id)removedModifications;
-(void)setValidSequenceCorrectionThreshold:(double)arg1 ;
-(double)validSequenceCorrectionThreshold;
-(BOOL)_addEnglishWordForRange:(NSRange)arg1 quickly:(BOOL)arg2 ;
-(BOOL)_addEnglishWordsEndingAtIndex:(unsigned long long)arg1 quickly:(BOOL)arg2 ;
-(void)_addSpecialEnglishWords;
-(void)_addEnglishWordsQuickly:(BOOL)arg1 ;
-(void)_addValidSequenceReplacements;
-(void)_removePrefixes;
-(void)_addPrefixes;
@end

