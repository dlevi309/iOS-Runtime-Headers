/*
* Generated on Thursday, January 14, 2021 at 2:24:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithPersistenceBaseURL:(id)arg1 databaseName:(id)arg2 preferredIconSize:(CGSize)arg3 isReadOnly:(BOOL)arg4 ;
-(long long)_faviconStatusFromWBSSQLStoreStatus:(long long)arg1 ;
-(id)init;
-(void)iconForPageURLString:(id)arg1 includingPrivateData:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)iconForIconURLString:(id)arg1 includingPrivateData:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)_imageFromURL:(id)arg1 ;
-(void)_iconForIconUUID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)rejectedResourceInfoForPageURLString:(id)arg1 iconURLString:(id)arg2 includingPrivateData:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(NSURL *)diskCacheURL;
-(void)setIconIsRejectedResource:(BOOL)arg1 forPageURLString:(id)arg2 iconURLString:(id)arg3 isPrivate:(BOOL)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)closeWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)openAndCheckIntegrity:(BOOL)arg1 createIfNeeded:(BOOL)arg2 fallBackToMemoryStoreIfError:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)sqliteStoreDidFallBackToInMemoryStore:(id)arg1 ;
-(void)removeIconWithPageURLString:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)iconInfoForPageURLString:(id)arg1 includingPrivateData:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)sqliteStoreDidFailDatabaseIntegrityCheck:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setIconData:(id)arg1 forPageURLString:(id)arg2 iconURLString:(id)arg3 iconSize:(CGSize)arg4 hasGeneratedResolutions:(BOOL)arg5 isPrivate:(BOOL)arg6 completionHandler:(/*^block*/id)arg7 ;
-(void)linkPageURLString:(id)arg1 toIconURLString:(id)arg2 isPrivate:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)firstIconForVariantsOfPageURLString:(id)arg1 includingPrivateData:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)removeIconFilesNotReferencedInDatabaseWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSURL *)databaseURL;
-(void)iconInfoForIconURLString:(id)arg1 includingPrivateData:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)removeAllIconsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)removeIconsWithURLStringsNotFoundIn:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_finishSetUpWithStatus:(long long)arg1 ;
-(void)flushPrivateDataFromMemoryWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)dataCacheDidSetUp:(id)arg1 ;
-(void)savePendingChangesBeforeTermination;
-(void)firstIconForVariantsOfDomainString:(id)arg1 includingPrivateData:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)pageURLStringsPrefixedWithVariantsOfDomainString:(id)arg1 includingPrivateData:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

