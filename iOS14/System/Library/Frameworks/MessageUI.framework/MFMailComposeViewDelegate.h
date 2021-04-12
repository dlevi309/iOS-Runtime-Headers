/*
* Generated on Thursday, January 14, 2021 at 2:23:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
*/


@protocol MFMailComposeViewDelegate <UIPickerViewDelegate,UIDocumentPickerDelegate,UIPopoverPresentationControllerDelegate>
@optional
-(void)showStyleSelector:(id)arg1;
-(void)showMissingAttachmentDataAlert;
-(void)composeWebViewDidChangeFontAttributes:(id)arg1;
-(void)takeFocusFromComposeWebView:(id)arg1 inDirection:(unsigned long long)arg2;
-(void)composeWebViewDidFinishLoad;
-(void)composeViewBodyTextChanged:(id)arg1;
-(BOOL)canShowContentVariationPicker;
-(UIEdgeInsets*)additionalContentInsetForComposeWebView:(id)arg1;
-(void)composeWebViewDidResignFirstResponder;
-(id)contentVariationName;

@required
-(id)sendingAccountProxy;
-(void)insertDrawing;
-(BOOL)canShowImageSizeField;
-(BOOL)hasAttachments;
-(BOOL)canShowAttachmentPicker;
-(void)changeQuoteLevel:(long long)arg1;
-(id)emailAddresses;
-(void)showPhotoPickerWithSourceType:(long long)arg1 fromSource:(id)arg2;
-(void)didInsertAttachment:(id)arg1;
-(void)insertPhotoOrVideo;
-(void)didRemoveAttachment:(id)arg1;
-(id)presentationViewController;
-(BOOL)canShowFromField;
-(id)sendingEmailAddress;
-(BOOL)sendingEmailDirtied;
-(BOOL)bccAddressesDirtied;
-(id)currentScaleImageSize;
-(id)popoverManager;
-(void)didInsertBodyText:(id)arg1;
-(void)setSendingEmailAddress:(id)arg1;
-(void)importDocument;
-(void)markupAttachment:(id)arg1;
-(id)sendingEmailAddressIfExists;
-(id)compositionContext;
-(int)compositionType;
-(void)scanDocument;
-(void)updateSignature;

@end

