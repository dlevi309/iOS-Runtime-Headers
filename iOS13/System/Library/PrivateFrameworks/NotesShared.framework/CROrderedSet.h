/*
* Generated on Monday, March 1, 2021 at 2:33:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/

#import <libobjc.A.dylib/CRDataType.h>
#import <libobjc.A.dylib/CRCoding.h>

@class CRSet, NSMutableArray, CRDocument, NSArray, NSString;

@interface CROrderedSet : NSObject <CRDataType, CRCoding> {

	CRSet* _contents;
	NSMutableArray* _orderedArray;

}

@property (nonatomic,retain) CRSet * contents;                           //@synthesize contents=_contents - In the implementation block
@property (nonatomic,retain) NSMutableArray * orderedArray;              //@synthesize orderedArray=_orderedArray - In the implementation block
@property (assign,nonatomic,__weak) CRDocument * document; 
@property (readonly) unsigned long long count; 
@property (copy,readonly) NSArray * allObjects; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(unsigned long long)count;
-(void)addObject:(id)arg1 ;
-(void)removeObject:(id)arg1 ;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(void)setObject:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)removeObjectAtIndex:(unsigned long long)arg1 ;
-(void)removeAllObjects;
-(unsigned long long)indexOfObject:(id)arg1 ;
-(BOOL)containsObject:(id)arg1 ;
-(id)objectAtIndexedSubscript:(unsigned long long)arg1 ;
-(void)setObject:(id)arg1 atIndexedSubscript:(unsigned long long)arg2 ;
-(void)addObjectsFromArray:(id)arg1 ;
-(NSArray *)allObjects;
-(CRSet *)contents;
-(id)tombstone;
-(void)enumerateWithBlock:(/*^block*/id)arg1 ;
-(void)setContents:(CRSet *)arg1 ;
-(void)setDocument:(CRDocument *)arg1 ;
-(CRDocument *)document;
-(id)initWithCRCoder:(id)arg1 ;
-(void)encodeWithCRCoder:(id)arg1 ;
-(void)mergeWith:(id)arg1 ;
-(id)deltaSince:(id)arg1 in:(id)arg2 ;
-(void)walkGraph:(/*^block*/id)arg1 ;
-(void)realizeLocalChangesIn:(id)arg1 ;
-(void)moveObject:(id)arg1 toIndex:(unsigned long long)arg2 ;
-(void)_sort;
-(NSMutableArray *)orderedArray;
-(id)_indexForIndex:(unsigned long long)arg1 ;
-(void)mergeWithSet:(id)arg1 ;
-(void)setOrderedArray:(NSMutableArray *)arg1 ;
@end

