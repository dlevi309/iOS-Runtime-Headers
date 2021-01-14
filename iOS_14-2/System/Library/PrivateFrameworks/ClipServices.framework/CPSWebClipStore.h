/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClipServices.framework/ClipServices
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface CPSWebClipStore : NSObject {

	NSObject*<OS_dispatch_queue> _queue;

}
+(id)sharedStore;
+(id)_urlForWebClipWithIdentifier:(id)arg1 ;
+(id)_readWebClipDictionaryRepresentationFromDiskWithWebClipIdentifier:(id)arg1 ;
-(void)fetchAppClipsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)getWebClipWithURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)getWebClipsBackedbyAppClipIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)reloadSpringBoardIconForWebClipWithIdentifier:(id)arg1 ;
-(id)_createOrUpdateExistingWebClipWithClipMetadata:(id)arg1 createdNewWebClip:(BOOL*)arg2 error:(id*)arg3 ;
-(id)_enumerateAndFilterClipsWithBlock:(/*^block*/id)arg1 ;
-(id)_removeFileFromPath:(id)arg1 ;
-(id)synchronouslyGetAppClipWithIdentifier:(id)arg1 ;
-(void)removeWebClipsWithApplicationBundleIdentifiers:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)getAppClipWithURLHash:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)purgeDuplicateWebClipsWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)_redirectPoweredByWebClipsWithApplicationBundleIdentifier:(id)arg1 toParentApplicationBundleIdentifier:(id)arg2 errors:(id*)arg3 ;
-(void)saveWebClip:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)getAppClipWithIdentifier:(id)arg1 receiveOnQueue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)_removeWebClipWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(void)updateWebClipTitle:(id)arg1 forAppClipBundleIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)removeWebClipsWithApplicationBundleIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)_removeWebClipsWithApplicationBundleIdentifier:(id)arg1 errors:(id*)arg2 ;
-(void)createOrUpdateExistingWebClipWithMetadata:(id)arg1 comletionHandler:(/*^block*/id)arg2 ;
-(id)_webClipsBackedbyAppClipIdentifier:(id)arg1 ;
-(id)_appClips;
-(void)removeWebClipWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)_saveWebClip:(id)arg1 error:(id*)arg2 ;
-(id)_fetchInstalledAppClips;
-(id)_init;
-(void)_reloadSpringBoardIconForWebClipWithIdentifier:(id)arg1 ;
-(void)removeAppClipIconForWebClipWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateAppClipIcon:(id)arg1 forWebClipWithIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)redirectPoweredByWebClipsWithApplicationBundleIdentifier:(id)arg1 toParentApplicationBundleIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)_copyOrReplaceExistingFileAtPath:(id)arg1 withNewFileAtPath:(id)arg2 ;
-(id)_bookmarkWebClips;
-(void)fetchBookmarkWebClipsWithCompletionHandler:(/*^block*/id)arg1 ;
@end

