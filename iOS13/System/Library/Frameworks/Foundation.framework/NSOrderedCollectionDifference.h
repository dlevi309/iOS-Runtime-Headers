/*
* Generated on Monday, March 1, 2021 at 2:30:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSIndexSet, NSArray, _NSOrderedCollectionDifferenceMoves;

@interface NSOrderedCollectionDifference : NSObject <NSFastEnumeration> {

	NSIndexSet* _insertIndexes;
	NSArray* _insertObjects;
	NSIndexSet* _removeIndexes;
	NSArray* _removeObjects;
	_NSOrderedCollectionDifferenceMoves* _moves;

}

@property (readonly) NSArray * insertions; 
@property (readonly) NSArray * removals; 
@property (readonly) BOOL hasChanges; 
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)debugDescription;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NS6*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)initWithChanges:(id)arg1 ;
-(id)initWithInsertIndexes:(id)arg1 insertedObjects:(id)arg2 removeIndexes:(id)arg3 removedObjects:(id)arg4 additionalChanges:(id)arg5 ;
-(id)_changeWithType:(long long)arg1 index:(unsigned long long)arg2 object:(id)arg3 ;
-(id)inverseDifference;
-(id)differenceByTransformingChangesWithBlock:(/*^block*/id)arg1 ;
-(BOOL)hasChanges;
-(id)initWithInsertIndexes:(id)arg1 insertedObjects:(id)arg2 removeIndexes:(id)arg3 removedObjects:(id)arg4 ;
-(NSArray *)insertions;
-(NSArray *)removals;
-(void)_enumerateChangesInDiffOrderWithBlock:(/*^block*/id)arg1 ;
-(id)invertedDifference;
@end

