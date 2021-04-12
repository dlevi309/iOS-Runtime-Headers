/*
* Generated on Monday, March 1, 2021 at 2:34:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithCoder:(id)arg1 ;
-(id<NoteHTMLEditorViewDelegate>)delegate;
-(void)setDelegate:(id<NoteHTMLEditorViewDelegate>)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(BOOL)isFirstResponder;
-(id)initWithFrame:(CGRect)arg1 ;
-(NoteWKWebView *)webView;
-(WebArchive *)webArchive;
-(void)layoutSubviews;
-(void)scrollViewDidScroll:(id)arg1 ;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(void)updateContent;
-(BOOL)isEditing;
-(void)setEditable:(BOOL)arg1 ;
-(void)setEditing:(BOOL)arg1 ;
-(BOOL)isEditable;
-(id)targetForAction:(SEL)arg1 withSender:(id)arg2 ;
-(void)scrollSelectionToVisible:(BOOL)arg1 ;
-(id<NoteHTMLEditorViewActionDelegate>)actionDelegate;
-(void)setActionDelegate:(id<NoteHTMLEditorViewActionDelegate>)arg1 ;
-(UIViewPrintFormatter *)viewPrintFormatter;
-(void)setSelectionToEnd;
-(long long)_webView:(id)arg1 dataOwnerForDragSession:(id)arg2 ;
-(long long)_webView:(id)arg1 dataOwnerForDropSession:(id)arg2 ;
-(void)setSelectionToStart;
-(void)setWebView:(NoteWKWebView *)arg1 ;
-(void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(/*^block*/id)arg3 ;
-(void)webView:(id)arg1 didFinishNavigation:(id)arg2 ;
-(void)webViewWebContentProcessDidTerminate:(id)arg1 ;
-(void)_webView:(id)arg1 didInsertAttachment:(id)arg2 withSource:(id)arg3 ;
-(void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2 ;
-(void)webView:(id)arg1 startURLSchemeTask:(id)arg2 ;
-(void)webView:(id)arg1 stopURLSchemeTask:(id)arg2 ;
-(BOOL)_webView:(id)arg1 focusShouldStartInputSession:(id)arg2 ;
-(void)_webView:(id)arg1 didStartInputSession:(id)arg2 ;
-(BOOL)_webView:(id)arg1 performDataInteractionOperationWithItemProviders:(id)arg2 ;
-(void)_webView:(id)arg1 contextMenuConfigurationForElement:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_webView:(id)arg1 contextMenuDidEndForElement:(id)arg2 ;
-(NSString *)htmlString;
-(void)setHtmlString:(NSString *)arg1 ;
-(unsigned short)listStyle;
-(void)setListStyle:(unsigned short)arg1 ;
-(void)startEditing;
-(id)webViewConfiguration;
-(void)setHasAttachments:(BOOL)arg1 ;
-(void)setLayoutDelegate:(id<NoteHTMLEditorViewLayoutDelegate>)arg1 ;
-(id<NoteHTMLEditorViewLayoutDelegate>)layoutDelegate;
-(BOOL)hasAttachments;
-(void)insertImage:(id)arg1 ;
-(long long)selectionLength;
-(void)setSelectionLength:(long long)arg1 ;
-(void)removeStyle:(id)arg1 ;
-(void)setHtmlString:(id)arg1 attachments:(id)arg2 ;
-(CGRect)rectForSelection;
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
-(NSLayoutConstraint *)contentSizeHeightConstraint;
-(void)setContentSizeHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)contentSizeWidthConstraint;
-(void)setContentSizeWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setUpdateContentDelayer:(ICSelectorDelayer *)arg1 ;
@end

