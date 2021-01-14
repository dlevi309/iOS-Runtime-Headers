/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(const id*)knownKeyValuesPointer;
-(void)copyRelationshipCachesFrom:(id)arg1 ;
-(unsigned long long)toManyOffsetForProperty:(id)arg1 ;
-(void)setRelatedObjectIDs:(id)arg1 forProperty:(id)arg2 options:(unsigned)arg3 andTimestamp:(double)arg4 ;
-(double)timestampForProperty:(id)arg1 ;
-(int)externalReferenceCount;
-(int)decrementRefCount;
-(oneway void)release;
-(id)ancillaryOrderKeysForProperty:(id)arg1 ;
-(void)releaseRelationshipCaches;
-(BOOL)_tryRetain;
-(double)timestamp;
-(id)retain;
-(BOOL)_isDeallocating;
-(unsigned)options;
-(id)objectID;
-(void)_initializeRelationshipCaches;
-(void)updateMissingRelationshipCachesFromOriginal:(id)arg1 ;
-(unsigned long long)retainCount;
-(id)relatedObjectIDsForProperty:(id)arg1 ;
-(id)initWithOptions:(unsigned)arg1 andTimestamp:(double)arg2 ;
-(void)incrementExternalReferenceCount:(int)arg1 ;
-(void)incrementRefCount;
-(unsigned long long)version;
-(void)setTimestamp:(double)arg1 ;
-(void)setAncillaryOrderKeys:(id)arg1 forProperty:(id)arg2 options:(unsigned)arg3 andTimestamp:(double)arg4 ;
-(void)dealloc;
@end

