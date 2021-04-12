/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <UIKit/UIPrintInteractionControllerDelegate.h>
#import <libobjc.A.dylib/SFPrintPageRendererDelegate.h>

@protocol _SFDialogPresenting, _SFPrintControllerDelegate;
@class UIPrintInfo, SFPrintPageRenderer, UIPrintInteractionController, NSString, NSMutableArray, SFPrintQueueItem, WKWebView, _SFReaderController;

@interface _SFPrintController : NSObject <UIPrintInteractionControllerDelegate, SFPrintPageRendererDelegate> {

	UIPrintInfo* _cachedPrintInfo;
	SFPrintPageRenderer* _cachedPrintPageRenderer;
	UIPrintInteractionController* _printInteractionController;
	NSString* _urlString;
	NSString* _pageTitle;
	NSString* _loadingDialogTitle;
	NSMutableArray* _printQueue;
	SFPrintQueueItem* _currentItem;
	BOOL _hasReservedPrintInteractionController;
	BOOL _suppressingPrintUI;
	WKWebView* _webView;
	_SFReaderController* _readerController;
	id<_SFDialogPresenting> _dialogPresenter;
	id<_SFPrintControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) WKWebView * webView;                                  //@synthesize webView=_webView - In the implementation block
@property (assign,nonatomic,__weak) _SFReaderController * readerController;               //@synthesize readerController=_readerController - In the implementation block
@property (assign,nonatomic,__weak) id<_SFDialogPresenting> dialogPresenter;              //@synthesize dialogPresenter=_dialogPresenter - In the implementation block
@property (assign,nonatomic,__weak) id<_SFPrintControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) SFPrintPageRenderer * printRenderer; 
@property (nonatomic,readonly) UIPrintInfo * printInfo; 
@property (nonatomic,readonly) NSString * suggestedPDFFileName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isDisplayingPrintUI;
-(id)init;
-(void)dealloc;
-(id<_SFPrintControllerDelegate>)delegate;
-(void)setDelegate:(id<_SFPrintControllerDelegate>)arg1 ;
-(WKWebView *)webView;
-(UIPrintInfo *)printInfo;
-(id)printInteractionControllerParentViewController:(id)arg1 ;
-(void)setWebView:(WKWebView *)arg1 ;
-(id<_SFDialogPresenting>)dialogPresenter;
-(void)setDialogPresenter:(id<_SFDialogPresenting>)arg1 ;
-(id)presentingViewControllerForPrintPageRenderer:(id)arg1 ;
-(void)printInteractionControllerDidFinish;
-(void)preparePrintInteractionControllerForUsage:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)clearQueue;
-(SFPrintPageRenderer *)printRenderer;
-(void)_preparePrintInteractionControllerForUsage:(long long)arg1 onlyIfLoaded:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_shouldPrintWhileLoadingForUsage:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updatePrintInfo;
-(void)_didFinishPrintingCurrentItemWithResult:(long long)arg1 fromPrintInteractionControllerCompletion:(BOOL)arg2 ;
-(void)handleNextPrintRequest;
-(void)_enqueuePrintItem:(id)arg1 ;
-(BOOL)reservePrintInteractionController;
-(id)_dequeuePrintItem;
-(void)_printCurrentItem;
-(void)_shouldAllowBlockedPrintWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)printFrame:(id)arg1 initiatedByWebContent:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)getPDFDataForUsage:(long long)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)resetPrintUISuppression;
-(NSString *)suggestedPDFFileName;
-(_SFReaderController *)readerController;
-(void)setReaderController:(_SFReaderController *)arg1 ;
@end

