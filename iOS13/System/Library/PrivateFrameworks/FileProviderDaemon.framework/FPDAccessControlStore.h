/*
* Generated on Monday, March 1, 2021 at 2:34:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
*/


@protocol OS_dispatch_queue;
@class PQLConnection, NSURL, NSObject;

@interface FPDAccessControlStore : NSObject {

	PQLConnection* _dbConnection;
	NSURL* _databaseBaseURL;
	BOOL _dbIsOpen;
	NSObject*<OS_dispatch_queue> _syncQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> syncQueue;              //@synthesize syncQueue=_syncQueue - In the implementation block
+(id)sharedStore;
-(id)init;
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)syncQueue;
-(void)openDatabase;
-(void)setSyncQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)isProviderIdentifier:(id)arg1 allowedToProvideItemID:(id)arg2 toConsumerWithIdentifier:(id)arg3 ;
-(id)initWithDatabaseBaseURL:(id)arg1 ;
-(id)_bundleKeyForBundleIdentifier:(id)arg1 db:(id)arg2 create:(BOOL)arg3 ;
-(id)_fileKeyForProviderKey:(id)arg1 domain:(id)arg2 identifier:(id)arg3 db:(id)arg4 create:(BOOL)arg5 ;
-(void)validateDatabase:(id)arg1 ;
-(BOOL)migrate:(id)arg1 fromLegacyDatabase:(id)arg2 ;
-(BOOL)isProviderWithIdentifier:(id)arg1 allowedToProvideItemID:(id)arg2 toConsumerWithIdentifier:(id)arg3 ;
-(void)performWithDBConnection:(/*^block*/id)arg1 ;
-(void)allowProviderWithIdentifier:(id)arg1 toProvideItemID:(id)arg2 toConsumerWithIdentifier:(id)arg3 ;
-(void)disallowProviderWithIdentifier:(id)arg1 fromProvidingItemWithID:(id)arg2 toConsumerWithIdentifier:(id)arg3 ;
-(void)reopenDatabaseAfterUnlock;
-(id)dumpForBundleIdentifier:(id)arg1 ;
@end

