/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/NSPersistentContainer.h>
#import <libobjc.A.dylib/NSCloudKitMirroringDelegateProgressProvider.h>

@class NSManagedObjectContext, NSString;

@interface NSPersistentCloudKitContainer : NSPersistentContainer <NSCloudKitMirroringDelegateProgressProvider> {

	long long _operationTimeout;
	NSManagedObjectContext* _metadataContext;

}

@property (nonatomic,readonly) long long operationTimeout;                            //@synthesize operationTimeout=_operationTimeout - In the implementation block
@property (nonatomic,readonly) NSManagedObjectContext * metadataContext;              //@synthesize metadataContext=_metadataContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)discoverDefaultContainerIdentifier;
-(void)setPersistentStoreDescriptions:(id)arg1 ;
-(id)recordForManagedObjectID:(id)arg1 ;
-(void)eventUpdated:(id)arg1 ;
-(BOOL)initializeCloudKitSchemaWithOptions:(unsigned long long)arg1 error:(id*)arg2 ;
-(id)recordIDsForManagedObjectIDs:(id)arg1 ;
-(BOOL)canDeleteRecordForManagedObjectWithID:(id)arg1 ;
-(BOOL)canModifyManagedObjectsInStore:(id)arg1 ;
-(long long)operationTimeout;
-(NSManagedObjectContext *)metadataContext;
-(id)recordIDForManagedObjectID:(id)arg1 ;
-(id)recordsForManagedObjectIDs:(id)arg1 ;
-(void)_loadStoreDescriptions:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)initWithName:(id)arg1 managedObjectModel:(id)arg2 ;
-(BOOL)canUpdateRecordForManagedObjectWithID:(id)arg1 ;
-(void)dealloc;
@end

