/*
* Generated on Thursday, January 14, 2021 at 2:23:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
*/

#import <MessageUI/MessageUI-Structs.h>
#import <WebKit/WKWebView.h>
#import <libobjc.A.dylib/MFComposeBodyFieldObserver.h>
#import <libobjc.A.dylib/WKNavigationDelegate.h>
#import <libobjc.A.dylib/_WKInputDelegate.h>
#import <libobjc.A.dylib/WKUIDelegatePrivate.h>

@protocol MFMailComposeViewDelegate, MFMailSignatureController, MFComposeBodyFieldController, MFComposeWebViewDelegate;
@class NSString, UIBarButtonItemGroup, NSArray, _WKRemoteObjectInterface, NSMutableDictionary, UIView;

@interface MFComposeWebView : WKWebView <MFComposeBodyFieldObserver, WKNavigationDelegate, _WKInputDelegate, WKUIDelegatePrivate> {

	id<MFMailComposeViewDelegate> _mailComposeViewDelegate;
	NSString* _compositionContextID;
	id<MFMailSignatureController> _signatureControllerProxy;
	id<MFComposeBodyFieldController> _bodyFieldProxy;
	UIBarButtonItemGroup* _leadingInputAssistantItemGroup;
	NSArray* _trailingInputAssistantItemGroups;
	BOOL _shouldShowStandardButtons;
	unsigned long long _imageCount;
	BOOL _dirty;
	unsigned long long _dirtyChangeIgnoreCount;
	_WKRemoteObjectInterface* _bodyFieldObserverInterface;
	NSArray* _selectedAttachmentIdentifiers;
	unsigned long long _attachmentSequenceNumber;
	NSMutableDictionary* _attachmentsByUniqueIdentifier;
	NSMutableDictionary* _attachmentCIDsByIdentifier;
	NSArray* _originalAttachmentWrappers;
	BOOL _selectionContainsLink;
	BOOL _isFinishing;
	BOOL _originalAttachmentsWereRestored;
	BOOL _attachmentDataMissingAlertDisplayed;
	id<MFComposeWebViewDelegate> _composeWebViewDelegate;
	UIView* _inputViewForPreservingFocus;

}

