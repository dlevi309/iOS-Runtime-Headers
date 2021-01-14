/*
* Generated on Thursday, January 14, 2021 at 2:23:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <UIKit/UIPrintInteractionControllerDelegate.h>
#import <libobjc.A.dylib/SFPrintPageRendererDelegate.h>

@protocol _SFDialogPresenting, _SFPrintControllerDelegate;
@class UIPrintInfo, SFPrintPageRenderer, NSString, NSMutableArray, SFPrintQueueItem, WKWebView, _SFReaderController, UIPrintInteractionController;

@interface _SFPrintController : NSObject <UIPrintInteractionControllerDelegate, SFPrintPageRendererDelegate> {

	UIPrintInfo* _cachedPrintInfo;
	SFPrintPageRenderer* _cachedPrintPageRenderer;
	NSString* _urlString;
	NSString* _pageTitle;
	NSString* _loadingDialogTitle;
	NSMutableArray* _printQueue;
	SFPrintQueueItem* _currentItem;
	BOOL _isDisplayingPrintInteractionController;
	BOOL _hasSetupPrintController;
	BOOL _suppressingPrintUI;
	WKWebView* _webView;
	_SFReaderController* _readerController;
	id<_SFDialogPresenting> _dialogPresenter;
	id<_SFPrintControllerDelegate> _delegate;
	UIPrintInteractionController* _printInteractionController;

}

@property (assign,nonatomic,__weak) WKWebView * webView;                                               //@synthesize webView=_webView - In the implementation block
@property (assign,nonatomic,__weak) _SFReaderController * readerController;                            //@synthesize readerController=_readerController - In the implementation block
@property (assign,nonatomic,__weak) id<_SFDialogPresenting> dialogPresenter;                           //@synthesize dialogPresenter=_dialogPresenter - In the implementation block
@property (assign,nonatomic,__weak) id<_SFPrintControllerDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) SFPrintPageRenderer * printRenderer; 
@property (nonatomic,readonly) UIPrintInfo * printInfo; 
@property (getter=isDisplayingPrintUI,nonatomic,readonly) BOOL displayingPrintUI; 
@property (nonatomic,readonly) NSString * suggestedPDFFileName; 
@property (nonatomic,readonly) UIPrintInteractionController * printInteractionController;              //@synthesize printInteractionController=_printInteractionController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(WKWebView *)webView;
-(_SFReaderController *)readerController;
-(BOOL)setUpPrintController;
-(void)printInteractionControllerDidFinish;
-(void)getPDFDataForUsage:(long long)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)init;
-(SFPrintPageRenderer *)printRenderer;
-(id<_SFPrintControllerDelegate>)delegate;
-(BOOL)_isContentManaged;
-(void)preparePrintInteractionControllerForUsage:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(id)printInteractionControllerParentViewController:(id)arg1 ;
-(void)setDialogPresenter:(id<_SFDialogPresenting>)arg1 ;
-(void)handleNextPrintRequest;
-(void)_preparePrintInteractionControllerForUsage:(long long)arg1 onlyIfLoaded:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)resetPrintUISuppression;
-(UIPrintInfo *)printInfo;
-(void)setDelegate:(id<_SFPrintControllerDelegate>)arg1 ;
-(void)_printCurrentItem;
-(void)_didFinishPrintingCurrentItemWithResult:(long long)arg1 fromPrintInteractionControllerCompletion:(BOOL)arg2 ;
-(id<_SFDialogPresenting>)dialogPresenter;
-(void)setReaderController:(_SFReaderController *)arg1 ;
-(id)_dequeuePrintItem;
-(id)presentingViewControllerForPrintPageRenderer:(id)arg1 ;
-(NSString *)suggestedPDFFileName;
-(void)dismissPrintInteractionControllerAnimated:(BOOL)arg1 ;
-(void)_shouldPrintWhileLoadingForUsage:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)isDisplayingPrintUI;
-(void)_shouldAllowBlockedPrintWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)printFrame:(id)arg1 initiatedByWebContent:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)clearQueue;
-(UIPrintInteractionController *)printInteractionController;
-(void)_enqueuePrintItem:(id)arg1 ;
-(void)setWebView:(WKWebView *)arg1 ;
-(void)updatePrintInfo;
-(void)dealloc;
@end

