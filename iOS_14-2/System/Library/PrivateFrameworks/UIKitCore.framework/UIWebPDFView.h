/*
* Generated on Thursday, January 14, 2021 at 2:20:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIPDFPageViewDelegate.h>
#import <UIKit/UIPDFAnnotationControllerDelegate.h>
#import <libobjc.A.dylib/WebPDFViewPlaceholderDelegate.h>
#import <UIKit/UIPopoverControllerDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol UIWebPDFViewDelegate;
@class NSMutableArray, UIPDFDocument, NSObject, UITapGestureRecognizer, NSURL, NSArray, WebPDFViewPlaceholder, UIColor, NSString, NSData;

@interface UIWebPDFView : UIView <UIPDFPageViewDelegate, UIPDFAnnotationControllerDelegate, WebPDFViewPlaceholderDelegate, UIPopoverControllerDelegate, UIGestureRecognizerDelegate> {

	NSMutableArray* _backingLayerImageViews;
	CGPDFDocumentRef _cgPDFDocument;
	UIPDFDocument* _document;
	BOOL _hasScheduledCacheUpdate;
	CGRect _documentBounds;
	NSObject*<UIWebPDFViewDelegate> _pdfDelegate;
	BOOL _delegateRespondsToDidScroll;
	UITapGestureRecognizer* _tapGestureRecognizer;
	NSURL* _documentURL;
	BOOL _rotating;
	BOOL _zooming;
	double _initialZoomScale;
	CGAffineTransform _documentTransform;
	double _documentScale;
	long long _ignoreContentOffsetChanges;
	CGPoint _contentOffsetAtScrollStart;
	NSMutableArray* _pageViews;
	NSArray* _pageMinYs;
	BOOL hidePageViewsUntilReadyToRender;
	BOOL hideActivityIndicatorForUnRenderedContent;
	BOOL readyForSnapshot;
	WebPDFViewPlaceholder* pdfPlaceHolderView;
	UIColor* backgroundColorForUnRenderedContent;
	NSString* documentPassword;
	NSArray* pageRects;

}

@property (assign) WebPDFViewPlaceholder * pdfPlaceHolderView; 
@property (nonatomic,retain) NSURL * documentURL;                                         //@synthesize documentURL=_documentURL - In the implementation block
@property (assign,nonatomic) double initialZoomScale;                                     //@synthesize initialZoomScale=_initialZoomScale - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColorForUnRenderedContent; 
@property (assign,nonatomic) BOOL hideActivityIndicatorForUnRenderedContent; 
@property (assign,nonatomic) BOOL hidePageViewsUntilReadyToRender; 
@property (assign,nonatomic) long long ignoreContentOffsetChanges;                        //@synthesize ignoreContentOffsetChanges=_ignoreContentOffsetChanges - In the implementation block
@property (assign,nonatomic) CGAffineTransform documentTransform;                         //@synthesize documentTransform=_documentTransform - In the implementation block
@property (nonatomic,retain) NSString * documentPassword; 
@property (nonatomic,readonly) double documentScale;                                      //@synthesize documentScale=_documentScale - In the implementation block
@property (nonatomic,retain) NSArray * pageRects; 
@property (assign,nonatomic) BOOL readyForSnapshot; 
@property (nonatomic,retain) NSArray * pageMinYs;                                         //@synthesize pageMinYs=_pageMinYs - In the implementation block
@property (assign,nonatomic) NSObject*<UIWebPDFViewDelegate> pdfDelegate;                 //@synthesize pdfDelegate=_pdfDelegate - In the implementation block
@property (nonatomic,readonly) CGRect documentBounds;                                     //@synthesize documentBounds=_documentBounds - In the implementation block
@property (nonatomic,readonly) unsigned long long totalPages; 
@property (nonatomic,readonly) CGPDFDocumentRef cgPDFDocument; 
@property (nonatomic,readonly) UIPDFDocument * document; 
@property (nonatomic,readonly) NSData * documentData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(void)setAsPDFDocRepAndView;
-(id)_selection;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(void)didRotate:(id)arg1 ;
-(void)_define:(id)arg1 ;
-(void)_share:(id)arg1 ;
-(NSURL *)documentURL;
-(void)_didScroll;
-(void)didZoom:(id)arg1 ;
-(void)willZoom:(id)arg1 ;
-(NSArray *)pageRects;
-(NSArray *)pageMinYs;
-(CGRect)documentBounds;
-(void)willRotate:(id)arg1 ;
-(void)clearSelection;
-(void)willScroll:(id)arg1 ;
-(NSObject*<UIWebPDFViewDelegate>)pdfDelegate;
-(UIPDFDocument *)document;
-(void)resetZoom:(id)arg1 ;
-(unsigned long long)totalPages;
-(void)setPageRects:(NSArray *)arg1 ;
-(void)setPageMinYs:(NSArray *)arg1 ;
-(id)viewportView;
-(id)uiPDFDocument;
-(id)viewAtIndex:(long long)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)setPdfPlaceHolderView:(WebPDFViewPlaceholder *)arg1 ;
-(void)setBackgroundColorForUnRenderedContent:(UIColor *)arg1 ;
-(WebPDFViewPlaceholder *)pdfPlaceHolderView;
-(void)didCompleteLayout;
-(void)_tapGestureRecognized:(id)arg1 ;
-(void)setDocumentURL:(NSURL *)arg1 ;
-(void)setDocumentPassword:(NSString *)arg1 ;
-(NSString *)documentPassword;
-(void)_removeBackgroundImageObserverIfNeeded:(id)arg1 ;
-(void)setReadyForSnapshot:(BOOL)arg1 ;
-(CGRect)_viewportBoundsInUIVIewCoordsWithView:(id)arg1 ;
-(CGPDFDocumentRef)cgPDFDocument;
-(id)_pageWithSelection;
-(id)_installViewAtIndex:(long long)arg1 inFrame:(CGRect)arg2 ;
-(CGRect)_viewCachingBoundsInUIViewCoords;
-(void)_removePageViewsNotInViewCoordsRect:(CGRect)arg1 ;
-(void)_addSubViewsInViewCoordsBounds:(CGRect)arg1 force:(BOOL)arg2 ;
-(void)didReceiveMemoryWarning:(id)arg1 ;
-(void)_removePageViewsNotInCurrentViewCoordsRect;
-(CGRect)_viewportBoundsInUIViewCoords;
-(void)_scheduleRemovePageViewsNotInViewCoordsRect;
-(void)ensureCorrectPagesAreInstalled:(BOOL)arg1 ;
-(void)_recreateUIPDFDocument;
-(BOOL)_checkIfDocumentNeedsUnlock;
-(unsigned long long)_pageNumberForRect:(CGRect)arg1 ;
-(void)_didTouch:(id)arg1 inRect:(CGRect)arg2 atPoint:(CGPoint)arg3 linkingToURL:(id)arg4 ;
-(void)_didTouch:(id)arg1 inRect:(CGRect)arg2 atPoint:(CGPoint)arg3 linkingToPageIndex:(unsigned long long)arg4 ;
-(void)_didLongPress:(id)arg1 inRect:(CGRect)arg2 atPoint:(CGPoint)arg3 linkingToURL:(id)arg4 ;
-(void)_didLongPress:(id)arg1 inRect:(CGRect)arg2 atPoint:(CGPoint)arg3 linkingToPageIndex:(unsigned long long)arg4 ;
-(void)zoom:(id)arg1 to:(CGRect)arg2 atPoint:(CGPoint)arg3 kind:(int)arg4 ;
-(void)annotation:(id)arg1 wasTouchedAtPoint:(CGPoint)arg2 controller:(id)arg3 ;
-(void)annotation:(id)arg1 isBeingPressedAtPoint:(CGPoint)arg2 controller:(id)arg3 ;
-(void)viewWillClose;
-(void)setPdfDelegate:(NSObject*<UIWebPDFViewDelegate>)arg1 ;
-(NSData *)documentData;
-(void)setIgnoreContentOffsetChanges:(long long)arg1 ;
-(BOOL)_hasPageRects;
-(id)initWithWebPDFViewPlaceholder:(id)arg1 ;
-(id)_addPageAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)firstVisiblePageNumber;
-(void)prepareForSnapshot:(BOOL)arg1 ;
-(void)snapshotComplete;
-(BOOL)_tryToUnlockDocumentWithPassword:(id)arg1 ;
-(void)setInitialZoomScale:(double)arg1 ;
-(CGAffineTransform)documentTransform;
-(void)dealloc;
-(id)imageForContactRect:(CGRect)arg1 onPageInViewRect:(CGRect)arg2 destinationRect:(CGRect)arg3 ;
-(double)initialZoomScale;
-(void)setDocumentTransform:(CGAffineTransform)arg1 ;
-(double)documentScale;
-(long long)ignoreContentOffsetChanges;
-(BOOL)hidePageViewsUntilReadyToRender;
-(void)setHidePageViewsUntilReadyToRender:(BOOL)arg1 ;
-(UIColor *)backgroundColorForUnRenderedContent;
-(BOOL)hideActivityIndicatorForUnRenderedContent;
-(void)setHideActivityIndicatorForUnRenderedContent:(BOOL)arg1 ;
-(BOOL)readyForSnapshot;
@end

