/*
* Generated on Thursday, January 14, 2021 at 2:21:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


@protocol CKPhotoBrowserViewControllerSendDelegate <CKBrowserViewControllerSendDelegate>
@required
-(void)stageAssetArchive:(id)arg1 skipShelf:(BOOL)arg2 completionHandler:(/*^block*/id)arg3;
-(void)showEntryViewShelf:(id)arg1 forPlugin:(id)arg2 completion:(/*^block*/id)arg3;
-(id)workingDraftDirForPluginIdentifier:(id)arg1;
-(void)showEntryViewShelf:(id)arg1;
-(void)dismissEntryViewShelf;
-(void)showPhotosBrowser;
-(void)showModalViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3;
-(id)workingDirForDraft;

@end

