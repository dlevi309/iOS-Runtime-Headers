/*
* Generated on Thursday, January 14, 2021 at 2:21:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/CoreData-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSManagedObjectID;

@interface _CDSnapshot : NSObject <NSCopying, NSMutableCopying> {

	int _cd_rc;
	int _cd_version;
	NSManagedObjectID* _cd_objectID;
	struct {
		unsigned _readOnly : 1;
		unsigned _reservedFlags : 7;
	}  _cd_flags;
	unsigned char _cd_nullFlags_;

}
+(id)alloc;
+(void)initialize;
+(unsigned)newBatchAllocation:(id*)arg1 count:(unsigned)arg2 withOwnedObjectIDs:(id*)arg3 ;
+(void)_invalidateStaticCaches;
+(id)allocWithZone:(NSZone*)arg1 ;
+(void)_entityDeallocated;
+(Class)classForEntity:(id)arg1 ;
-(oneway void)release;
-(BOOL)_tryRetain;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(id)mutableCopy;
-(id)retain;
-(BOOL)_isDeallocating;
-(id)valueForKey:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)copy;
-(unsigned long long)retainCount;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

