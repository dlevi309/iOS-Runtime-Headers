/*
* Generated on Thursday, January 14, 2021 at 2:22:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
*/

#import <ShareSheet/ShareSheet-Structs.h>
#import <ShareSheet/UIPrintActivity.h>
#import <libobjc.A.dylib/QLPreviewControllerDelegate.h>
#import <libobjc.A.dylib/QLPreviewControllerDataSource.h>
#import <UIKit/UIDocumentPickerDelegate.h>

@class QLPreviewController, UICreatePDFActivityItem, NSString;

@interface UICreatePDFActivity : UIPrintActivity <QLPreviewControllerDelegate, QLPreviewControllerDataSource, UIDocumentPickerDelegate> {

	QLPreviewController* _previewController;
	UICreatePDFActivityItem* _previewURLItem;

}

@property (nonatomic,retain) QLPreviewController * previewController;               //@synthesize previewController=_previewController - In the implementation block
@property (nonatomic,retain) UICreatePDFActivityItem * previewURLItem;              //@synthesize previewURLItem=_previewURLItem - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)_xpcAttributes;
-(void)_cleanup;
-(id)activityType;
-(void)prepareWithActivityItems:(id)arg1 ;
-(void)performActivity;
-(void)_setupQuickLookWithURL:(id)arg1 activityItems:(id)arg2 isPreview:(BOOL)arg3 ;
-(void)setPreviewURLItem:(UICreatePDFActivityItem *)arg1 ;
-(BOOL)previewController:(id)arg1 canEditItem:(id)arg2 ;
-(BOOL)previewController:(id)arg1 shouldSaveEditedItem:(id)arg2 ;
-(id)excludedActivityTypesForPreviewController:(id)arg1 ;
-(BOOL)shouldAppendDefaultDismissActionsForPreviewController:(id)arg1 ;
-(UICreatePDFActivityItem *)previewURLItem;
-(BOOL)shouldPresentDismissActionsWithoutEditedItemsForPreviewController:(id)arg1 ;
-(id)dismissActionsForPreviewController:(id)arg1 ;
-(void)setPreviewController:(QLPreviewController *)arg1 ;
-(QLPreviewController *)previewController;
-(id)_systemImageName;
-(id)_embeddedActivityViewController;
-(void)documentPicker:(id)arg1 didPickDocumentsAtURLs:(id)arg2 ;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(void)previewControllerDidDismiss:(id)arg1 ;
-(id)activityTitle;
-(long long)numberOfPreviewItemsInPreviewController:(id)arg1 ;
-(id)previewController:(id)arg1 previewItemAtIndex:(long long)arg2 ;
-(id)activityViewController;
@end

