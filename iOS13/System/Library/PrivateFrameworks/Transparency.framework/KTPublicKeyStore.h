/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
*/


@class NSDictionary, NSArray, TransparencyManagedDataStore;

@interface KTPublicKeyStore : NSObject {

	BOOL _forceRefresh;
	NSDictionary* _applicationKeyStores;
	NSArray* _applications;
	TransparencyManagedDataStore* _dataStore;

}

@property (retain) NSDictionary * applicationKeyStores;                   //@synthesize applicationKeyStores=_applicationKeyStores - In the implementation block
@property (retain) NSArray * applications;                                //@synthesize applications=_applications - In the implementation block
@property (assign) BOOL forceRefresh;                                     //@synthesize forceRefresh=_forceRefresh - In the implementation block
@property (retain) TransparencyManagedDataStore * dataStore;              //@synthesize dataStore=_dataStore - In the implementation block
@property (readonly) BOOL ready; 
-(NSArray *)applications;
-(void)setApplications:(NSArray *)arg1 ;
-(BOOL)ready;
-(TransparencyManagedDataStore *)dataStore;
-(id)initWithDataStore:(id)arg1 ;
-(void)setDataStore:(TransparencyManagedDataStore *)arg1 ;
-(BOOL)forceRefresh;
-(void)configureWithClient:(id)arg1 ignoreCachedKeys:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NSDictionary *)applicationKeyStores;
-(void)configureWithClient:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)clearApplicationState:(id)arg1 error:(id*)arg2 ;
-(BOOL)configureWithDisk:(id*)arg1 ;
-(id)copyKeyStoreState;
-(id)copyMetadata;
-(id)readPublicKeyStoreFromDisk:(id*)arg1 ;
-(BOOL)writePublicKeyStoreToDisk:(id)arg1 error:(id*)arg2 ;
-(id)createApplicationKeyStore:(id)arg1 keyStoreResponse:(id)arg2 error:(id*)arg3 ;
-(void)setForceRefresh:(BOOL)arg1 ;
-(BOOL)saveDiskApplicationKeyStore:(id)arg1 error:(id*)arg2 ;
-(void)fetchKeyStore:(id)arg1 application:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)createApplicationKeyStore:(id)arg1 keyStoreData:(id)arg2 error:(id*)arg3 ;
-(BOOL)clearDiskApplicationKeyStore:(id)arg1 error:(id*)arg2 ;
-(BOOL)hasApplicationPublicKeyStoreOnDisk:(id)arg1 error:(id*)arg2 ;
-(void)setApplicationKeyStores:(NSDictionary *)arg1 ;
@end

