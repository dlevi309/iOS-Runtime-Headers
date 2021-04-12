/*
* Generated on Monday, March 1, 2021 at 2:34:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI
*/


@protocol _UIDocumentListControllerDelegate <NSObject>
@optional
-(BOOL)documentListController:(id)arg1 shouldHighlightItemAtURL:(id)arg2;
-(void)documentListController:(id)arg1 didHighlightItemAtURL:(id)arg2;
-(void)documentListController:(id)arg1 didUnhighlightItemAtURL:(id)arg2;
-(BOOL)documentListController:(id)arg1 shouldSelectItemAtURL:(id)arg2;
-(void)documentListControllerItemsChanged:(id)arg1;
-(void)documentListControllerURLWasRemoved:(id)arg1;
-(id)documentListController:(id)arg1 viewControllerForPreviewingItemAtURL:(id)arg2;
-(void)documentListController:(id)arg1 renameItemAtURL:(id)arg2 toName:(id)arg3 completion:(/*^block*/id)arg4;

@required
-(void)documentListController:(id)arg1 didSelectContainerWithViewController:(id)arg2;
-(void)documentListController:(id)arg1 didSelectItemAtURL:(id)arg2;
-(void)documentListController:(id)arg1 performAction:(long long)arg2 URL:(id)arg3 originatingView:(id)arg4 completion:(/*^block*/id)arg5;

@end

