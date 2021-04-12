/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(BOOL)accessInstanceVariablesDirectly;
+(long long)version;
+(id)_newArchiveForScalarObjectIDs:(id)arg1 ;
+(id)unarchivedScalarObjectIDsFromData:(id)arg1 withCoordinator:(id)arg2 ;
-(NSString *)description;
-(BOOL)_tryRetain;
-(BOOL)_isDeallocating;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)compare:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)entityName;
-(NSEntityDescription *)entity;
-(id)URIRepresentation;
-(id)_storeInfo1;
-(long long)_referenceData64;
-(NSPersistentStore *)persistentStore;
-(id)_storeIdentifier;
-(BOOL)isTemporaryID;
-(id)_referenceData;
-(id)_retainedURIString;
-(BOOL)_isPersistentStoreAlive;
-(BOOL)_preferReferenceData64;
-(int)_temporaryIDCounter;
-(long long)_compareArbitraryValue:(id)arg1 toValue:(id)arg2 ;
@end

