/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/


@class SSXPCConnection;

@interface SSSoftwareLibrary : NSObject {

	SSXPCConnection* _connection;

}
-(id)init;
-(void)getLibraryItemForBundleIdentifiers:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_sendDemotionMessage:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_getItemsWithMessage:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)demoteApplicationWithBundleIdentifier:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)getLibraryItemsForITunesStoreItemIdentifiers:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)getRemovableSytemApplicationsWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)hasDemotedApplicationsWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)isInstalledApplicationWithBundleIdentifier:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)isRemovedSystemApplicationWithBundleIdentifier:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)playableApplicationsWithBundleIdentifiers:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)refreshReceiptsWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)restoreAllDemotedApplicationsWithOptions:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)restoreDemotedApplicationWithBundleIdentifier:(id)arg1 options:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)restoreRemovedSystemApplicationWithBundleIdentifier:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
@end

