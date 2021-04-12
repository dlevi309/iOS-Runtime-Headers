/*
* Generated on Thursday, January 14, 2021 at 2:21:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


@class NSManagedObjectID;

@interface NSIncrementalStoreNode : NSObject {

	NSManagedObjectID* _objectID;
	unsigned long long _versionNumber;
	id _propertyCache;
	void* _reserved1;

}

@property (nonatomic,readonly) NSManagedObjectID * objectID; 
@property (nonatomic,readonly) unsigned long long version; 
+(void)initialize;
-(const id*)knownKeyValuesPointer;
-(id)_snapshot_;
-(unsigned)_versionNumber;
-(NSManagedObjectID *)objectID;
-(id)description;
-(id)initWithObjectID:(id)arg1 fromSQLRow:(id)arg2 ;
-(void)updateFromSQLRow:(id)arg1 ;
-(void)updateWithValues:(id)arg1 version:(unsigned long long)arg2 ;
-(id)_propertyCache;
-(id)initWithObjectID:(id)arg1 withValues:(id)arg2 version:(unsigned long long)arg3 ;
-(unsigned long long)version;
-(id)valueForPropertyDescription:(id)arg1 ;
-(void)dealloc;
@end

