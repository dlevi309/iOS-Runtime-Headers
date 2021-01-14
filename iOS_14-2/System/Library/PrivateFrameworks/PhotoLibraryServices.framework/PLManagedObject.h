/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <CoreData/NSManagedObject.h>
#import <libobjc.A.dylib/PLJournalEntryPayloadManagedObjectUpdate.h>
#import <libobjc.A.dylib/PLValidatedManagedObject.h>

@class PLPhotoLibraryPathManager, PLPhotoLibrary, NSString;

@interface PLManagedObject : NSManagedObject <PLJournalEntryPayloadManagedObjectUpdate, PLValidatedManagedObject>

@property (nonatomic,readonly) PLPhotoLibraryPathManager * pathManager; 
@property (nonatomic,readonly) PLPhotoLibrary * photoLibrary; 
@property (nonatomic,readonly) BOOL isRegisteredWithUserInterfaceContext; 
@property (nonatomic,copy,readonly) NSString * shortObjectIDURI; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)entityName;
+(id)attributeValidationRules;
+(id)insertInManagedObjectContext:(id)arg1 ;
+(id)objectIDDescription;
+(id)entityInManagedObjectContext:(id)arg1 ;
-(id)payloadID;
-(BOOL)supportsCloudUpload;
-(id)payloadForChangedKeys:(id)arg1 ;
-(PLPhotoLibraryPathManager *)pathManager;
-(id)payloadIDForTombstone:(id)arg1 ;
-(void)willSave;
-(PLPhotoLibrary *)photoLibrary;
-(NSString *)shortObjectIDURI;
-(BOOL)isSyncableChange;
-(id)payloadsForChangedKeys:(id)arg1 ;
-(id)payloadIDsByPayloadClassIDToDeleteOnInsert;
-(BOOL)isRegisteredWithUserInterfaceContext;
-(BOOL)validForPersistenceChangedForChangedKeys:(id)arg1 ;
@end

