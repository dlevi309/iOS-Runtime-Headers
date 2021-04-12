/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreData/NSPersistentCacheRow.h>

@class _CDSnapshot;

@interface NSSQLRow : NSPersistentCacheRow {

	_CDSnapshot* _snapshot;

}
+(id)allocWithZone:(NSZone*)arg1 ;
+(void)initialize;
+(unsigned)newBatchRowAllocation:(id*)arg1 count:(unsigned)arg2 forSQLEntity:(id)arg3 withOwnedObjectIDs:(id*)arg4 andTimestamp:(double)arg5 ;
+(id)allocForSQLEntity:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copy;
-(id)valueForKey:(id)arg1 ;
-(unsigned long long)version;
-(id)objectID;
-(void)setObjectID:(id)arg1 ;
-(void)setForeignEntityKeySlot:(unsigned)arg1 entityKey:(unsigned)arg2 ;
-(void)setForeignOrderKeySlot:(unsigned)arg1 orderKey:(unsigned)arg2 ;
-(void)setForeignKeySlot:(unsigned)arg1 int64:(long long)arg2 ;
-(void)setOptLock:(long long)arg1 ;
-(id)initWithSQLEntity:(id)arg1 ownedObjectID:(id)arg2 andTimestamp:(double)arg3 ;
-(const id*)knownKeyValuesPointer;
-(id)_snapshot_;
-(id)sqlEntity;
-(long long)pk64;
-(unsigned)sqlEntityID;
-(long long)optLock;
-(long long)foreignKeyForSlot:(unsigned)arg1 ;
-(unsigned)foreignEntityKeyForSlot:(unsigned)arg1 ;
-(unsigned)foreignOrderKeyForSlot:(unsigned)arg1 ;
-(id)attributeValueForSlot:(unsigned)arg1 ;
-(CFBitVectorRef)newUpdateMaskForConstrainedValues;
-(unsigned)_versionNumber;
-(CFBitVectorRef)newUpdateMaskFrom:(id)arg1 ;
-(CFBitVectorRef)newUpdateMaskWithChangedConstraintsFrom:(id)arg1 ;
-(id)initWithSQLEntity:(id)arg1 objectID:(id)arg2 ;
-(id)newObjectIDForToOne:(id)arg1 ;
-(void)_validateToOnes;
-(CFBitVectorRef)newColumnMaskFrom:(id)arg1 columnInclusionOptions:(unsigned long long)arg2 ;
-(BOOL)hasUniqueConstraintDiffFrom:(id)arg1 ;
@end

