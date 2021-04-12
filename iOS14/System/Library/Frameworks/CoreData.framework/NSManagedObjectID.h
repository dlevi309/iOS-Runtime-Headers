/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/CoreData-Structs.h>
#import <libobjc.A.dylib/NSFetchRequestResult.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSEntityDescription, NSPersistentStore;

@interface NSManagedObjectID : NSObject <NSFetchRequestResult, NSCopying>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSEntityDescription * entity; 
@property (__weak,readonly) NSPersistentStore * persistentStore; 
@property (getter=isTemporaryID,readonly) BOOL temporaryID; 
+(void)initialize;
+(id)unarchivedScalarObjectIDsFromData:(id)arg1 withCoordinator:(id)arg2 ;
+(id)_newArchiveForScalarObjectIDs:(id)arg1 ;
+(BOOL)accessInstanceVariablesDirectly;
+(long long)version;
-(NSPersistentStore *)persistentStore;
-(BOOL)_isPersistentStoreAlive;
-(id)entityName;
-(long long)compare:(id)arg1 ;
-(NSEntityDescription *)entity;
-(id)URIRepresentation;
-(BOOL)_tryRetain;
-(id)_retainedURIString;
-(BOOL)_isDeallocating;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(id)_storeInfo1;
-(id)initWithCoder:(id)arg1 ;
-(id)_referenceData;
-(BOOL)_preferReferenceData64;
-(long long)_compareArbitraryValue:(id)arg1 toValue:(id)arg2 ;
-(int)_temporaryIDCounter;
-(long long)_referenceData64;
-(BOOL)isTemporaryID;
-(id)_storeIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

