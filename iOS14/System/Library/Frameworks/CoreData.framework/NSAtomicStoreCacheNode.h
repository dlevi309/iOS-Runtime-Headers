/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(const id*)knownKeyValuesPointer;
-(id)init;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(id)valueForKey:(id)arg1 ;
-(id)_snapshot_;
-(unsigned)_versionNumber;
-(NSManagedObjectID *)objectID;
-(void)_setVersionNumber:(unsigned)arg1 ;
-(id)initWithObjectID:(id)arg1 ;
-(NSMutableDictionary *)propertyCache;
-(void)setPropertyCache:(NSMutableDictionary *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

