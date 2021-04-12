/*
* Generated on Monday, March 1, 2021 at 2:34:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI
*/


@protocol _UIDocumentPickerServiceViewController <NSObject>
@optional
-(BOOL)shouldShowAction:(long long)arg1;
-(void)performAction:(long long)arg1 item:(id)arg2 view:(id)arg3 completion:(/*^block*/id)arg4;
-(BOOL)shouldHighlightItem:(id)arg1;
-(void)didHighlightItem:(id)arg1;
-(void)didUnhighlightItem:(id)arg1;
-(BOOL)shouldSelectItem:(id)arg1;
-(void)itemsOrSelectionDidChange:(BOOL)arg1;
-(id)previewViewControllerForItem:(id)arg1;

@required
-(void)didSelectItem:(id)arg1;

@end

