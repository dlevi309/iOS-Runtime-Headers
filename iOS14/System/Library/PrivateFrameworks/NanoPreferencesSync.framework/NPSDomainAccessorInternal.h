/*
* Generated on Thursday, January 14, 2021 at 2:24:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPreferencesSync.framework/NanoPreferencesSync
*/

#import <libobjc.A.dylib/NPSDomainAccessorFilePresenterDelegate.h>

@protocol OS_dispatch_queue;
@class NSUUID, NSString, NSURL, NSObject, NSMutableSet, NSMutableDictionary, NPSDomainAccessorFilePresenter;

@interface NPSDomainAccessorInternal : NSObject <NPSDomainAccessorFilePresenterDelegate> {

	BOOL _nanoSettingsDirectoryExists;
	BOOL _hasReadFromDisk;
	NSUUID* _pairingID;
	NSString* _pairingStorePath;
	NSString* _domain;
	NSURL* _domainURL;
	NSObject*<OS_dispatch_queue> _internalQueue;
	NSObject*<OS_dispatch_queue> _externalQueue;
	unsigned long long _referenceCounter;
	NSMutableSet* _dirtyKeysForWriting;
	NSMutableDictionary* _map;
	NPSDomainAccessorFilePresenter* _filePresenter;

}

@property (nonatomic,retain) NSUUID * pairingID;                                          //@synthesize pairingID=_pairingID - In the implementation block
@property (nonatomic,retain) NSString * pairingStorePath;                                 //@synthesize pairingStorePath=_pairingStorePath - In the implementation block
@property (nonatomic,retain) NSString * domain;                                           //@synthesize domain=_domain - In the implementation block
@property (nonatomic,retain) NSURL * domainURL;                                           //@synthesize domainURL=_domainURL - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> internalQueue;                  //@synthesize internalQueue=_internalQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> externalQueue;                  //@synthesize externalQueue=_externalQueue - In the implementation block
@property (assign,nonatomic) unsigned long long referenceCounter;                         //@synthesize referenceCounter=_referenceCounter - In the implementation block
@property (assign,nonatomic) BOOL nanoSettingsDirectoryExists;                            //@synthesize nanoSettingsDirectoryExists=_nanoSettingsDirectoryExists - In the implementation block
@property (assign,nonatomic) BOOL hasReadFromDisk;                                        //@synthesize hasReadFromDisk=_hasReadFromDisk - In the implementation block
@property (nonatomic,retain) NSMutableSet * dirtyKeysForWriting;                          //@synthesize dirtyKeysForWriting=_dirtyKeysForWriting - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * map;                                   //@synthesize map=_map - In the implementation block
@property (nonatomic,retain) NPSDomainAccessorFilePresenter * filePresenter;              //@synthesize filePresenter=_filePresenter - In the implementation block
+(void)applicationDidEnterBackground;
+(void)initialize;
+(BOOL)domainIsValid:(id)arg1 ;
+(void)applicationDidResume;
+(id)internalAccessorForPairingID:(id)arg1 pairingDataStore:(id)arg2 domain:(id)arg3 ;
+(void)decrementInternalAccessorReferenceCount:(id)arg1 ;
+(id)copyDomainListForPairingDataStore:(id)arg1 ;
+(void)extensionDidBecomeActive;
+(void)extensionWillResignActive;
+(void)invalidateAndReleaseUnreferencedAccessors;
+(id)urlForDomain:(id)arg1 pairingDataStore:(id)arg2 ;
+(id)cfTypeNameForCFPropertyListRef:(void*)arg1 ;
+(BOOL)valueIsValid:(id)arg1 ;
+(id)readDomainURL:(id)arg1 withError:(id*)arg2 ;
+(void)mergeDirtyKeys:(id)arg1 fromDictionary:(id)arg2 toDictionary:(id)arg3 ;
+(id)writeDomain:(id)arg1 toURL:(id)arg2 ;
-(NSUUID *)pairingID;
-(void)setInternalQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)dictionaryRepresentation;
-(void)setFloat:(float)arg1 forKey:(id)arg2 ;
-(id)dataForKey:(id)arg1 ;
-(float)floatForKey:(id)arg1 ;
-(id)dictionaryForKey:(id)arg1 ;
-(void)setMap:(NSMutableDictionary *)arg1 ;
-(void)setLong:(long long)arg1 forKey:(id)arg2 ;
-(id)URLForKey:(id)arg1 ;
-(long long)longForKey:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)internalQueue;
-(void)setDouble:(double)arg1 forKey:(id)arg2 ;
-(double)doubleForKey:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(void)setDomain:(NSString *)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(NSString *)domain;
-(void)setInteger:(long long)arg1 forKey:(id)arg2 ;
-(void)invalidatePresenter;
-(void)objectForKey:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(long long)integerForKey:(id)arg1 keyExistsAndHasValidFormat:(BOOL*)arg2 ;
-(long long)longForKey:(id)arg1 keyExistsAndHasValidFormat:(BOOL*)arg2 ;
-(id)synchronize;
-(void)setURL:(id)arg1 forKey:(id)arg2 ;
-(id)objectForKey:(id)arg1 ;
-(NSMutableDictionary *)map;
-(unsigned long long)referenceCounter;
-(void)synchronizeWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)stringArrayForKey:(id)arg1 ;
-(float)floatForKey:(id)arg1 keyExistsAndHasValidFormat:(BOOL*)arg2 ;
-(double)doubleForKey:(id)arg1 keyExistsAndHasValidFormat:(BOOL*)arg2 ;
-(unsigned long long)domainSize;
-(BOOL)requiresDeviceUnlockedSinceBoot;
-(NSObject*<OS_dispatch_queue>)externalQueue;
-(void)setExternalQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)filePresenterDidBecomeNonCurrent:(id)arg1 ;
-(void)setDomainURL:(NSURL *)arg1 ;
-(BOOL)boolForKey:(id)arg1 ;
-(id)arrayForKey:(id)arg1 ;
-(id)initWithPairingID:(id)arg1 pairingDataStore:(id)arg2 domain:(id)arg3 ;
-(void)setReferenceCounter:(unsigned long long)arg1 ;
-(void)setHasReadFromDisk:(BOOL)arg1 ;
-(id)createNanoSettingsDirectory;
-(void)_invalidatePresenter;
-(void)setBool:(BOOL)arg1 forKey:(id)arg2 ;
-(void)_setObject:(id)arg1 forKey:(id)arg2 ;
-(long long)integerForKey:(id)arg1 ;
-(id)_copyKeyList;
-(id)_synchronizeReadOnly:(BOOL)arg1 ;
-(id)canSynchronizeForWritingURL:(id)arg1 readFirst:(BOOL)arg2 ;
-(id)canSynchronizeForReadingURL:(id)arg1 ;
-(id)_objectForKey:(id)arg1 error:(id*)arg2 ;
-(void)setPairingID:(NSUUID *)arg1 ;
-(void)setPairingStorePath:(NSString *)arg1 ;
-(BOOL)nanoSettingsDirectoryExists;
-(void)setNanoSettingsDirectoryExists:(BOOL)arg1 ;
-(BOOL)hasReadFromDisk;
-(NSMutableSet *)dirtyKeysForWriting;
-(void)setDirtyKeysForWriting:(NSMutableSet *)arg1 ;
-(void)setFilePresenter:(NPSDomainAccessorFilePresenter *)arg1 ;
-(id)copyKeyList;
-(NSURL *)domainURL;
-(NPSDomainAccessorFilePresenter *)filePresenter;
-(id)stringForKey:(id)arg1 ;
-(NSString *)pairingStorePath;
-(void)dealloc;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(BOOL)boolForKey:(id)arg1 keyExistsAndHasValidFormat:(BOOL*)arg2 ;
@end

