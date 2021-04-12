/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(const id*)knownKeyValuesPointer;
-(id)configurationName;
-(id)entity;
-(id)_relatedNodes;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_snapshot_;
-(unsigned)_versionNumber;
-(id)objectID;
-(id)key;
-(id)initWithCoder:(id)arg1 ;
-(void)_setVersionNumber:(unsigned)arg1 ;
-(id)initWithObjectID:(id)arg1 ;
-(void)setDestinations:(id)arg1 forRelationship:(id)arg2 ;
-(id)destinationsForRelationship:(id)arg1 ;
-(void)_setMap:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

