/*
* Generated on Thursday, January 14, 2021 at 2:26:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/

#import <NotesUI/NotesUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <libobjc.A.dylib/WKUIDelegatePrivate.h>
#import <libobjc.A.dylib/_WKInputDelegate.h>
#import <libobjc.A.dylib/WKNavigationDelegate.h>
#import <libobjc.A.dylib/WKScriptMessageHandler.h>
#import <libobjc.A.dylib/WKURLSchemeHandler.h>

@protocol NoteHTMLEditorViewDelegate, NoteHTMLEditorViewActionDelegate, NoteHTMLEditorViewLayoutDelegate;
@class NSLayoutConstraint, NoteWKWebView, NSString, NSArray, ICSelectorDelayer, UIViewPrintFormatter, WebArchive;

@interface NoteHTMLEditorView : UIView <UIScrollViewDelegate, WKUIDelegatePrivate, _WKInputDelegate, WKNavigationDelegate, WKScriptMessageHandler, WKURLSchemeHandler> {

	BOOL _hasAttachments;
	BOOL _editable;
	BOOL _editing;
	BOOL _updatingContent;
	unsigned short _listStyle;
	id<NoteHTMLEditorViewDelegate> _delegate;
	id<NoteHTMLEditorViewActionDelegate> _actionDelegate;
	id<NoteHTMLEditorViewLayoutDelegate> _layoutDelegate;
	NSLayoutConstraint* _contentSizeHeightConstraint;
	NSLayoutConstraint* _contentSizeWidthConstraint;
	NoteWKWebView* _webView;
	NSString* _htmlString;
	NSString* _title;
	NSString* _text;
	NSArray* _attachmentContentIDs;
	long long _selectionLength;
	NSString* _htmlStringToLoad;
	NSArray* _attachmentsToLoad;
	ICSelectorDelayer* _updateContentDelayer;

}

@property (nonatomic,copy) NSString * htmlStringToLoad;                                               //@synthesize htmlStringToLoad=_htmlStringToLoad - In the implementation block
@property (nonatomic,copy) NSArray * attachmentsToLoad;                                               //@synthesize attachmentsToLoad=_attachmentsToLoad - In the implementation block
@property (nonatomic,retain) ICSelectorDelayer * updateContentDelayer;                                //@synthesize updateContentDelayer=_updateContentDelayer - In the implementation block
@property (assign,nonatomic) BOOL updatingContent;                                                    //@synthesize updatingContent=_updatingContent - In the implementation block
@property (assign,nonatomic,__weak) id<NoteHTMLEditorViewDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<NoteHTMLEditorViewActionDelegate> actionDelegate;              //@synthesize actionDelegate=_actionDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<NoteHTMLEditorViewLayoutDelegate> layoutDelegate;              //@synthesize layoutDelegate=_layoutDelegate - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * contentSizeHeightConstraint;                        //@synthesize contentSizeHeightConstraint=_contentSizeHeightConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * contentSizeWidthConstraint;                         //@synthesize contentSizeWidthConstraint=_contentSizeWidthConstraint - In the implementation block
@property (nonatomic,retain) NoteWKWebView * webView;                                                 //@synthesize webView=_webView - In the implementation block
@property (nonatomic,copy) NSString * htmlString;                                                     //@synthesize htmlString=_htmlString - In the implementation block
@property (nonatomic,copy) NSString * title;                                                          //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * text;                                                           //@synthesize text=_text - In the implementation block
@property (nonatomic,copy) NSArray * attachmentContentIDs;                                            //@synthesize attachmentContentIDs=_attachmentContentIDs - In the implementation block
@property (assign,nonatomic) BOOL hasAttachments;                                                     //@synthesize hasAttachments=_hasAttachments - In the implementation block
@property (nonatomic,readonly) UIViewPrintFormatter * viewPrintFormatter; 
@property (nonatomic,readonly) WebArchive * webArchive; 
@property (assign,getter=isEditable,nonatomic) BOOL editable;                                         //@synthesize editable=_editable - In the implementation block
@property (assign,getter=isEditing,nonatomic) BOOL editing;                                           //@synthesize editing=_editing - In the implementation block
@property (assign,nonatomic) long long selectionLength;                                               //@synthesize selectionLength=_selectionLength - In the implementation block
@property (assign,nonatomic) double textZoomFactor; 
@property (assign,nonatomic) unsigned short listStyle;                                                //@synthesize listStyle=_listStyle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)baseHTMLString;
-(NoteWKWebView *)webView;
-(BOOL)isEditable;
-(void)updateContent;
-(void)scrollSelectionToVisible:(BOOL)arg1 ;
-(id<NoteHTMLEditorViewLayoutDelegate>)layoutDelegate;
-(void)setLayoutDelegate:(id<NoteHTMLEditorViewLayoutDelegate>)arg1 ;
-(void)_webView:(id)arg1 contextMenuDidEndForElement:(id)arg2 ;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(BOOL)isFirstResponder;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(/*^block*/id)arg3 ;
-(id<NoteHTMLEditorViewDelegate>)delegate;
-(void)_webView:(id)arg1 didInsertAttachment:(id)arg2 withSource:(id)arg3 ;
-(id<NoteHTMLEditorViewActionDelegate>)actionDelegate;
-(void)insertImage:(id)arg1 ;
-(void)setListStyle:(unsigned short)arg1 ;
-(void)setHasAttachments:(BOOL)arg1 ;
-(void)setHtmlString:(NSString *)arg1 ;
-(BOOL)hasAttachments;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)htmlString;
-(void)setText:(NSString *)arg1 ;
-(BOOL)isEditing;
-(BOOL)_webView:(id)arg1 performDataInteractionOperationWithItemProviders:(id)arg2 ;
-(void)setDelegate:(id<NoteHTMLEditorViewDelegate>)arg1 ;
-(long long)selectionLength;
-(void)webView:(id)arg1 startURLSchemeTask:(id)arg2 ;
-(void)webView:(id)arg1 stopURLSchemeTask:(id)arg2 ;
-(id)webViewConfiguration;
-(void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2 ;
-(void)setActionDelegate:(id<NoteHTMLEditorViewActionDelegate>)arg1 ;
-(BOOL)_webView:(id)arg1 focusShouldStartInputSession:(id)arg2 ;
-(NSString *)text;
-(void)_webView:(id)arg1 didStartInputSession:(id)arg2 ;
-(void)setSelectionToEnd;
-(void)setEditable:(BOOL)arg1 ;
-(void)_webView:(id)arg1 contextMenuConfigurationForElement:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setSelectionToStart;
-(void)setSelectionLength:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)startEditing;
-(long long)_webView:(id)arg1 dataOwnerForDragSession:(id)arg2 ;
-(long long)_webView:(id)arg1 dataOwnerForDropSession:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)setEditing:(BOOL)arg1 ;
-(unsigned short)listStyle;
-(WebArchive *)webArchive;
-(void)webView:(id)arg1 didFinishNavigation:(id)arg2 ;
-(UIViewPrintFormatter *)viewPrintFormatter;
-(void)webViewWebContentProcessDidTerminate:(id)arg1 ;
-(void)setWebView:(NoteWKWebView *)arg1 ;
-(NSString *)title;
-(id)targetForAction:(SEL)arg1 withSender:(id)arg2 ;
-(void)setHtmlString:(id)arg1 attachments:(id)arg2 ;
-(void)getRectForSelectionWithCompletion:(/*^block*/id)arg1 ;
-(void)replaceSelectionWithAttachmentPresentation:(id)arg1 ;
-(void)copyNoteHTMLToPasteboard;
-(void)insertHTMLString:(id)arg1 ;
-(void)insertLinkWithURL:(id)arg1 title:(id)arg2 ;
-(void)setupWebView;
-(void)menuControllerDidHide:(id)arg1 ;
-(NSArray *)attachmentContentIDs;
-(void)setHtmlStringToLoad:(NSString *)arg1 ;
-(void)setAttachmentsToLoad:(NSArray *)arg1 ;
-(void)setAttachmentContentIDs:(NSArray *)arg1 ;
-(id)jsonStringFromDictionaryOrArray:(id)arg1 ;
-(void)setEnableSmartLists:(BOOL)arg1 ;
-(void)setEnableAttachments:(BOOL)arg1 ;
-(void)updateDataDetectors;
-(id)attachmentInfoDictionaryForAttachmentPresentation:(id)arg1 ;
-(void)undoablyRemoveAttachmentPresentations:(id)arg1 undoManager:(id)arg2 ;
-(void)undoablyReplaceSelectionWithAttachmentPresentations:(id)arg1 undoManager:(id)arg2 ;
-(void)adoptEditableState;
-(void)updateMenuController;
-(void)stopEditingWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)updatingContent;
-(ICSelectorDelayer *)updateContentDelayer;
-(void)setUpdatingContent:(BOOL)arg1 ;
-(void)replaceContentIDs:(id)arg1 ;
-(id)contextMenuConfigurationForElement:(id)arg1 presentation:(id)arg2 ;
-(NSString *)htmlStringToLoad;
-(NSArray *)attachmentsToLoad;
-(void)setEnableShiftNewlinesInSmartLists:(BOOL)arg1 ;
-(double)textZoomFactor;
-(void)setTextZoomFactor:(double)arg1 ;
-(void)insertLinksWithURLs:(id)arg1 titles:(id)arg2 ;
-(void)stopEditing;
-(void)insertBulletedList:(id)arg1 ;
-(void)insertDashedList:(id)arg1 ;
-(void)insertOrderedList:(id)arg1 ;
-(void)removeStyle:(id)arg1 ;
-(NSLayoutConstraint *)contentSizeHeightConstraint;
-(void)setContentSizeHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)contentSizeWidthConstraint;
-(void)setContentSizeWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setUpdateContentDelayer:(ICSelectorDelayer *)arg1 ;
@end

