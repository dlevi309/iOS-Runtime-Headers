/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


@class NSPersistentStoreMap, NSManagedObjectID, NSMutableDictionary, NSString;

@interface NSStoreMapNode : NSObject {

	NSPersistentStoreMap* _map;
	NSManagedObjectID* _objectID;
	NSMutableDictionary* _relatedNodes;
	NSString* _entityName;
	unsigned _version;

}
+(void)initialize;
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)key;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)objectID;
-(id)entity;
-(id)configurationName;
-(const id*)knownKeyValuesPointer;
-(id)_snapshot_;
-(unsigned)_versionNumber;
-(void)_setVersionNumber:(unsigned)arg1 ;
-(id)initWithObjectID:(id)arg1 ;
-(void)_setMap:(id)arg1 ;
-(void)setDestinations:(id)arg1 forRelationship:(id)arg2 ;
-(id)destinationsForRelationship:(id)arg1 ;
-(id)_relatedNodes;
@end

