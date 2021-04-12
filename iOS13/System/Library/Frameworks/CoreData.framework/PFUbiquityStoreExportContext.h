/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


@class PFUbiquityLocation, NSString, NSMutableSet, NSSQLCore, PFUbiquitySwitchboardCacheWrapper, NSSet;

@interface PFUbiquityStoreExportContext : NSObject {

	PFUbiquityLocation* _ubiquityRootLocation;
	NSString* _localPeerID;
	NSString* _storeName;
	NSMutableSet* _transactionEntries;
	NSSQLCore* _store;
	PFUbiquitySwitchboardCacheWrapper* _cacheWrapper;

}

@property (nonatomic,readonly) PFUbiquityLocation * ubiquityRootLocation;                   //@synthesize ubiquityRootLocation=_ubiquityRootLocation - In the implementation block
@property (nonatomic,readonly) NSString * localPeerID;                                      //@synthesize localPeerID=_localPeerID - In the implementation block
@property (nonatomic,readonly) NSString * storeName;                                        //@synthesize storeName=_storeName - In the implementation block
@property (nonatomic,readonly) NSSet * transactionEntries;                                  //@synthesize transactionEntries=_transactionEntries - In the implementation block
@property (nonatomic,retain) NSSQLCore * store;                                             //@synthesize store=_store - In the implementation block
@property (nonatomic,retain) PFUbiquitySwitchboardCacheWrapper * cacheWrapper;              //@synthesize cacheWrapper=_cacheWrapper - In the implementation block
-(void)dealloc;
-(id)description;
-(NSSQLCore *)store;
-(void)setStore:(NSSQLCore *)arg1 ;
-(NSString *)localPeerID;
-(NSString *)storeName;
-(PFUbiquityLocation *)ubiquityRootLocation;
-(PFUbiquitySwitchboardCacheWrapper *)cacheWrapper;
-(void)setCacheWrapper:(PFUbiquitySwitchboardCacheWrapper *)arg1 ;
-(NSSet *)transactionEntries;
-(id)initWithStoreName:(id)arg1 andUbiquityRootLocation:(id)arg2 forLocalPeerID:(id)arg3 ;
-(id)addTransactionEntryForGlobalID:(id)arg1 andTransactionType:(int)arg2 ;
@end

