/*
* Generated on Monday, March 1, 2021 at 2:35:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
*/

#import <libobjc.A.dylib/WBSDataCache.h>

@protocol OS_dispatch_queue, WBSDataCacheDelegate;
@class NSObject, NSCache, NSMutableSet, NSMutableDictionary, WBSCoalescedAsynchronousWriter, NSURL, NSString;

@interface WBSOnDiskDataCache : NSObject <WBSDataCache> {

	NSObject*<OS_dispatch_queue> _diskAccessQueue;
	NSObject*<OS_dispatch_queue> _internalQueue;
	NSCache* _entriesForKeyStringsCache;
	NSMutableSet* _pendingKeyStringRequests;
	NSMutableSet* _missingEntryKeyStrings;
	NSMutableDictionary* _cacheSettings;
	WBSCoalescedAsynchronousWriter* _cacheSettingsWriter;
	BOOL _terminating;
	BOOL _isInMemoryCacheEnabled;
	id<WBSDataCacheDelegate> _dataCacheDelegate;
	NSURL* _cacheDirectoryURL;

}

@property (assign,nonatomic) BOOL isInMemoryCacheEnabled;                                    //@synthesize isInMemoryCacheEnabled=_isInMemoryCacheEnabled - In the implementation block
@property (nonatomic,readonly) NSURL * cacheDirectoryURL;                                    //@synthesize cacheDirectoryURL=_cacheDirectoryURL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isTerminating,nonatomic,readonly) BOOL terminating;                        //@synthesize terminating=_terminating - In the implementation block
@property (assign,nonatomic,__weak) id<WBSDataCacheDelegate> dataCacheDelegate;              //@synthesize dataCacheDelegate=_dataCacheDelegate - In the implementation block
-(id)init;
-(void)reset;
-(void)setUp;
-(NSURL *)cacheDirectoryURL;
-(BOOL)isTerminating;
-(id)settingForKey:(id)arg1 ;
-(void)setSetting:(id)arg1 forKey:(id)arg2 ;
-(id)initWithCacheDirectoryURL:(id)arg1 ;
-(void)setDataCacheDelegate:(id<WBSDataCacheDelegate>)arg1 ;
-(void)setIsInMemoryCacheEnabled:(BOOL)arg1 ;
-(void)savePendingChangesBeforeTearDown;
-(void)removeEntriesForKeyStrings:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setEntry:(id)arg1 forKeyString:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)removeEntriesForKeyStringsNotIncludedIn:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)getEntryURLForKeyString:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_internalQueueName;
-(void)_internalQueueDispatchSync:(/*^block*/id)arg1 ;
-(id)_diskAccessQueueName;
-(id)_cacheSettingsFileURL;
-(void)_notifyDidFinishSettingUp;
-(void)_internalQueueDispatchAsync:(/*^block*/id)arg1 ;
-(void)_dispatchDiskAccessBlock:(/*^block*/id)arg1 ;
-(id)_fileLocationForKeyString:(id)arg1 ;
-(void)_didLoadEntry:(id)arg1 forKeyString:(id)arg2 ;
-(void)_didFailToLoadEntryForKeyString:(id)arg1 error:(id)arg2 ;
-(long long)_internalEntryStateForKeyString:(id)arg1 ;
-(id)requestEntryForKeyString:(id)arg1 ;
-(long long)entryStateForKeyString:(id)arg1 ;
-(id<WBSDataCacheDelegate>)dataCacheDelegate;
-(BOOL)isInMemoryCacheEnabled;
@end

