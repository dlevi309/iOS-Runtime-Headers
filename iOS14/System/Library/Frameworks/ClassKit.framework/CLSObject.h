/*
* Generated on Thursday, January 14, 2021 at 2:24:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	BOOL _enforceImmutability;
	CLSDataStore* _dataStore;
	NSString* _parentObjectID;
	NSString* _appIdentifier;
	NSMutableDictionary* _childrenByID;
	CLSObject* _parent;
	os_unfair_recursive_lock_s _lock;
	BOOL _needsRepair;
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
@property (assign,getter=isTemporary,nonatomic) BOOL temporary;                                   //@synthesize temporary=_temporary - In the implementation block
@property (assign) unsigned generation;                                                           //@synthesize generation=_generation - In the implementation block
@property (nonatomic,copy) NSString * appIdentifier; 
@property (nonatomic,copy) NSString * objectID;                                                   //@synthesize objectID=_objectID - In the implementation block
@property (nonatomic,copy) NSString * parentObjectID; 
@property (assign,nonatomic,__weak) CLSObject * parent; 
@property (assign,nonatomic,__weak) CLSDataStore * dataStore; 
@property (assign,getter=isDeleted,nonatomic) BOOL deleted; 
@property (assign,getter=isModified,nonatomic) BOOL modified; 
@property (nonatomic,retain) NSDate * dateCreated;                                                //@synthesize dateCreated=_dateCreated - In the implementation block
@property (nonatomic,retain) NSDate * dateLastModified;                                           //@synthesize dateLastModified=_dateLastModified - In the implementation block
@property (nonatomic,retain) NSDate * dateExpires;                                                //@synthesize dateExpires=_dateExpires - In the implementation block
@property (assign,getter=isImmutabilityEnforced,nonatomic) BOOL enforceImmutability; 
@property (nonatomic,readonly) id vertexID; 
+(BOOL)supportsSecureCoding;
+(id)relations;
+(id)dateFormatter;
-(void)acceptVisitor:(id)arg1 ;
-(CLSDataStore *)dataStore;
-(id)dictionaryRepresentation;
-(void)unlock;
-(void)setGeneration:(unsigned)arg1 ;
-(void)setAppIdentifier:(NSString *)arg1 ;
-(unsigned)generation;
-(BOOL)isTemporary;
-(NSString *)appIdentifier;
-(CLSObject *)parent;
-(id)init;
-(void)setTemporary:(BOOL)arg1 ;
-(NSDate *)dateCreated;
-(void)addChild:(id)arg1 ;
-(id)identity;
-(void)encodeWithCoder:(id)arg1 ;
-(void)lock;
-(void)setDataStore:(CLSDataStore *)arg1 ;
-(void)setParent:(CLSObject *)arg1 ;
-(void)setDateCreated:(NSDate *)arg1 ;
-(BOOL)needsRepair;
-(NSString *)objectID;
-(void)setObjectID:(NSString *)arg1 ;
-(BOOL)isDeleted;
-(NSString *)description;
-(void)setNeedsRepair:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isModified;
-(void)removeChild:(id)arg1 ;
-(id)_init;
-(void)setDeleted:(BOOL)arg1 ;
-(void)setModified:(BOOL)arg1 ;
-(id)vertexID;
-(void)mergeWithObject:(id)arg1 ;
-(NSDate *)dateLastModified;
-(BOOL)validateObject:(id*)arg1 ;
-(NSString *)parentObjectID;
-(void)setDateLastModified:(NSDate *)arg1 ;
-(id)childrenPassingTest:(/*^block*/id)arg1 ;
-(void)addChild:(id)arg1 changedPropertyName:(id)arg2 ;
-(id)childrenOfClass:(Class)arg1 ;
-(void)setParentObjectID:(NSString *)arg1 ;
-(void)removeChild:(id)arg1 changedPropertyName:(id)arg2 ;
-(long long)effectiveAuthorizationStatus;
-(void)didSaveObject;
-(void)willSaveObject;
-(id)initWithDeletedObjectID:(id)arg1 ;
-(void)enumerateChildren:(/*^block*/id)arg1 ;
-(void)_addChild:(id)arg1 ;
-(void)_addChild:(id)arg1 lock:(BOOL)arg2 ;
-(void)enumerateTree:(/*^block*/id)arg1 ;
-(NSDate *)dateExpires;
-(id)ancestorOfClass:(Class)arg1 ;
-(BOOL)isImmutabilityEnforced;
-(void)setEnforceImmutability:(BOOL)arg1 ;
-(void)setDateExpires:(NSDate *)arg1 ;
@end

