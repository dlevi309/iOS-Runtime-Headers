/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/NSStoreMapping.h>

@class NSString, NSManagedObjectModel, NSKnownKeysDictionary, NSMutableArray;

@interface NSSQLModel : NSStoreMapping {

	NSString* _configuration;
	NSManagedObjectModel* _mom;
	NSKnownKeysDictionary* _entitiesByName;
	NSMutableArray* _entities;
	id* _entityDescriptionToSQLMap;
	unsigned long long _brokenHashVersion;
	BOOL _retainLeopardStyleDictionaries;
	BOOL _modelHasPrecomputedKeyOrder;
	BOOL _hasVirtualToOnes;
	unsigned _entityIDOffset;
	unsigned _lastEntityID;

}
-(id)configurationName;
-(id)entities;
-(BOOL)_useSnowLeopardStyleHashing;
-(id)entityNamed:(id)arg1 ;
-(void)finalize;
-(unsigned)_entityOffset;
-(id)_precomputedKeyOrderForEntity:(id)arg1 ;
-(id)entitiesByName;
-(id)entityForID:(unsigned long long)arg1 ;
-(void)_addIndexedEntity:(id)arg1 ;
-(BOOL)_modelHasPrecomputedKeyOrder;
-(id)_entityMapping;
-(BOOL)_retainHashHack;
-(id)_sqlEntityWithRenamingIdentifier:(id)arg1 ;
-(unsigned)_lastEntityID;
-(unsigned long long)entityIDForName:(id)arg1 ;
-(id)initWithManagedObjectModel:(id)arg1 configurationName:(id)arg2 retainHashHack:(BOOL)arg3 ;
-(BOOL)_useLeopardStyleHashing;
-(BOOL)_generateModel:(id)arg1 error:(id*)arg2 ;
-(id)initWithManagedObjectModel:(id)arg1 configurationName:(id)arg2 ;
-(void)_recordHasVirtualToOnes;
-(id)initWithManagedObjectModel:(id)arg1 configurationName:(id)arg2 brokenHashVersion:(unsigned long long)arg3 ;
-(id)initWithManagedObjectModel:(id)arg1 configurationName:(id)arg2 retainHashHack:(BOOL)arg3 brokenHashVersion:(unsigned long long)arg4 ;
-(id)managedObjectModel;
-(void)dealloc;
@end

