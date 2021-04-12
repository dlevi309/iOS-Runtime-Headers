/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <libobjc.A.dylib/TSWPEditingControllerDelegate.h>
#import <libobjc.A.dylib/SXTextTangierInteractiveCanvasControllerDelegate.h>

@protocol SXAutoSizedCanvasControllerDelegate, SXComponentActionHandler, SXTangierDragItemProvider;
@class TSKDocumentRoot, SXTextTangierInteractiveCanvasController, SXTextTangierCanvasViewController, TSDCanvasView, NSString;

@interface SXAutoSizedCanvasController : NSObject <TSWPEditingControllerDelegate, SXTextTangierInteractiveCanvasControllerDelegate> {

	TSKDocumentRoot* _documentRoot;
	CGRect _frame;
	id<SXAutoSizedCanvasControllerDelegate> _delegate;
	SXTextTangierInteractiveCanvasController* _icc;
	SXTextTangierCanvasViewController* _cvc;
	double _lineHeight;
	id<SXComponentActionHandler> _actionHandler;
	id<SXTangierDragItemProvider> _dragItemProvider;

}

@property (nonatomic,readonly) id<SXComponentActionHandler> actionHandler;                              //@synthesize actionHandler=_actionHandler - In the implementation block
@property (nonatomic,readonly) id<SXTangierDragItemProvider> dragItemProvider;                          //@synthesize dragItemProvider=_dragItemProvider - In the implementation block
@property (nonatomic,readonly) TSKDocumentRoot * documentRoot; 
@property (assign,nonatomic,__weak) id<SXAutoSizedCanvasControllerDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) SXTextTangierInteractiveCanvasController * icc;                          //@synthesize icc=_icc - In the implementation block
@property (nonatomic,readonly) SXTextTangierCanvasViewController * cvc;                                 //@synthesize cvc=_cvc - In the implementation block
@property (nonatomic,readonly) TSDCanvasView * canvasView; 
@property (nonatomic,readonly) double lineHeight;                                                       //@synthesize lineHeight=_lineHeight - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL editorShouldAlwaysBeInParagraphMode; 
@property (nonatomic,readonly) BOOL editorAllowsEditMenu; 
@property (nonatomic,readonly) BOOL editorAllowsMagnifier; 
@property (nonatomic,readonly) BOOL editorAllowsParagraphMode; 
@property (nonatomic,readonly) BOOL editorAllowsKeyboard; 
@property (nonatomic,readonly) BOOL editorAllowsCaret; 
@property (nonatomic,readonly) BOOL editorAllowsHyperlinkInteraction; 
@property (nonatomic,readonly) BOOL editorAllowsRubyInteraction; 
@property (nonatomic,readonly) BOOL editorAllowsListInteraction; 
@property (nonatomic,readonly) BOOL isCanvasInteractive; 
@property (nonatomic,readonly) BOOL isPrintingCanvas; 
@property (nonatomic,readonly) BOOL spellCheckingSupported; 
@property (nonatomic,readonly) BOOL spellCheckingSuppressed; 
@property (nonatomic,readonly) BOOL shouldResizeCanvasToScrollView; 
@property (nonatomic,readonly) BOOL shouldClipToScrollViewBoundsInVisibleBounds; 
@property (nonatomic,readonly) BOOL shouldShowTextOverflowGlyphs; 
@property (nonatomic,readonly) BOOL shouldShowInstructionalText; 
@property (nonatomic,readonly) BOOL shouldPopKnobsOutsideEnclosingScrollView; 
@property (nonatomic,readonly) CGSize sizeOfScrollViewEnclosingCanvas; 
@property (nonatomic,readonly) BOOL allowEditMenuToAppear; 
@property (nonatomic,readonly) BOOL allowTextEditingToBegin; 
@property (nonatomic,readonly) BOOL interactiveCanvasControllerAllowsHyperlinkInteraction; 
-(id<SXAutoSizedCanvasControllerDelegate>)delegate;
-(void)setDelegate:(id<SXAutoSizedCanvasControllerDelegate>)arg1 ;
-(void)teardown;
-(double)lineHeight;
-(id<SXComponentActionHandler>)actionHandler;
-(TSDCanvasView *)canvasView;
-(BOOL)allowHighlighting;
-(id<SXTangierDragItemProvider>)dragItemProvider;
-(TSKDocumentRoot *)documentRoot;
-(SXTextTangierCanvasViewController *)cvc;
-(SXTextTangierInteractiveCanvasController *)icc;
-(void)invalidateLayoutsAndFrames;
-(CGSize)sizeThatFits;
-(id)initWithDocumentRoot:(id)arg1 actionHandler:(id)arg2 dragItemProvider:(id)arg3 ;
-(Class)wpEditorClassOverride;
-(CGRect)interactiveCanvasController:(id)arg1 expandVisibleBoundsForTiling:(CGRect)arg2 ;
-(BOOL)isCanvasInteractive;
-(id)interactiveCanvasController:(id)arg1 dragItemForSmartField:(id)arg2 interaction:(id)arg3 session:(id)arg4 ;
-(void)interactiveCanvasController:(id)arg1 interactedWithHyperlink:(id)arg2 info:(id)arg3 range:(NSRange)arg4 touchPoint:(CGPoint)arg5 touchAndHold:(BOOL)arg6 ;
-(BOOL)interactiveCanvasController:(id)arg1 shouldBeginInteraction:(id)arg2 atPoint:(CGPoint)arg3 ;
-(BOOL)editorAllowsEditMenu;
-(BOOL)editorAllowsCaret;
-(BOOL)allowCopy;
-(BOOL)allowSelectionPopover;
@end

