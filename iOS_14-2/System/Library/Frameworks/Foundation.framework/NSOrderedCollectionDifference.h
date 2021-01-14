/*
* Generated on Thursday, January 14, 2021 at 2:20:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSArray *)insertions;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NS24*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)_enumerateChangesInDiffOrderWithBlock:(/*^block*/id)arg1 ;
-(id)init;
-(id)initWithInsertIndexes:(id)arg1 insertedObjects:(id)arg2 removeIndexes:(id)arg3 removedObjects:(id)arg4 additionalChanges:(id)arg5 ;
-(NSArray *)removals;
-(id)debugDescription;
-(id)inverseDifference;
-(id)_changeWithType:(long long)arg1 index:(unsigned long long)arg2 object:(id)arg3 ;
-(id)description;
-(id)invertedDifference;
-(BOOL)hasChanges;
-(id)initWithChanges:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithInsertIndexes:(id)arg1 insertedObjects:(id)arg2 removeIndexes:(id)arg3 removedObjects:(id)arg4 ;
-(id)differenceByTransformingChangesWithBlock:(/*^block*/id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

