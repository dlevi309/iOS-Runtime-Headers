/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/CoreData-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSManagedObjectID, NSEntityDescription;

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

@property (nonatomic,readonly) NSEntityDescription * entity; 
@property (nonatomic,readonly) NSManagedObjectID * objectID; 
+(id)alloc;
+(id)allocWithZone:(NSZone*)arg1 ;
+(void)initialize;
+(void)_entityDeallocated;
+(Class)classForEntity:(id)arg1 ;
+(unsigned)newBatchAllocation:(id*)arg1 count:(unsigned)arg2 withOwnedObjectIDs:(id*)arg3 ;
+(void)resetGeneratedClasses;
-(unsigned long long)retainCount;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)retain;
-(oneway void)release;
-(unsigned long long)hash;
-(id)description;
-(BOOL)_tryRetain;
-(BOOL)_isDeallocating;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)copy;
-(id)mutableCopy;
-(void)finalize;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(id)valueForKey:(id)arg1 ;
-(NSManagedObjectID *)objectID;
-(NSEntityDescription *)entity;
-(id)_snapshot_;
-(id)initWithObjectID:(id)arg1 ;
-(id)_descriptionValues;
@end

