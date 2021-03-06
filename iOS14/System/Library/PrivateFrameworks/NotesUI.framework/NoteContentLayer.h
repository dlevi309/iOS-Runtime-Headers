/*
* Generated on Thursday, January 14, 2021 at 2:26:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/

#import <NotesUI/NotesUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <NotesUI/NoteHTMLEditorViewDelegate.h>
#import <NotesUI/NoteHTMLEditorViewActionDelegate.h>
#import <NotesUI/NoteHTMLEditorViewLayoutDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>

@protocol NoteContentLayerDelegate, NoteContentLayerAttachmentPresentationDelegate;
@class NoteHTMLEditorView, NSArray, NoteDateLabel, NSString;

@interface NoteContentLayer : UIView <NoteHTMLEditorViewDelegate, NoteHTMLEditorViewActionDelegate, NoteHTMLEditorViewLayoutDelegate, UIScrollViewDelegate> {

	BOOL _containsCJK;
	BOOL _tracksMaximumContentLength;
	BOOL _allowsAttachments;
	BOOL _showsDateLabel;
	BOOL _updatedTitleRange;
	id<NoteContentLayerDelegate> _delegate;
	id<NoteContentLayerAttachmentPresentationDelegate> _attachmentPresentationDelegate;
	NoteHTMLEditorView* _noteHTMLEditorView;
	NSArray* _horizontalConstraints;
	NoteDateLabel* _dateLabel;

}

@property (nonatomic,retain) NSArray * horizontalConstraints;                                                                       //@synthesize horizontalConstraints=_horizontalConstraints - In the implementation block
@property (nonatomic,retain) NoteHTMLEditorView * noteHTMLEditorView;                                                               //@synthesize noteHTMLEditorView=_noteHTMLEditorView - In the implementation block
@property (nonatomic,retain) NoteDateLabel * dateLabel;                                                                             //@synthesize dateLabel=_dateLabel - In the implementation block
@property (assign,nonatomic) BOOL updatedTitleRange;                                                                                //@synthesize updatedTitleRange=_updatedTitleRange - In the implementation block
@property (nonatomic,readonly) BOOL hasFullWidth; 
@property (nonatomic,readonly) BOOL hasFullHeight; 
@property (assign,nonatomic,__weak) id<NoteContentLayerDelegate> delegate;                                                          //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<NoteContentLayerAttachmentPresentationDelegate> attachmentPresentationDelegate;              //@synthesize attachmentPresentationDelegate=_attachmentPresentationDelegate - In the implementation block
@property (assign,nonatomic) BOOL containsCJK;                                                                                      //@synthesize containsCJK=_containsCJK - In the implementation block
@property (assign,getter=isEditable,nonatomic) BOOL editable; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) BOOL contentContainsValuableContent; 
@property (assign,nonatomic) CGPoint contentOffset; 
@property (assign,nonatomic) BOOL tracksMaximumContentLength;                                                                       //@synthesize tracksMaximumContentLength=_tracksMaximumContentLength - In the implementation block
@property (assign,nonatomic) BOOL allowsAttachments;                                                                                //@synthesize allowsAttachments=_allowsAttachments - In the implementation block
@property (assign,nonatomic) BOOL showsDateLabel;                                                                                   //@synthesize showsDateLabel=_showsDateLabel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isEditable;
-(BOOL)resignFirstResponder;
-(void)scrollSelectionToVisible:(BOOL)arg1 ;
-(BOOL)becomeFirstResponder;
-(BOOL)canResignFirstResponder;
-(void)layoutMarginsDidChange;
-(BOOL)isFirstResponder;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)keyCommands;
-(void)scrollToTopAnimated:(BOOL)arg1 ;
-(NoteDateLabel *)dateLabel;
-(id<NoteContentLayerDelegate>)delegate;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(NSArray *)horizontalConstraints;
-(void)setBounds:(CGRect)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(void)setDelegate:(id<NoteContentLayerDelegate>)arg1 ;
-(void)updateConstraints;
-(void)setFrame:(CGRect)arg1 ;
-(void)updateMarginConstraints;
-(void)setHorizontalConstraints:(NSArray *)arg1 ;
-(void)setEditable:(BOOL)arg1 ;
-(void)setScrollIndicatorInsets:(UIEdgeInsets)arg1 ;
-(void)setSelectionToStart;
-(BOOL)allowsAttachments;
-(BOOL)textView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(void)flashScrollIndicators;
-(id)webArchive;
-(void)setContainsCJK:(BOOL)arg1 ;
-(id)viewPrintFormatter;
-(CGPoint)contentOffset;
-(void)setAllowsAttachments:(BOOL)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setDateLabel:(NoteDateLabel *)arg1 ;
-(void)setContentOffset:(CGPoint)arg1 ;
-(NSString *)title;
-(void)dealloc;
-(void)setTimestampDate:(id)arg1 ;
-(void)insertDateLabel;
-(NoteHTMLEditorView *)noteHTMLEditorView;
-(BOOL)showsDateLabel;
-(void)updateDateLabel;
-(void)forcedSetContainsCJK:(BOOL)arg1 ;
-(BOOL)containsCJK;
-(BOOL)contentContainsValuableContent;
-(BOOL)hasFullHeight;
-(BOOL)hasFullWidth;
-(void)didChangeFullSizeClass;
-(void)invalidateSizeRelatedConstraints;
-(void)updateHorizontalConstraints;
-(void)getRectForSelectionWithCompletion:(/*^block*/id)arg1 ;
-(void)replaceSelectionWithAttachmentPresentation:(id)arg1 ;
-(void)copyNoteHTMLToPasteboard;
-(void)chosenUTI:(id*)arg1 andChosenMIMEType:(id*)arg2 forItemProvider:(id)arg3 ;
-(BOOL)shouldRenderAsAttachment:(id)arg1 ;
-(void)processAttachmentItemProviders:(id)arg1 ;
-(id<NoteContentLayerAttachmentPresentationDelegate>)attachmentPresentationDelegate;
-(void)setUpdatedTitleRange:(BOOL)arg1 ;
-(BOOL)tracksMaximumContentLength;
-(void)reloadInterface;
-(BOOL)processMapAttachmentItemProvider:(id)arg1 ;
-(BOOL)allowsAttachmentsInNoteHTMLEditorView:(id)arg1 ;
-(BOOL)noteHTMLEditorView:(id)arg1 canAddAttachmentItemProviders:(id)arg2 ;
-(void)noteHTMLEditorView:(id)arg1 addAttachmentItemProviders:(id)arg2 ;
-(id)noteHTMLEditorView:(id)arg1 createAttachmentPresentationWithFileWrapper:(id)arg2 mimeType:(id)arg3 ;
-(BOOL)noteHTMLEditorViewShouldBeginEditing:(id)arg1 isUserInitiated:(BOOL)arg2 ;
-(void)noteHTMLEditorViewDidBeginEditing:(id)arg1 ;
-(void)noteHTMLEditorViewDidEndEditing:(id)arg1 ;
-(void)noteHTMLEditorViewWillChange:(id)arg1 ;
-(void)noteHTMLEditorViewDidChange:(id)arg1 ;
-(void)noteHTMLEditorView:(id)arg1 openURL:(id)arg2 ;
-(id)noteHTMLEditorView:(id)arg1 fileURLForAttachmentWithContentID:(id)arg2 ;
-(id)noteHTMLEditorView:(id)arg1 attachmentPresentationForContentID:(id)arg2 ;
-(BOOL)isNoteManagedForNoteHTMLEditorView:(id)arg1 ;
-(void)noteHTMLEditorViewNeedsContentReload:(id)arg1 ;
-(void)noteHTMLEditorView:(id)arg1 didInvokeFormattingCalloutOption:(long long)arg2 ;
-(void)noteHTMLEditorView:(id)arg1 didInvokeStyleFormattingOption:(long long)arg2 ;
-(id)noteHTMLEditorView:(id)arg1 updateAttachments:(id)arg2 ;
-(BOOL)canInsertImagesInNoteHTMLEditorView:(id)arg1 ;
-(BOOL)noteHTMLEditorView:(id)arg1 acceptContentsFromPasteboard:(id)arg2 ;
-(void)noteHTMLEditorView:(id)arg1 showShareSheetForAttachment:(id)arg2 atPoint:(CGPoint)arg3 ;
-(id)readerDelegateInNoteHTMLEditorView:(id)arg1 ;
-(BOOL)noteHTMLEditorViewShouldPaste:(id)arg1 ;
-(void)insertImageInNoteHTMLEditorView:(id)arg1 ;
-(BOOL)isNoteHTMLEditorViewVisible:(id)arg1 ;
-(void)setShowsDateLabel:(BOOL)arg1 ;
-(void)updateObscuredInsets;
-(void)setContent:(id)arg1 isPlainText:(BOOL)arg2 isCJK:(BOOL)arg3 attachments:(id)arg4 ;
-(id)contentAsPlainText:(BOOL)arg1 ;
-(CGRect)rectForDOMNode:(id)arg1 ;
-(void)noteHTMLEditorView:(id)arg1 didAddAttachmentForMimeType:(id)arg2 filename:(id)arg3 data:(id)arg4 ;
-(void)setAttachmentPresentationDelegate:(id<NoteContentLayerAttachmentPresentationDelegate>)arg1 ;
-(void)setTracksMaximumContentLength:(BOOL)arg1 ;
-(void)setNoteHTMLEditorView:(NoteHTMLEditorView *)arg1 ;
-(BOOL)updatedTitleRange;
@end

