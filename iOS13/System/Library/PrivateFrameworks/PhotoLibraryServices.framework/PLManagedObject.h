/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)insertInManagedObjectContext:(id)arg1 ;
+(id)entityInManagedObjectContext:(id)arg1 ;
+(id)attributeValidationRules;
+(id)objectIDDescription;
-(void)willSave;
-(PLPhotoLibrary *)photoLibrary;
-(PLPhotoLibraryPathManager *)pathManager;
-(BOOL)supportsCloudUpload;
-(id)payloadID;
-(id)payloadIDForTombstone:(id)arg1 ;
-(id)payloadForChangedKeys:(id)arg1 ;
-(BOOL)isSyncableChange;
-(NSString *)shortObjectIDURI;
-(BOOL)validForPersistenceChangedForChangedKeys:(id)arg1 ;
-(BOOL)isRegisteredWithUserInterfaceContext;
-(id)payloadsForChangedKeys:(id)arg1 ;
-(id)payloadIDsByPayloadClassIDToDeleteOnInsert;
@end

