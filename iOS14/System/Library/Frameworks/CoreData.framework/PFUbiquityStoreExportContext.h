/*
* Generated on Thursday, January 14, 2021 at 2:21:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)storeName;
-(void)setStore:(NSSQLCore *)arg1 ;
-(NSSQLCore *)store;
-(PFUbiquitySwitchboardCacheWrapper *)cacheWrapper;
-(void)setCacheWrapper:(PFUbiquitySwitchboardCacheWrapper *)arg1 ;
-(NSSet *)transactionEntries;
-(NSString *)localPeerID;
-(id)description;
-(id)initWithStoreName:(id)arg1 andUbiquityRootLocation:(id)arg2 forLocalPeerID:(id)arg3 ;
-(id)addTransactionEntryForGlobalID:(id)arg1 andTransactionType:(int)arg2 ;
-(PFUbiquityLocation *)ubiquityRootLocation;
-(void)dealloc;
@end

