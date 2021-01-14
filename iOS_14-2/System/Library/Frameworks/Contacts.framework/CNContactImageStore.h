/*
* Generated on Thursday, January 14, 2021 at 2:20:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/


@class CNContactMetadataPersistentStoreManager;

@interface CNContactImageStore : NSObject {

	CNContactMetadataPersistentStoreManager* _storeManager;

}

@property (nonatomic,retain) CNContactMetadataPersistentStoreManager * storeManager;              //@synthesize storeManager=_storeManager - In the implementation block
+(long long)maximumContactImagesPerContact;
-(id)init;
-(BOOL)performSaveRequest:(id)arg1 error:(id*)arg2 ;
-(id)performFetchRequest:(id)arg1 error:(id*)arg2 ;
-(CNContactMetadataPersistentStoreManager *)storeManager;
-(id)initWithContactMetadataStoreManager:(id)arg1 ;
-(id)managedObjectsToContactImages:(id)arg1 ;
-(void)setStoreManager:(CNContactMetadataPersistentStoreManager *)arg1 ;
-(void)ensureImageQuotasForImages:(id)arg1 inContext:(id)arg2 ;
-(BOOL)updateExistingImagesIfNeededWithNewContactImage:(id)arg1 forContactIdentifier:(id)arg2 inContext:(id)arg3 error:(id*)arg4 ;
-(void)insertContactImage:(id)arg1 withContactIdentifier:(id)arg2 inContext:(id)arg3 ;
@end