@property (nonatomic,retain) UIView * inputViewForPreservingFocus;                                                                           //@synthesize inputViewForPreservingFocus=_inputViewForPreservingFocus - In the implementation block
@property (nonatomic,readonly) NSArray * _mailComposeEditingTrailingInputAssistantGroups; 
@property (nonatomic,readonly) UIBarButtonItemGroup * _mailComposeEditingLeadingInputAssistantGroup; 
@property (setter=_setLeadingInputAssistantItemGroup:,nonatomic,retain) UIBarButtonItemGroup * _leadingInputAssistantItemGroup; 
@property (setter=_setTrailingInputAssistantItemGroups:,nonatomic,retain) NSArray * _trailingInputAssistantItemGroups; 
@property (assign,nonatomic,__weak) id<MFComposeWebViewDelegate> composeWebViewDelegate;                                                     //@synthesize composeWebViewDelegate=_composeWebViewDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<MFMailComposeViewDelegate> mailComposeViewDelegate; 
@property (nonatomic,readonly) id<MFMailSignatureController> signatureControllerProxy; 
@property (assign,getter=isDirty,nonatomic) BOOL dirty; 
@property (assign,nonatomic,__weak) NSString * compositionContextID; 
@property (nonatomic,readonly) BOOL allowsAttachmentElements; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)log;
+(id)_webViewConfiguration;
-(void)_close;
-(BOOL)resignFirstResponder;
-(BOOL)becomeFirstResponder;
-(void)setDirty:(BOOL)arg1 ;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)keyCommands;
-(id)_filenameForVideoAttachmentAtURL:(id)arg1 ;
-(id)_makeAttachmentDataWithFileURL:(id)arg1 type:(id)arg2 ;
-(void)_insertDocumentFromData:(id)arg1 isImage:(BOOL)arg2 contentID:(id)arg3 ;
-(void)_removeAttachment:(id)arg1 ;
-(BOOL)_getExtensionAndMimeTypeForImageData:(id)arg1 outExtension:(id*)arg2 outMimeType:(id*)arg3 ;
-(id)nextAttachmentName;
-(UIBarButtonItemGroup *)_mailComposeEditingLeadingInputAssistantGroup;
-(NSArray *)_mailComposeEditingTrailingInputAssistantGroups;
-(BOOL)isDirty;
-(void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(/*^block*/id)arg3 ;
-(void)_webView:(id)arg1 didRemoveAttachment:(id)arg2 ;
-(void)_webView:(id)arg1 didInsertAttachment:(id)arg2 withSource:(id)arg3 ;
-(void)_webView:(id)arg1 didInvalidateDataForAttachment:(id)arg2 ;
-(void)getHTMLStringsAttachmentsAndPlainTextAlternativeRemovingSignature:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)getHTMLStringsAttachmentsAndPlainTextAlternativeRemovingSignature:(BOOL)arg1 removeQuotes:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_changeQuoteLevelBy:(long long)arg1 ;
-(UIView *)inputViewForPreservingFocus;
-(void)setInputViewForPreservingFocus:(UIView *)arg1 ;
-(UIBarButtonItemGroup *)_leadingInputAssistantItemGroup;
-(void)_setLeadingInputAssistantItemGroup:(id)arg1 ;
-(BOOL)_shouldShowInsertPhotosButton;
-(void)_didTapInsertPhotoButton:(id)arg1 ;
-(void)_didTapCameraButton:(id)arg1 ;
-(void)_didTapImportDocumentButton:(id)arg1 ;
-(void)_didTapScanDocumentButton:(id)arg1 ;
-(void)_didTapInsertDrawingOrMarkupButton:(id)arg1 ;
-(void)_setTrailingInputAssistantItemGroups:(id)arg1 ;
-(void)changeQuoteLevel:(long long)arg1 ;
-(void)_webView:(id)arg1 takeFocus:(long long)arg2 ;
-(id)htmlString;
-(NSArray *)_trailingInputAssistantItemGroups;
-(BOOL)_shouldShowMarkupButton;
-(void)markupSelectedAttachment;
-(void)_removeInlineAttachment:(id)arg1 ;
-(void)showQuoteLevelOptions;
-(id)inputView;
-(id<MFMailSignatureController>)signatureControllerProxy;
-(void)setMailComposeViewDelegate:(id<MFMailComposeViewDelegate>)arg1 ;
-(void)setCompositionContextID:(NSString *)arg1 ;
-(void)setMarkupString:(id)arg1 ;
-(void)scaleImagesToScale:(unsigned long long)arg1 ;
-(void)unscaleImages;
-(void)setCaretPosition:(unsigned long long)arg1 ;
-(void)insertDocumentWithURL:(id)arg1 isDrawingFile:(BOOL)arg2 ;
-(void)showOriginalAttachments;
-(void)insertPhotoOrVideoWithAssetIdentifier:(id)arg1 infoDictionary:(id)arg2 ;
-(void)removeMediaWithAssetIdentifier:(id)arg1 ;
-(void)insertScannedDocumentWithData:(id)arg1 ;
-(id)containsRichText;
-(NSRange)selectedRange;
-(id)contentIDsForMediaAttachments;
-(void)placeCaretAtStartOfBodyField;
-(CGRect)rectOfElementWithID:(id)arg1 ;
-(void)setPrefersFirstLineSelection;
-(void)replaceAttachment:(id)arg1 withDocumentData:(id)arg2 fileName:(id)arg3 mimeType:(id)arg4 ;
-(void)replaceAttachment:(id)arg1 withDocumentAtURL:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)retainFocusAfterPresenting;
-(void)releaseFocusAfterDismissing:(BOOL)arg1 ;
-(void)compositionWillFinish;
-(void)compositionDidFailToFinish;
-(id<MFComposeWebViewDelegate>)composeWebViewDelegate;
-(void)setComposeWebViewDelegate:(id<MFComposeWebViewDelegate>)arg1 ;
-(void)_webView:(id)arg1 didChangeFontAttributes:(id)arg2 ;
-(BOOL)allowsAttachmentElements;
-(void)prependMarkupString:(id)arg1 quote:(BOOL)arg2 ;
-(void)beginPreventingLayout;
-(NSString *)compositionContextID;
-(void)appendOrReplace:(id)arg1 withMarkupString:(id)arg2 quote:(BOOL)arg3 ;
-(void)setOriginalAttachmentInfo:(id)arg1 ;
-(void)setReplacementFilenamesByContentID:(id)arg1 ;
-(void)replaceImagesIfNecessary;
-(void)removeDropPlaceholders;
-(void)endPreventingLayout;
-(void)layoutWithMinimumSize;
-(void)prependPreamble:(id)arg1 quote:(BOOL)arg2 ;
-(void)prependString:(id)arg1 ;
-(long long)_webView:(id)arg1 decidePolicyForFocusedElement:(id)arg2 ;
-(void)_webView:(id)arg1 willStartInputSession:(id)arg2 ;
-(void)addMailAttributesBeforeDisplayHidingTrailingEmptyQuotes:(BOOL)arg1 shouldQuote:(BOOL)arg2 ;
-(BOOL)_sourceIsManaged;
-(void)appendMarkupString:(id)arg1 quote:(BOOL)arg2 ;
-(id)plainTextContent;
-(long long)_webView:(id)arg1 dataOwnerForDragSession:(id)arg2 ;
-(long long)_webView:(id)arg1 dataOwnerForDropSession:(id)arg2 ;
-(void)getHTMLStringsAttachmentsAndPlainTextAlternative:(/*^block*/id)arg1 ;
-(void)composeBodyFieldDidChange;
-(void)composeBodyFieldIsDirtyChanged:(BOOL)arg1 ;
-(void)composeBodyFieldDidThrowException:(id)arg1 ;
-(void)composeBodyFieldSelectionContainsLinkStateDidChange:(BOOL)arg1 ;
-(void)attachmentTapped:(id)arg1 ;
-(void)selectedAttachmentIdentifiersDidChange:(id)arg1 ;
-(void)_menuDidHide:(id)arg1 ;
-(void)_addAdditionalItemsToCalloutBar;
-(id<MFMailComposeViewDelegate>)mailComposeViewDelegate;
-(void)_pasteAsQuotationKeyCommandInvoked:(id)arg1 ;
-(void)_increaseQuoteLevelKeyCommandInvoked:(id)arg1 ;
-(void)_decreaseQuoteLevelKeyCommandInvoked:(id)arg1 ;
-(void)_increaseQuoteLevel:(id)arg1 ;
-(void)_decreaseQuoteLevel:(id)arg1 ;
-(id)_bodyFieldProxy;
-(void)updateInputAssistantItem;
-(void)setMarkupString:(id)arg1 quote:(BOOL)arg2 ;
-(id)_attachmentInfoByURL;
-(id)_attachmentInfoByIdentifier;
-(void)insertDocumentWithData:(id)arg1 fileName:(id)arg2 mimeType:(id)arg3 contentID:(id)arg4 ;
-(void)prepareDataForDocumentAtURLForInsertion:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)mimeTypeForFilename:(id)arg1 ;
-(void)_replaceFilenamePlaceholderWithAttachment:(id)arg1 fileName:(id)arg2 mimeType:(id)arg3 contentID:(id)arg4 ;
-(id)_addInlineAttachmentWithData:(id)arg1 fileName:(id)arg2 type:(id)arg3 contentID:(id)arg4 ;
-(void)_addAttachment:(id)arg1 ;
@end

