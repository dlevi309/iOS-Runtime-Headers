/*
* Generated on Thursday, January 14, 2021 at 2:21:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <WebKit/WebKit-Structs.h>
#import <WebKit/WKApplicationStateTrackingView.h>
#import <libobjc.A.dylib/_WKWebViewPrintProvider.h>
#import <libobjc.A.dylib/PDFHostViewControllerDelegate.h>
#import <libobjc.A.dylib/WKActionSheetAssistantDelegate.h>
#import <libobjc.A.dylib/WKShareSheetDelegate.h>
#import <libobjc.A.dylib/WKWebViewContentProvider.h>

@class UIView, NSData, NSString;

@interface WKPDFView : WKApplicationStateTrackingView <_WKWebViewPrintProvider, PDFHostViewControllerDelegate, WKActionSheetAssistantDelegate, WKShareSheetDelegate, WKWebViewContentProvider> {

	RetainPtr<WKActionSheetAssistant>* _actionSheetAssistant;
	RetainPtr<NSData>* _data;
	RetainPtr<CGPDFDocument *>* _documentForPrinting;
	BlockPtr<void ()> _findCompletion;
	RetainPtr<NSString>* _findString;
	unsigned long long _findStringCount;
	unsigned long long _findStringMaxCount;
	RetainPtr<UIView>* _fixedOverlayView;
	Optional<unsigned long> _focusedSearchResultIndex;
	long long _focusedSearchResultPendingOffset;
	RetainPtr<PDFHostViewController>* _hostViewController;
	CGSize _overlaidAccessoryViewsInset;
	RetainPtr<UIView>* _pageNumberIndicator;
	CString* _passwordForPrinting;
	InteractionInformationAtPosition* _positionInformation;
	RetainPtr<NSString>* _suggestedFilename;
	WeakObjCPtr<WKWebView> _webView;
	RetainPtr<WKKeyboardScrollViewAnimator>* _keyboardScrollingAnimator;
	RetainPtr<WKShareSheet>* _shareSheet;

}

@property (nonatomic,readonly) CGPDFDocumentRef _wk_printedDocument; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIView * web_contentView; 
@property (nonatomic,readonly) NSData * web_dataRepresentation; 
@property (nonatomic,readonly) NSString * web_suggestedFilename; 
@property (nonatomic,readonly) BOOL web_isBackground; 
+(BOOL)web_requiresCustomSnapshotting;
-(id)dataDetectionContextForActionSheetAssistant:(id)arg1 positionInformation:(const InteractionInformationAtPosition*)arg2 ;
-(unsigned long long)_wk_pageCountForPrintFormatter:(id)arg1 ;
-(id)_contentView;
-(RetainPtr<NSArray>*)actionSheetAssistant:(id)arg1 decideActionsForElement:(id)arg2 defaultActions:(RetainPtr<NSArray>*)arg3 ;
-(void)web_countStringMatches:(id)arg1 options:(unsigned long long)arg2 maxCount:(unsigned long long)arg3 ;
-(void)actionSheetAssistant:(id)arg1 openElementAtLocation:(CGPoint)arg2 ;
-(void)web_findString:(id)arg1 options:(unsigned long long)arg2 maxCount:(unsigned long long)arg3 ;
-(void)web_hideFindUI;
-(BOOL)actionSheetAssistant:(id)arg1 shouldIncludeAppLinkActionsForElement:(id)arg2 ;
-(Optional<WebKit::InteractionInformationAtPosition>*)positionInformationForActionSheetAssistant:(id)arg1 ;
-(void)actionSheetAssistant:(id)arg1 performAction:(BOOL)arg2 ;
-(void)_resetFind;
-(void)shareSheetDidDismiss:(id)arg1 ;
-(CGPoint)_offsetForPageNumberIndicator;
-(void)_movePageNumberIndicatorToPoint:(CGPoint)arg1 animated:(BOOL)arg2 ;
-(void)_updateLayoutAnimated:(BOOL)arg1 ;
-(void)_scrollToURLFragment:(id)arg1 ;
-(void)_findString:(id)arg1 withOptions:(unsigned long long)arg2 maxCount:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)_computeFocusedSearchResultIndexWithOptions:(unsigned long long)arg1 didWrapAround:(BOOL*)arg2 ;
-(void)_focusOnSearchResultWithOptions:(unsigned long long)arg1 ;
-(void)_goToURL:(id)arg1 atLocation:(CGPoint)arg2 ;
-(id)_URLWithPageIndex:(long long)arg1 ;
-(void)_showActionSheetForURL:(id)arg1 atLocation:(CGPoint)arg2 withAnnotationRect:(CGRect)arg3 ;
-(void)pdfHostViewController:(id)arg1 updatePageCount:(long long)arg2 ;
-(void)pdfHostViewController:(id)arg1 documentDidUnlockWithPassword:(id)arg2 ;
-(void)pdfHostViewController:(id)arg1 findStringUpdate:(unsigned long long)arg2 done:(BOOL)arg3 ;
-(void)pdfHostViewController:(id)arg1 goToURL:(id)arg2 ;
-(void)pdfHostViewController:(id)arg1 goToPageIndex:(long long)arg2 withViewFrustum:(CGRect)arg3 ;
-(void)pdfHostViewController:(id)arg1 didLongPressURL:(id)arg2 atLocation:(CGPoint)arg3 withAnnotationRect:(CGRect)arg4 ;
-(void)pdfHostViewController:(id)arg1 didLongPressPageIndex:(long long)arg2 atLocation:(CGPoint)arg3 withAnnotationRect:(CGRect)arg4 ;
-(void)pdfHostViewControllerExtensionProcessDidCrash:(id)arg1 ;
-(CGPDFDocumentRef)_ensureDocumentForPrinting;
-(BOOL)web_isBackground;
-(UIView *)web_contentView;
-(void)web_setMinimumSize:(CGSize)arg1 ;
-(id)web_initWithFrame:(CGRect)arg1 webView:(id)arg2 mimeType:(id)arg3 ;
-(void)web_setFixedOverlayView:(id)arg1 ;
-(BOOL)web_handleKeyEvent:(id)arg1 ;
-(void)web_setContentProviderData:(id)arg1 suggestedFilename:(id)arg2 ;
-(void)web_scrollViewDidScroll:(id)arg1 ;
-(void)web_scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2 ;
-(void)web_scrollViewDidZoom:(id)arg1 ;
-(void)web_scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3 ;
-(void)web_computedContentInsetDidChange;
-(void)web_didSameDocumentNavigation:(unsigned)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(NSData *)web_dataRepresentation;
-(NSString *)web_suggestedFilename;
-(void)web_beginAnimatedResizeWithUpdates:(/*^block*/id)arg1 ;
-(void)web_snapshotRectInContentViewCoordinates:(CGRect)arg1 snapshotWidth:(double)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)web_setOverlaidAccessoryViewsInset:(CGSize)arg1 ;
-(CGPDFDocumentRef)_wk_printedDocument;
-(void)actionSheetAssistant:(id)arg1 shareElementWithURL:(id)arg2 rect:(CGRect)arg3 ;
-(void)dealloc;
@end

