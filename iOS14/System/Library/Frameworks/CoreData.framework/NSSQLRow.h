/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreData/NSPersistentCacheRow.h>

@class _CDSnapshot;

@interface NSSQLRow : NSPersistentCacheRow {

	_CDSnapshot* _snapshot;

}
+(void)initialize;
+(unsigned)newBatchRowAllocation:(id*)arg1 count:(unsigned)arg2 forSQLEntity:(id)arg3 withOwnedObjectIDs:(id*)arg4 andTimestamp:(double)arg5 ;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)allocForSQLEntity:(id)arg1 ;
-(const id*)knownKeyValuesPointer;
-(void)setForeignKeySlot:(unsigned)arg1 int64:(long long)arg2 ;
-(id)valueForKey:(id)arg1 ;
-(id)_snapshot_;
-(id)sqlEntity;
-(void)setForeignOrderKeySlot:(unsigned)arg1 orderKey:(unsigned)arg2 ;
-(id)newObjectIDForToOne:(id)arg1 ;
-(unsigned)sqlEntityID;
-(unsigned)_versionNumber;
-(id)objectID;
-(void)setObjectID:(id)arg1 ;
-(long long)pk64;
-(id)initWithSQLEntity:(id)arg1 objectID:(id)arg2 ;
-(id)description;
-(void)setOptLock:(long long)arg1 ;
-(id)copy;
-(void)setForeignEntityKeySlot:(unsigned)arg1 entityKey:(unsigned)arg2 ;
-(CFBitVectorRef)newUpdateMaskForConstrainedValues;
-(BOOL)hasUniqueConstraintDiffFrom:(id)arg1 ;
-(id)attributeValueForSlot:(unsigned)arg1 ;
-(CFBitVectorRef)newUpdateMaskFrom:(id)arg1 ;
-(CFBitVectorRef)newUpdateMaskWithChangedConstraintsFrom:(id)arg1 ;
-(void)_validateToOnes;
-(id)initWithSQLEntity:(id)arg1 ownedObjectID:(id)arg2 andTimestamp:(double)arg3 ;
-(unsigned)foreignEntityKeyForSlot:(unsigned)arg1 ;
-(unsigned long long)version;
-(long long)optLock;
-(CFBitVectorRef)newColumnMaskFrom:(id)arg1 columnInclusionOptions:(unsigned long long)arg2 ;
-(long long)foreignKeyForSlot:(unsigned)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)foreignOrderKeyForSlot:(unsigned)arg1 ;
-(void)dealloc;
@end

