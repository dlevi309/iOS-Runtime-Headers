/*
* Generated on Monday, March 1, 2021 at 2:31:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKit/UIDocumentInteractionControllerDelegate.h>

@protocol EKEventAttachmentCellControllerDelegate;
@class EKEventAttachmentCell, EKAttachment, NSString;

@interface EKEventAttachmentCellController : NSObject <UIDocumentInteractionControllerDelegate> {

	id _downloadID;
	EKEventAttachmentCell* _cell;
	BOOL _sourceIsManaged;
	EKAttachment* _attachment;
	id<EKEventAttachmentCellControllerDelegate> _delegate;

}

@property (readonly) EKEventAttachmentCell * cell;                                                     //@synthesize cell=_cell - In the implementation block
@property (nonatomic,retain) EKAttachment * attachment;                                                //@synthesize attachment=_attachment - In the implementation block
@property (assign,nonatomic,__weak) id<EKEventAttachmentCellControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)cellControllersForAttachments:(id)arg1 givenExistingControllers:(id)arg2 sourceIsManaged:(BOOL)arg3 ;
+(id)_okLocalizedString;
+(BOOL)_attachmentIsViewable:(id)arg1 ;
+(id)_keyForAttachment:(id)arg1 ;
+(id)_cannotOpenAttachmentLocalizedString;
+(id)_attachmentDownloadErrorLocalizedString;
-(id<EKEventAttachmentCellControllerDelegate>)delegate;
-(void)setDelegate:(id<EKEventAttachmentCellControllerDelegate>)arg1 ;
-(EKAttachment *)attachment;
-(void)setAttachment:(EKAttachment *)arg1 ;
-(EKEventAttachmentCell *)cell;
-(id)documentInteractionControllerViewControllerForPreview:(id)arg1 ;
-(id)documentInteractionControllerViewForPreview:(id)arg1 ;
-(void)tearDown;
-(void)cellSelected;
-(id)initWithAttachment:(id)arg1 sourceIsManaged:(BOOL)arg2 ;
-(void)_clearDownloadID;
-(void)_presentPreviewWithURL:(id)arg1 filename:(id)arg2 ;
-(void)_openExternalAttachmentURLInBrowser:(id)arg1 ;
-(id)_downloadProgressStringWithDownloadedBytes:(id)arg1 outOfTotalBytes:(id)arg2 ;
-(void)_presentPreviewAttachmentInPreviewWithInfo:(id)arg1 ;
-(void)documentInteractionControllerWillEndPreview:(id)arg1 ;
@end

