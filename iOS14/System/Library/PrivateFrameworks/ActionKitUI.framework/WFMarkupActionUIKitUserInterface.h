/*
* Generated on Thursday, January 14, 2021 at 2:27:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
*/

#import <ActionKitUI/ActionKitUI-Structs.h>
#import <WorkflowKit/WFActionUserInterface.h>
#import <libobjc.A.dylib/QLPreviewControllerDataSource.h>
#import <libobjc.A.dylib/QLPreviewControllerDelegate.h>
#import <libobjc.A.dylib/WFMarkupActionUserInterface.h>

@class NSArray, NSMapTable, NSString;

@interface WFMarkupActionUIKitUserInterface : WFActionUserInterface <QLPreviewControllerDataSource, QLPreviewControllerDelegate, WFMarkupActionUserInterface> {

	NSArray* _previewItems;
	NSMapTable* _editedPreviewItems;
	/*^block*/id _completionHandler;

}

@property (nonatomic,retain) NSArray * previewItems;                       //@synthesize previewItems=_previewItems - In the implementation block
@property (nonatomic,retain) NSMapTable * editedPreviewItems;              //@synthesize editedPreviewItems=_editedPreviewItems - In the implementation block
@property (nonatomic,copy) id completionHandler;                           //@synthesize completionHandler=_completionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCompletionHandler:(id)arg1 ;
-(NSArray *)previewItems;
-(id)completionHandler;
-(void)setPreviewItems:(NSArray *)arg1 ;
-(void)finishWithError:(id)arg1 ;
-(void)previewControllerDidDismiss:(id)arg1 ;
-(long long)numberOfPreviewItemsInPreviewController:(id)arg1 ;
-(id)previewController:(id)arg1 previewItemAtIndex:(long long)arg2 ;
-(long long)previewController:(id)arg1 editingModeForPreviewItem:(id)arg2 ;
-(void)previewController:(id)arg1 didSaveEditedCopyOfPreviewItem:(id)arg2 atURL:(id)arg3 ;
-(id)editedItems;
-(void)cancelPresentationWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)showWithPreviewItems:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSMapTable *)editedPreviewItems;
-(void)setEditedPreviewItems:(NSMapTable *)arg1 ;
@end

