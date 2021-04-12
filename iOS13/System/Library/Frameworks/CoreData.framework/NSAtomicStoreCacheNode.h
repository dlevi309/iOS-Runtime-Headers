/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


@class NSManagedObjectID, NSMutableDictionary;

@interface NSAtomicStoreCacheNode : NSObject {

	NSManagedObjectID* _objectID;
	unsigned long long __versionNumber;
	NSMutableDictionary* _propertyCache;
	void* _reserved1;

}

@property (nonatomic,readonly) NSManagedObjectID * objectID; 
@property (nonatomic,retain) NSMutableDictionary * propertyCache; 
+(void)initialize;
+(BOOL)accessInstanceVariablesDirectly;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(id)valueForKey:(id)arg1 ;
-(NSManagedObjectID *)objectID;
-(const id*)knownKeyValuesPointer;
-(id)_snapshot_;
-(unsigned)_versionNumber;
-(void)_setVersionNumber:(unsigned)arg1 ;
-(id)initWithObjectID:(id)arg1 ;
-(NSMutableDictionary *)propertyCache;
-(void)setPropertyCache:(NSMutableDictionary *)arg1 ;
@end

