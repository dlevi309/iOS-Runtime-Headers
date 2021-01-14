/*
* Generated on Thursday, January 14, 2021 at 2:20:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIWebPDFViewPrivateDelegate.h>
#import <UIKit/UIDocumentPasswordViewDelegate.h>
#import <UIKitCore/_UIRotatingAlertControllerDelegate.h>
#import <UIKit/UIWebPDFViewDelegate.h>
#import <UIKitCore/_UIWebDoubleTapDelegate.h>
#import <UIKitCore/_UIWebRotationDelegate.h>

@protocol UIWebPDFViewHandlerDelegate;
@class UIWebPDFView, NSObject, _UIHighlightView, UIWebPDFLabelView, UIDocumentPasswordView, NSMapTable, UIColor, WebPDFNSNumberFormatter, _UIRotatingAlertController, NSDictionary, NSArray, UIView, NSString;

@interface UIWebPDFViewHandler : NSObject <UIWebPDFViewPrivateDelegate, UIDocumentPasswordViewDelegate, _UIRotatingAlertControllerDelegate, UIWebPDFViewDelegate, _UIWebDoubleTapDelegate, _UIWebRotationDelegate> {

	UIWebPDFView* _pdfView;
	BOOL _scalesPageToFit;
	double _initialZoomScale;
	NSObject*<UIWebPDFViewHandlerDelegate> _pdfHandlerDelegate;
	_UIHighlightView* _linkHighlightView;
	UIWebPDFLabelView* _pageLabelView;
	BOOL _showPageLabels;
	BOOL _showsShadowsForHTMLContent;
	BOOL _cachedScrollViewShadowsState;
	UIDocumentPasswordView* _passwordEntryView;
	NSMapTable* _searchControllers;
	UIColor* _backgroundColorForUnRenderedContent;
	BOOL _hideActivityIndicatorForUnRenderedContent;
	BOOL _hidePageViewsUntilReadyToRender;
	WebPDFNSNumberFormatter* _labelViewFormatter;
	PDFHistoryItem _pendingHistoryItemRestore;
	_UIRotatingAlertController* _linkActionSheet;
	NSDictionary* _linkActionInfo;
	NSArray* _linkActions;
	CGRect _rectOfInterest;
	BOOL _rectOfInterestConsidersHeight;

}

@property (nonatomic,readonly) UIWebPDFView * pdfView; 
@property (nonatomic,readonly) UIView * frontView; 
@property (assign,nonatomic) BOOL scalesPageToFit;                                                   //@synthesize scalesPageToFit=_scalesPageToFit - In the implementation block
@property (assign,nonatomic) BOOL showPageLabels;                                                    //@synthesize showPageLabels=_showPageLabels - In the implementation block
@property (assign,nonatomic) NSObject*<UIWebPDFViewHandlerDelegate> pdfHandlerDelegate;              //@synthesize pdfHandlerDelegate=_pdfHandlerDelegate - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColorForUnRenderedContent;                          //@synthesize backgroundColorForUnRenderedContent=_backgroundColorForUnRenderedContent - In the implementation block
@property (assign,nonatomic) BOOL hideActivityIndicatorForUnRenderedContent;                         //@synthesize hideActivityIndicatorForUnRenderedContent=_hideActivityIndicatorForUnRenderedContent - In the implementation block
@property (assign,nonatomic) BOOL hidePageViewsUntilReadyToRender;                                   //@synthesize hidePageViewsUntilReadyToRender=_hidePageViewsUntilReadyToRender - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_ensurePDFViewInHierarchyForWebDocView:(id)arg1 ;
-(void)_notifyDelegateWillClickLink:(id)arg1 ;
-(unsigned long long)_verticalEdgeForContentOffsetInScrollView:(id)arg1 ;
-(id)createLinkHighlight;
-(void)highlightRect:(CGRect)arg1 ;
-(double)_pinValueForVerticalEdge:(unsigned long long)arg1 inScrollView:(id)arg2 ;
-(void)_notifyDelegateDidClickLink:(id)arg1 ;
-(void)_adjustZoomScalesForScrollViewInternal:(id)arg1 ;
-(void)_completeLinkClickWithURL:(id)arg1 ;
-(void)_completeLinkClickWithURLString:(id)arg1 ;
-(id)_actionForType:(int)arg1 ;
-(id)_actionForType:(int)arg1 withActionInfo:(id)arg2 ;
-(id)_actionsForInteractionInfo:(id)arg1 ;
-(void)_showLinkSheet:(id)arg1 ;
-(id)init;
-(void)performAction:(id)arg1 fromAlertController:(id)arg2 ;
-(void)_showPasswordErrorAlert;
-(void)_adjustContentOffsetForKeyboardIfNeeded;
-(void)adjustZoomScalesForScrollView;
-(void)restoreStateFromPendingHistoryItem;
-(void)_postdidDetermineDocumentBounds;
-(CGRect)_frameForDocumentBounds:(CGRect)arg1 ;
-(void)_showPasswordEntryViewForFile:(id)arg1 ;
-(id)createPageLabel;
-(void)updatePageNumberLabelWithUserScrolling:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)scrollToPageNumber:(long long)arg1 animate:(BOOL)arg2 ;
-(void)_updateViewHierarchyForDocumentView:(id)arg1 ignoreIfSame:(BOOL)arg2 ;
-(id)_getLabelViewFormatter;
-(void)updateViewHierarchyForDocumentViewTabSwitch:(id)arg1 restoringZoomScale:(double)arg2 andScrollPt:(CGPoint)arg3 ;
-(void)setShowPageLabels:(BOOL)arg1 ;
-(id)findOnPageHighlighter;
-(void)_resultRects:(id)arg1 andResultViews:(id)arg2 forSearchResult:(id)arg3 inViewCoordinates:(id)arg4 ;
-(BOOL)showPageLabels;
-(void)removeViewFromSuperview;
-(void)updateViewHierarchyForDocumentViewNewLoad:(id)arg1 ;
-(NSObject*<UIWebPDFViewHandlerDelegate>)pdfHandlerDelegate;
-(void)updateViewHierarchyForDocumentViewTabSwitch:(id)arg1 ;
-(void)setScalesPageToFit:(BOOL)arg1 ;
-(void)updateViewHierarchyForDocumentViewLoadComplete:(id)arg1 ;
-(BOOL)scalesPageToFit;
-(UIWebPDFView *)pdfView;
-(void)updateViewHierarchyForFirstNonEmptyLayoutInFrame:(id)arg1 ;
-(void)handleScrollToAnchor:(id)arg1 ;
-(void)setPdfHandlerDelegate:(NSObject*<UIWebPDFViewHandlerDelegate>)arg1 ;
-(void)_keyboardDidShow:(id)arg1 ;
-(void)clearSearchControllerForHighlighter:(id)arg1 ;
-(id)searchControllerForHighlighter:(id)arg1 ;
-(void)revealSearchResult:(id)arg1 andZoomIn:(BOOL)arg2 ;
-(void)didBeginEditingPassword:(id)arg1 inView:(id)arg2 ;
-(void)didEndEditingPassword:(id)arg1 inView:(id)arg2 ;
-(void)userDidEnterPassword:(id)arg1 forPasswordView:(id)arg2 ;
-(UIView *)frontView;
-(double)zoomedDocumentScale;
-(BOOL)considerHeightForDoubleTap;
-(id)enclosingScrollView;
-(double)currentDocumentScale;
-(SCD_Struct_UI54)scalesForContainerSize:(CGSize)arg1 ;
-(double)minimumScaleForSize:(CGSize)arg1 ;
-(void)updateBoundariesOfScrollView:(id)arg1 withScales:(SCD_Struct_UI54)arg2 ;
-(CGRect)rectOfInterestForRotation;
-(double)minimumVerticalContentOffset;
-(double)heightToKeepVisible;
-(CGRect)activeRectForRectOfInterest:(CGRect)arg1 ;
-(BOOL)considerHeightOfRectOfInterestForRotation;
-(void)rotateEnclosingScrollViewToFrame:(CGRect)arg1 ;
-(id)_absoluteUrlRelativeToDocumentURL:(id)arg1 ;
-(CGRect)visibleContentRect;
-(void)saveStateToHistoryItem:(id)arg1 forWebView:(id)arg2 ;
-(void)restoreStateFromHistoryItem:(id)arg1 forWebView:(id)arg2 ;
-(CGRect)rectOfInterestForPoint:(CGPoint)arg1 ;
-(SCD_Struct_UI54)doubleTapScalesForSize:(CGSize)arg1 ;
-(void)didScroll:(id)arg1 ;
-(void)resetZoom:(id)arg1 ;
-(id)_scroller:(id)arg1 ;
-(id)contentView;
-(id)hostViewForSheet:(id)arg1 ;
-(CGRect)presentationRectInHostViewForSheet:(id)arg1 ;
-(CGRect)initialPresentationRectInHostViewForSheet:(id)arg1 ;
-(void)setBackgroundColorForUnRenderedContent:(UIColor *)arg1 ;
-(void)didReceiveMemoryWarning:(id)arg1 ;
-(void)ensureCorrectPagesAreInstalled:(BOOL)arg1 ;
-(id)passwordForPDFView:(id)arg1 ;
-(void)didDetermineDocumentBounds:(id)arg1 ;
-(void)pdfView:(id)arg1 zoomToRect:(CGRect)arg2 forPoint:(CGPoint)arg3 considerHeight:(BOOL)arg4 ;
-(void)handleLinkClick:(id)arg1 inRect:(CGRect)arg2 ;
-(void)handleLongPressOnLink:(id)arg1 atPoint:(CGPoint)arg2 inRect:(CGRect)arg3 contentRect:(CGRect)arg4 ;
-(void)dealloc;
-(BOOL)hidePageViewsUntilReadyToRender;
-(void)setHidePageViewsUntilReadyToRender:(BOOL)arg1 ;
-(UIColor *)backgroundColorForUnRenderedContent;
-(BOOL)hideActivityIndicatorForUnRenderedContent;
-(void)setHideActivityIndicatorForUnRenderedContent:(BOOL)arg1 ;
-(void)clearPageLabel;
-(void)_setSearchControllerDocumentToSearch:(id)arg1 ;
-(void)clearAllViews;
-(void)clearActionSheet;
-(void)clearLinkHighlight;
-(CGRect)_rectForPdfView:(CGRect)arg1 ;
-(id)_getPDFDocumentViewForWebView:(id)arg1 ;
-(void)_replacePDFViewIfPresentWithWebDocView:(id)arg1 ;
-(CGRect)_rectForPasswordView:(id)arg1 ;
-(void)_removePDFViewIfWebDocViewIsNotPDF:(id)arg1 ;
-(void)updateViewSettings;
-(void)_removePDFViewIfWebDocViewIsNotSamePDF:(id)arg1 ;
-(void)_createPDFViewIfNeeded:(id)arg1 ;
@end

