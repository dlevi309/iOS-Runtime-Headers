/*
* Generated on Thursday, January 14, 2021 at 2:23:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <libobjc.A.dylib/QLPreviewControllerDelegate.h>

@protocol EKEventAttachmentCellControllerDelegate;
@class EKEventAttachmentCell, EKAttachment, NSString;

@interface EKEventAttachmentCellController : NSObject <QLPreviewControllerDelegate> {

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
+(BOOL)_attachmentIsViewable:(id)arg1 ;
+(id)_okLocalizedString;
+(id)_cannotOpenAttachmentLocalizedString;
+(id)_keyForAttachment:(id)arg1 ;
+(id)_attachmentDownloadErrorLocalizedString;
+(id)cellControllersForAttachments:(id)arg1 givenExistingControllers:(id)arg2 sourceIsManaged:(BOOL)arg3 ;
-(EKEventAttachmentCell *)cell;
-(void)tearDown;
-(id<EKEventAttachmentCellControllerDelegate>)delegate;
-(void)setDelegate:(id<EKEventAttachmentCellControllerDelegate>)arg1 ;
-(id)attachmentFilename;
-(EKAttachment *)attachment;
-(void)cellSelected;
-(id)event;
-(id)initWithAttachment:(id)arg1 sourceIsManaged:(BOOL)arg2 ;
-(void)_clearDownloadID;
-(void)_presentPreviewWithURL:(id)arg1 filename:(id)arg2 ;
-(unsigned long long)supportedInterfaceOrientationMaskForInterfaceOrientation:(long long)arg1 ;
-(void)_openExternalAttachmentURLInBrowser:(id)arg1 ;
-(void)startAttachmentDownload;
-(void)promptToDownloadAttachment;
-(id)_downloadProgressStringWithDownloadedBytes:(id)arg1 outOfTotalBytes:(id)arg2 ;
-(void)_presentPreviewAttachmentInPreviewWithInfo:(id)arg1 ;
-(void)setAttachment:(EKAttachment *)arg1 ;
-(void)previewControllerWillDismiss:(id)arg1 ;
@end

