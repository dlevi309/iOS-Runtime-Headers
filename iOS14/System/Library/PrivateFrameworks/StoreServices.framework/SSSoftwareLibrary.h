/*
* Generated on Thursday, January 14, 2021 at 2:22:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)getRemovableSytemApplicationsWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)getLibraryItemsForITunesStoreItemIdentifiers:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)hasDemotedApplicationsWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)isInstalledApplicationWithBundleIdentifier:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)isRemovedSystemApplicationWithBundleIdentifier:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)playableApplicationsWithBundleIdentifiers:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)refreshReceiptsWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)restoreAllDemotedApplicationsWithOptions:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)restoreDemotedApplicationWithBundleIdentifier:(id)arg1 options:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)restoreRemovedSystemApplicationWithBundleIdentifier:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
@end

