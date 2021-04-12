/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/


@class CNContactMetadataPersistentStoreManager;

@interface CNContactImageStore : NSObject {

	CNContactMetadataPersistentStoreManager* _storeManager;

}

@property (nonatomic,retain) CNContactMetadataPersistentStoreManager * storeManager;              //@synthesize storeManager=_storeManager - In the implementation block
+(long long)maximumContactImagesPerContact;
-(id)init;
-(id)initWithContactMetadataStoreManager:(id)arg1 ;
-(CNContactMetadataPersistentStoreManager *)storeManager;
-(id)managedObjectsToContactImages:(id)arg1 ;
-(BOOL)updateExistingImagesIfNeededWithNewContactImage:(id)arg1 forContactIdentifier:(id)arg2 inContext:(id)arg3 error:(id*)arg4 ;
-(void)insertContactImage:(id)arg1 withContactIdentifier:(id)arg2 inContext:(id)arg3 ;
-(void)ensureImageQuotasForImages:(id)arg1 inContext:(id)arg2 ;
-(id)performFetchRequest:(id)arg1 error:(id*)arg2 ;
-(BOOL)performSaveRequest:(id)arg1 error:(id*)arg2 ;
-(void)setStoreManager:(CNContactMetadataPersistentStoreManager *)arg1 ;
@end

