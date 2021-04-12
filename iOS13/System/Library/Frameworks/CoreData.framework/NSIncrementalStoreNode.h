/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)description;
-(unsigned long long)version;
-(NSManagedObjectID *)objectID;
-(const id*)knownKeyValuesPointer;
-(id)initWithObjectID:(id)arg1 withValues:(id)arg2 version:(unsigned long long)arg3 ;
-(id)valueForPropertyDescription:(id)arg1 ;
-(id)initWithObjectID:(id)arg1 fromSQLRow:(id)arg2 ;
-(id)_snapshot_;
-(unsigned)_versionNumber;
-(id)_propertyCache;
-(void)updateWithValues:(id)arg1 version:(unsigned long long)arg2 ;
-(void)updateFromSQLRow:(id)arg1 ;
@end

