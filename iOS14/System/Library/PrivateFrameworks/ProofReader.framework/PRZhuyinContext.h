/*
* Generated on Thursday, January 14, 2021 at 2:25:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProofReader.framework/ProofReader
*/

#import <ProofReader/PRAutocorrectionContext.h>

@class NSMutableArray;

@interface PRZhuyinContext : PRAutocorrectionContext {

	NSMutableArray* _modifications;
	NSMutableArray* _addedModifications;
	NSMutableArray* _removedModifications;
	NSMutableArray* _addedRemovedModifications;
	NSMutableArray* _prefixes;
	char* _buffer;
	unsigned long long* _syllableLengthArray;
	void* _connection;
	unsigned long long _length;
	unsigned long long _lengthBeforeApostrophes;
	unsigned long long _startingPoint;
	unsigned long long _lastIndexes[4];
	unsigned long long _nextIndexes[2];
	unsigned long long _startIndex;
	unsigned long long _endIndex;
	BOOL _lastSyllableIsPartial;

}
-(id)init;
-(id)description;
-(void)reset;
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
@end

