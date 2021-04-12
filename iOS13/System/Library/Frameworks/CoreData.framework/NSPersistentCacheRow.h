/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


#import <CoreData/CoreData-Structs.h>
@interface NSPersistentCacheRow : NSObject {

	int _cd_rc;
	int _externalReferenceCount;
	struct {
		unsigned _invalidToOnes : 1;
		unsigned _hasTemporaryID : 1;
		unsigned _backgroundDealloc : 1;
		unsigned _reservedFlags : 1;
		unsigned _virtualfk_count : 14;
		unsigned _ordkey_count : 14;
	}  _externalRefFlags;
	id* _toManyMap;
	double _birth;

}
+(id)allocWithZone:(NSZone*)arg1 ;
-(unsigned long long)retainCount;
-(void)dealloc;
-(id)retain;
-(oneway void)release;
-(BOOL)_tryRetain;
-(BOOL)_isDeallocating;
-(unsigned)options;
-(unsigned long long)version;
-(double)timestamp;
-(id)objectID;
-(void)setTimestamp:(double)arg1 ;
-(const id*)knownKeyValuesPointer;
-(void)updateMissingRelationshipCachesFromOriginal:(id)arg1 ;
-(void)incrementRefCount;
-(int)externalReferenceCount;
-(id)initWithOptions:(unsigned)arg1 andTimestamp:(double)arg2 ;
-(void)_initializeRelationshipCaches;
-(unsigned long long)toManyOffsetForProperty:(id)arg1 ;
-(int)decrementRefCount;
-(void)incrementExternalReferenceCount:(int)arg1 ;
-(void)copyRelationshipCachesFrom:(id)arg1 ;
-(void)releaseRelationshipCaches;
-(id)relatedObjectIDsForProperty:(id)arg1 ;
-(double)timestampForProperty:(id)arg1 ;
-(void)setRelatedObjectIDs:(id)arg1 forProperty:(id)arg2 options:(unsigned)arg3 andTimestamp:(double)arg4 ;
-(id)ancillaryOrderKeysForProperty:(id)arg1 ;
-(void)setAncillaryOrderKeys:(id)arg1 forProperty:(id)arg2 options:(unsigned)arg3 andTimestamp:(double)arg4 ;
@end

