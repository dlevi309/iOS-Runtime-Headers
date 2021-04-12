/*
* Generated on Monday, March 1, 2021 at 2:31:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


@protocol CKPhotoBrowserViewControllerSendDelegate <CKBrowserViewControllerSendDelegate>
@required
-(void)stageAssetArchive:(id)arg1 skipShelf:(BOOL)arg2 completionHandler:(/*^block*/id)arg3;
-(void)showEntryViewShelf:(id)arg1 forPlugin:(id)arg2 completion:(/*^block*/id)arg3;
-(id)workingDraftDirForPluginIdentifier:(id)arg1;
-(void)showEntryViewShelf:(id)arg1;
-(void)showModalViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3;
-(void)dismissEntryViewShelf;
-(void)showPhotosBrowser;
-(id)workingDirForDraft;

@end

