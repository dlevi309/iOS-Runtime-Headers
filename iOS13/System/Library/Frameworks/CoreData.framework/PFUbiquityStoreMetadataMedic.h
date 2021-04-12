/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


@class NSString, PFUbiquityLocation, NSPersistentStore, NSSQLiteConnection;

@interface PFUbiquityStoreMetadataMedic : NSObject {

	NSString* _localPeerID;
	PFUbiquityLocation* _ubiquityRootLocation;
	NSString* _storeName;
	NSPersistentStore* _store;

}

@property (nonatomic,readonly) NSString * localPeerID;                                 //@synthesize localPeerID=_localPeerID - In the implementation block
@property (nonatomic,readonly) PFUbiquityLocation * ubiquityRootLocation;              //@synthesize ubiquityRootLocation=_ubiquityRootLocation - In the implementation block
@property (nonatomic,readonly) NSString * storeName;                                   //@synthesize storeName=_storeName - In the implementation block
@property (nonatomic,readonly) NSPersistentStore * store;                              //@synthesize store=_store - In the implementation block
@property (nonatomic,readonly) NSSQLiteConnection * connection; 
-(void)dealloc;
-(NSSQLiteConnection *)connection;
-(NSPersistentStore *)store;
-(NSString *)localPeerID;
-(NSString *)storeName;
-(PFUbiquityLocation *)ubiquityRootLocation;
-(id)initWithStore:(id)arg1 localPeerID:(id)arg2 andUbiquityRootLocation:(id)arg3 ;
-(BOOL)recoverMetadataWithError:(id*)arg1 ;
-(BOOL)recoverBaselineMetadataWithImportContext:(id)arg1 error:(id*)arg2 ;
-(BOOL)recoverTransactionLogMetadataWithImportContext:(id)arg1 error:(id*)arg2 ;
-(BOOL)addTransactionHistoryEntriesForObjectIDs:(id)arg1 withImportContext:(id)arg2 error:(id*)arg3 ;
-(BOOL)cacheMetadataForTransactionLog:(id)arg1 withImportContext:(id)arg2 error:(id*)arg3 ;
@end

