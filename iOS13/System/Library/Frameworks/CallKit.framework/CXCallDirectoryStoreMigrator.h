/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
*/


@class CXCallDirectoryStore;

@interface CXCallDirectoryStoreMigrator : NSObject {

	CXCallDirectoryStore* _store;
	/*^block*/id _storeCreationBlock;
	/*^block*/id _retrieveExtensionBlock;

}

@property (nonatomic,retain) CXCallDirectoryStore * store;              //@synthesize store=_store - In the implementation block
@property (nonatomic,copy) id storeCreationBlock;                       //@synthesize storeCreationBlock=_storeCreationBlock - In the implementation block
@property (nonatomic,copy) id retrieveExtensionBlock;                   //@synthesize retrieveExtensionBlock=_retrieveExtensionBlock - In the implementation block
-(id)init;
-(CXCallDirectoryStore *)store;
-(void)setStore:(CXCallDirectoryStore *)arg1 ;
-(id)storeCreationBlock;
-(id)_performMigrationsStartingAtSchemaVersion:(long long)arg1 error:(id*)arg2 ;
-(id)retrieveExtensionBlock;
-(id)performMigrationsWithError:(id*)arg1 ;
-(void)setStoreCreationBlock:(id)arg1 ;
-(void)setRetrieveExtensionBlock:(id)arg1 ;
@end

