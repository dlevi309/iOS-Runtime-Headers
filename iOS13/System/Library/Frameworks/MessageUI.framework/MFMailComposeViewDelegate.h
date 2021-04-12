/*
* Generated on Monday, March 1, 2021 at 2:32:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
*/


@protocol MFMailComposeViewDelegate <UIPickerViewDelegate,UITableViewDelegate,UITableViewDataSource,UIDocumentPickerDelegate,UIPopoverPresentationControllerDelegate>
@optional
-(void)composeWebViewDidResignFirstResponder;
-(void)showStyleSelector:(id)arg1;
-(void)showMissingAttachmentDataAlert;
-(void)composeWebViewDidChangeFontAttributes:(id)arg1;
-(void)composeWebViewDidFinishLoad;
-(void)composeViewBodyTextChanged:(id)arg1;
-(id)contentVariationName;
-(BOOL)canShowContentVariationPicker;
-(void)showContentVariationPickerFromRect:(CGRect)arg1 inView:(id)arg2;
-(UIEdgeInsets*)additionalContentInsetForComposeWebView:(id)arg1;

@required
-(id)emailAddresses;
-(id)presentationViewController;
-(BOOL)hasAttachments;
-(id)sendingEmailAddress;
-(void)setSendingEmailAddress:(id)arg1;
-(void)importDocument;
-(void)markupAttachment:(id)arg1;
-(id)compositionContext;
-(int)compositionType;
-(BOOL)canShowAttachmentPicker;
-(void)showPhotoPickerWithSourceType:(long long)arg1 fromSource:(id)arg2;
-(void)insertDrawing;
-(void)scanDocument;
-(void)changeQuoteLevel:(long long)arg1;
-(void)didInsertAttachment:(id)arg1;
-(void)insertPhotoOrVideo;
-(void)didRemoveAttachment:(id)arg1;
-(BOOL)canShowFromField;
-(void)updateSignature;
-(id)sendingAccountProxy;
-(BOOL)canShowImageSizeField;
-(void)selectCurrentEntryForFromAddressPickerView:(id)arg1;
-(void)scrollToSelectedEntryInFromAddressTableView:(id)arg1;
-(id)sendingEmailAddressIfExists;
-(BOOL)sendingEmailDirtied;
-(BOOL)bccAddressesDirtied;
-(id)currentScaleImageSize;
-(id)popoverManager;
-(void)didInsertBodyText:(id)arg1;

@end

