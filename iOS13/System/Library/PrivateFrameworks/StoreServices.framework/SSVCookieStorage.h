/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/


@protocol OS_dispatch_queue;
#import <StoreServices/StoreServices-Structs.h>
@class NSObject, NSURL, SSSQLiteDatabase;

@interface SSVCookieStorage : NSObject {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	BOOL _performingMigration;
	NSURL* _storageLocation;
	BOOL _usesSharedCookieDatabase;
	SSSQLiteDatabase* __database;

}

@property (nonatomic,readonly) SSSQLiteDatabase * _database;              //@synthesize _database=__database - In the implementation block
@property (assign,nonatomic) BOOL performingMigration;                    //@synthesize performingMigration=_performingMigration - In the implementation block
@property (readonly) NSURL * storageLocation; 
+(id)sharedInstance;
+(id)sharedStorage;
+(id)_getSetCookiesForResponse:(id)arg1 ;
+(BOOL)_currentProcessShouldUseRescuedStorageLocationForLocation:(id)arg1 ;
+(id)_rescuedStorageLocationForLocation:(id)arg1 ;
+(BOOL)_fileURLRepresentsSharedStorageLocation:(id)arg1 ;
+(id)_sharedStorageLocationPath;
+(BOOL)_bindStatement:(sqlite3_stmtRef)arg1 withValues:(id)arg2 ;
+(id)_getUserSetCookiesForResponse:(id)arg1 ;
+(id)_getGlobalSetCookiesForResponse:(id)arg1 ;
+(BOOL)_setupCookieDatabase:(id)arg1 forCookieStorage:(id)arg2 ;
+(BOOL)_migrateToVersion1WithDatabase:(id)arg1 ;
+(BOOL)_migrateToVersion2WithDatabase:(id)arg1 ;
+(BOOL)_fileIsOwnedByRoot:(id)arg1 ;
+(BOOL)_currentProcessIsRoot;
+(BOOL)responseHasSetCookies:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(SSSQLiteDatabase *)_database;
-(void)setCookiesForHTTPResponse:(id)arg1 account:(id)arg2 ;
-(id)cookieHeadersForURL:(id)arg1 account:(id)arg2 ;
-(void)removeCookiesWithAccount:(id)arg1 ;
-(void)setPerformingMigration:(BOOL)arg1 ;
-(id)allCookiesForAccount:(id)arg1 ;
-(void)removeAllCookies;
-(id)initWithStorageLocation:(id)arg1 ;
-(id)allCookiesForUserIdentifier:(id)arg1 scope:(long long)arg2 ;
-(id)_copyCookiesWithKey:(id)arg1 ;
-(id)cookieArrayBySettingFeatureEnablerWithArray:(id)arg1 key:(id)arg2 ;
-(id)cookieHeadersForURL:(id)arg1 userIdentifier:(id)arg2 scope:(long long)arg3 ;
-(id)_copyCookieDictionaryForURL:(id)arg1 key:(id)arg2 ;
-(BOOL)_shouldAddITFECookieToURL:(id)arg1 ;
-(void)setFeatureEnablerInDictionary:(id)arg1 key:(id)arg2 ;
-(id)cookiesForURL:(id)arg1 userIdentifier:(id)arg2 scope:(long long)arg3 ;
-(id)_copyCookieObjectsForURL:(id)arg1 key:(id)arg2 ;
-(BOOL)performingMigration;
-(void)_cookieDatabaseDidChange;
-(id)_columnNameForCookieProperty:(id)arg1 ;
-(void)removeCookiesWithUserIdentifier:(id)arg1 scope:(long long)arg2 ;
-(id)_accountForKey:(id)arg1 ;
-(void)_setCookies:(id)arg1 forKey:(id)arg2 ;
-(void)setCookiesForHTTPResponse:(id)arg1 userIdentifier:(id)arg2 scope:(long long)arg3 ;
-(id)_allCookieKeys;
-(void)_insertCookies:(id)arg1 forKey:(id)arg2 ;
-(void)synchronizeFeatureEnablerCookieWithCookieValue:(id)arg1 key:(id)arg2 result:(/*^block*/id)arg3 ;
-(id)fetchDefaults;
-(void)removeCookiesWithProperties:(id)arg1 ;
-(id)_copyPrivateCookiesForURL:(id)arg1 key:(id)arg2 ;
-(id)_copyPrivateCookieObjectsForURL:(id)arg1 key:(id)arg2 ;
-(id)_copyCookiesForPreparedSQLStatement:(sqlite3_stmtRef)arg1 ;
-(BOOL)_stopIncludingLocalCookies;
-(id)_filterCookies:(id)arg1 forURL:(id)arg2 ;
-(void)_bindInsertStatement:(sqlite3_stmtRef)arg1 forCookie:(id)arg2 key:(id)arg3 ;
-(id)allCookiesForUserIdentifier:(id)arg1 ;
-(id)cookieHeadersForURL:(id)arg1 userIdentifier:(id)arg2 ;
-(id)cookiesForURL:(id)arg1 account:(id)arg2 ;
-(id)cookiesForURL:(id)arg1 userIdentifier:(id)arg2 ;
-(void)removeCookiesWithUserIdentifier:(id)arg1 ;
-(void)setCookies:(id)arg1 forAccount:(id)arg2 ;
-(void)setCookies:(id)arg1 forUserIdentifier:(id)arg2 ;
-(void)setCookiesForHTTPResponse:(id)arg1 userIdentifier:(id)arg2 ;
-(void)setCookiesFromCookieStorage:(id)arg1 ;
-(NSURL *)storageLocation;
-(void)_handleSharedCookieDatabaseDidChangeDarwinNotification;
-(void)synchronizeCookies;
@end

