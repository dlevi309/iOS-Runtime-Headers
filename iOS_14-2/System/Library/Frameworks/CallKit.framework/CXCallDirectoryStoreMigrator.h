/*
* Generated on Thursday, January 14, 2021 at 2:24:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setStore:(CXCallDirectoryStore *)arg1 ;
-(id)init;
-(CXCallDirectoryStore *)store;
-(id)_performMigrationsStartingAtSchemaVersion:(long long)arg1 error:(id*)arg2 ;
-(void)setStoreCreationBlock:(id)arg1 ;
-(void)setRetrieveExtensionBlock:(id)arg1 ;
-(id)performMigrationsWithError:(id*)arg1 ;
-(id)storeCreationBlock;
-(id)retrieveExtensionBlock;
@end

