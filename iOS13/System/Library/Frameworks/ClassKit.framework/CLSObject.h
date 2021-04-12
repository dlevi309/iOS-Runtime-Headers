/*
* Generated on Monday, March 1, 2021 at 2:32:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ClassKit.framework/ClassKit
*/

#import <ClassKit/ClassKit-Structs.h>
#import <libobjc.A.dylib/CLSRelationable.h>
#import <libobjc.A.dylib/CLSGraphVertex.h>
#import <libobjc.A.dylib/NSLocking.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class CLSDataStore, NSString, NSMutableDictionary, NSDate;

@interface CLSObject : NSObject <CLSRelationable, CLSGraphVertex, NSLocking, NSSecureCoding> {

	BOOL _deleted;
	BOOL _modified;
	BOOL _enforceImmutablility;
	CLSDataStore* _dataStore;
	NSString* _parentObjectID;
	NSString* _appIdentifier;
	NSMutableDictionary* _childrenByID;
	CLSObject* _parent;
	os_unfair_recursive_lock_s _lock;
	BOOL _temporary;
	unsigned _generation;
	NSDate* _dateCreated;
	NSDate* _dateLastModified;
	NSString* _objectID;
	NSDate* _dateExpires;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isTemporary,nonatomic) BOOL temporary;                                     //@synthesize temporary=_temporary - In the implementation block
@property (assign) unsigned generation;                                                             //@synthesize generation=_generation - In the implementation block
@property (nonatomic,copy) NSString * appIdentifier; 
@property (nonatomic,copy) NSString * objectID;                                                     //@synthesize objectID=_objectID - In the implementation block
@property (nonatomic,copy) NSString * parentObjectID; 
@property (assign,nonatomic,__weak) CLSObject * parent; 
@property (assign,nonatomic,__weak) CLSDataStore * dataStore; 
@property (assign,getter=isDeleted,nonatomic) BOOL deleted; 
@property (assign,getter=isModified,nonatomic) BOOL modified; 
@property (nonatomic,retain) NSDate * dateCreated;                                                  //@synthesize dateCreated=_dateCreated - In the implementation block
@property (nonatomic,retain) NSDate * dateLastModified;                                             //@synthesize dateLastModified=_dateLastModified - In the implementation block
@property (nonatomic,retain) NSDate * dateExpires;                                                  //@synthesize dateExpires=_dateExpires - In the implementation block
@property (assign,getter=isImmutablilityEnforced,nonatomic) BOOL enforceImmutablility; 
@property (nonatomic,readonly) id vertexID; 
+(BOOL)supportsSecureCoding;
+(id)dateFormatter;
+(id)relations;
-(void)acceptVisitor:(id)arg1 ;
-(id)init;
-(NSString *)description;
-(void)addChild:(id)arg1 ;
-(CLSObject *)parent;
-(void)setParent:(CLSObject *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)lock;
-(void)unlock;
-(id)_init;
-(id)dictionaryRepresentation;
-(NSString *)objectID;
-(id)identity;
-(unsigned)generation;
-(void)setObjectID:(NSString *)arg1 ;
-(void)removeChild:(id)arg1 ;
-(BOOL)isDeleted;
-(void)_addChild:(id)arg1 ;
-(void)setGeneration:(unsigned)arg1 ;
-(void)setAppIdentifier:(NSString *)arg1 ;
-(void)setDeleted:(BOOL)arg1 ;
-(NSString *)appIdentifier;
-(NSDate *)dateCreated;
-(CLSDataStore *)dataStore;
-(BOOL)isModified;
-(void)setModified:(BOOL)arg1 ;
-(id)childrenPassingTest:(/*^block*/id)arg1 ;
-(void)setDataStore:(CLSDataStore *)arg1 ;
-(void)setDateCreated:(NSDate *)arg1 ;
-(id)ancestorOfClass:(Class)arg1 ;
-(id)childrenOfClass:(Class)arg1 ;
-(BOOL)isTemporary;
-(void)setTemporary:(BOOL)arg1 ;
-(void)mergeWithObject:(id)arg1 ;
-(BOOL)validateObject:(id*)arg1 ;
-(NSString *)parentObjectID;
-(NSDate *)dateLastModified;
-(void)setDateLastModified:(NSDate *)arg1 ;
-(void)addChild:(id)arg1 changedPropertyName:(id)arg2 ;
-(id)vertexID;
-(void)setParentObjectID:(NSString *)arg1 ;
-(void)removeChild:(id)arg1 changedPropertyName:(id)arg2 ;
-(long long)effectiveAuthorizationStatus;
-(void)didSaveObject;
-(void)willSaveObject;
-(id)initWithDeletedObjectID:(id)arg1 ;
-(void)enumerateChildren:(/*^block*/id)arg1 ;
-(void)_addChild:(id)arg1 lock:(BOOL)arg2 ;
-(void)enumerateTree:(/*^block*/id)arg1 ;
-(NSDate *)dateExpires;
-(BOOL)isImmutablilityEnforced;
-(void)setEnforceImmutablility:(BOOL)arg1 ;
-(void)setDateExpires:(NSDate *)arg1 ;
@end

