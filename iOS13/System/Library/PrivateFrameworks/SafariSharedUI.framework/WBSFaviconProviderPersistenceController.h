/*
* Generated on Monday, March 1, 2021 at 2:35:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
*/

#import <SafariSharedUI/SafariSharedUI-Structs.h>
#import <libobjc.A.dylib/WBSDataCacheDelegate.h>
#import <libobjc.A.dylib/WBSSQLiteStoreDelegate.h>

@protocol OS_dispatch_queue;
@class NSURL, WBSOnDiskDataCache, WBSFaviconProviderDatabaseController, WBSFaviconProviderRecordCache, WBSFaviconProviderPrivateCache, NSObject, NSString;

@interface WBSFaviconProviderPersistenceController : NSObject <WBSDataCacheDelegate, WBSSQLiteStoreDelegate> {

	NSURL* _baseURL;
	WBSOnDiskDataCache* _faviconDiskCache;
	WBSFaviconProviderDatabaseController* _faviconDatabase;
	WBSFaviconProviderRecordCache* _recordsCache;
	WBSFaviconProviderPrivateCache* _privateCache;
	/*^block*/id _setUpCompletionHandler;
	NSObject*<OS_dispatch_queue> _internalQueue;
	long long _controllerState;
	CGSize _preferredIconSize;
	BOOL _isReadOnly;
	NSURL* _databaseURL;
	NSURL* _diskCacheURL;

}

@property (nonatomic,readonly) NSURL * databaseURL;                 //@synthesize databaseURL=_databaseURL - In the implementation block
@property (nonatomic,readonly) NSURL * diskCacheURL;                //@synthesize diskCacheURL=_diskCacheURL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)closeWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSURL *)databaseURL;
-(void)savePendingChangesBeforeTermination;
-(void)sqliteStoreDidFailDatabaseIntegrityCheck:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)sqliteStoreDidFallBackToInMemoryStore:(id)arg1 ;
-(NSURL *)diskCacheURL;
-(id)initWithPersistenceBaseURL:(id)arg1 databaseName:(id)arg2 preferredIconSize:(CGSize)arg3 isReadOnly:(BOOL)arg4 ;
-(void)removeIconFilesNotReferencedInDatabaseWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)openAndCheckIntegrity:(BOOL)arg1 createIfNeeded:(BOOL)arg2 fallBackToMemoryStoreIfError:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)iconInfoForIconURLString:(id)arg1 includingPrivateData:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)iconInfoForPageURLString:(id)arg1 includingPrivateData:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)rejectedResourceInfoForPageURLString:(id)arg1 iconURLString:(id)arg2 includingPrivateData:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)setIconIsRejectedResource:(BOOL)arg1 forPageURLString:(id)arg2 iconURLString:(id)arg3 isPrivate:(BOOL)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)linkPageURLString:(id)arg1 toIconURLString:(id)arg2 isPrivate:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)setIconData:(id)arg1 forPageURLString:(id)arg2 iconURLString:(id)arg3 iconSize:(CGSize)arg4 hasGeneratedResolutions:(BOOL)arg5 isPrivate:(BOOL)arg6 completionHandler:(/*^block*/id)arg7 ;
-(void)removeIconsWithURLStringsNotFoundIn:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeIconWithPageURLString:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)flushPrivateDataFromMemoryWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)removeAllIconsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)iconForPageURLString:(id)arg1 includingPrivateData:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)pageURLStringsPrefixedWithVariantsOfDomainString:(id)arg1 includingPrivateData:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)firstIconForVariantsOfDomainString:(id)arg1 includingPrivateData:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)firstIconForVariantsOfPageURLString:(id)arg1 includingPrivateData:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_finishSetUpWithStatus:(long long)arg1 ;
-(long long)_faviconStatusFromWBSSQLStoreStatus:(long long)arg1 ;
-(id)_imageFromURL:(id)arg1 ;
-(void)_iconForIconUUID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)dataCacheDidSetUp:(id)arg1 ;
-(void)iconForIconURLString:(id)arg1 includingPrivateData:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

