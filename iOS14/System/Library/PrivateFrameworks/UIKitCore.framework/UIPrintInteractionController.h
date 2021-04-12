/*
* Generated on Thursday, January 14, 2021 at 2:20:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol OS_dispatch_queue, UIPrintInteractionControllerDelegate, UIPrintInteractionControllerActivityDelegate;
#import <UIKitCore/UIKitCore-Structs.h>
@class NSObject, NSArray, PKPrinter, UIPrintPaper, NSURL, UIPrintInfo, UIPrintPageRenderer, UIPrintFormatter, UIWindowScene, NSMutableSet, UIPrintPanelViewController, UIPrintingProgress, PKPrintSettings;

@interface UIPrintInteractionController : NSObject {

	BOOL _isContentManaged;
	unsigned long long _backgroundTaskIdentifier;
	NSObject*<OS_dispatch_queue> _previewQueue;
	NSObject*<OS_dispatch_queue> _printQueue;
	id _temporaryRetainCycle;
	BOOL _showsPageRange;
	BOOL _showsNumberOfCopies;
	BOOL _showsPaperSelectionForLoadedPapers;
	BOOL _printStateActive;
	BOOL _supressNotifyDismissed;
	BOOL _manualPrintPageEnabled;
	BOOL _showPrintingProgress;
	int _printInfoState;
	/*^block*/id _completionHandler;
	NSArray* _pageRanges;
	PKPrinter* _printer;
	UIPrintPaper* _paper;
	NSURL* _tempPreviewFileURL;
	UIPrintInfo* _printInfo;
	id<UIPrintInteractionControllerDelegate> _delegate;
	UIPrintPaper* _printPaper;
	UIPrintPageRenderer* _printPageRenderer;
	UIPrintFormatter* _printFormatter;
	id _printingItem;
	NSArray* _printingItems;
	long long _pageCount;
	UIWindowScene* _hostingWindowScene;
	long long _pageCountWithRanges;
	NSMutableSet* _previewStates;
	long long _currentPage;
	long long _pagesDrawn;
	UIPrintPanelViewController* _printPanelViewController;
	UIPrintingProgress* _printingProgress;
	PKPrintSettings* _printSettings;
	UIPrintInfo* _activePrintInfo;
	UIPrintPageRenderer* _formatterRenderer;
	NSURL* _saveFileURL;
	id<UIPrintInteractionControllerActivityDelegate> _printActivityDelegate;
	NSRange _currentRange;

}

@property (copy) id _completionHandler;                                                                                  //@synthesize completionHandler=_completionHandler - In the implementation block
@property (assign) BOOL printStateActive;                                                                                //@synthesize printStateActive=_printStateActive - In the implementation block
@property (assign,nonatomic) long long pageCount;                                                                        //@synthesize pageCount=_pageCount - In the implementation block
@property (nonatomic,retain) NSArray * pageRanges;                                                                       //@synthesize pageRanges=_pageRanges - In the implementation block
@property (nonatomic,retain) PKPrinter * printer;                                                                        //@synthesize printer=_printer - In the implementation block
@property (nonatomic,retain) UIWindowScene * hostingWindowScene;                                                         //@synthesize hostingWindowScene=_hostingWindowScene - In the implementation block
@property (assign) long long pageCountWithRanges;                                                                        //@synthesize pageCountWithRanges=_pageCountWithRanges - In the implementation block
@property (retain) NSMutableSet * previewStates;                                                                         //@synthesize previewStates=_previewStates - In the implementation block
@property (retain) NSURL * tempPreviewFileURL;                                                                           //@synthesize tempPreviewFileURL=_tempPreviewFileURL - In the implementation block
@property (assign) long long currentPage;                                                                                //@synthesize currentPage=_currentPage - In the implementation block
@property (assign) NSRange currentRange;                                                                                 //@synthesize currentRange=_currentRange - In the implementation block
@property (assign) long long pagesDrawn;                                                                                 //@synthesize pagesDrawn=_pagesDrawn - In the implementation block
@property (retain) UIPrintPanelViewController * printPanelViewController;                                                //@synthesize printPanelViewController=_printPanelViewController - In the implementation block
@property (retain) UIPrintingProgress * printingProgress;                                                                //@synthesize printingProgress=_printingProgress - In the implementation block
@property (retain) PKPrintSettings * printSettings;                                                                      //@synthesize printSettings=_printSettings - In the implementation block
@property (retain) UIPrintInfo * activePrintInfo;                                                                        //@synthesize activePrintInfo=_activePrintInfo - In the implementation block
@property (assign) int printInfoState;                                                                                   //@synthesize printInfoState=_printInfoState - In the implementation block
@property (assign) BOOL supressNotifyDismissed;                                                                          //@synthesize supressNotifyDismissed=_supressNotifyDismissed - In the implementation block
@property (retain) UIPrintPageRenderer * formatterRenderer;                                                              //@synthesize formatterRenderer=_formatterRenderer - In the implementation block
@property (assign) BOOL manualPrintPageEnabled;                                                                          //@synthesize manualPrintPageEnabled=_manualPrintPageEnabled - In the implementation block
@property (retain) NSURL * saveFileURL;                                                                                  //@synthesize saveFileURL=_saveFileURL - In the implementation block
@property (assign) BOOL showPrintingProgress;                                                                            //@synthesize showPrintingProgress=_showPrintingProgress - In the implementation block
@property (nonatomic,retain) UIPrintPaper * paper;                                                                       //@synthesize paper=_paper - In the implementation block
@property (assign,nonatomic) BOOL isContentManaged;                                                                      //@synthesize isContentManaged=_isContentManaged - In the implementation block
@property (assign,nonatomic,__weak) id<UIPrintInteractionControllerActivityDelegate> printActivityDelegate;              //@synthesize printActivityDelegate=_printActivityDelegate - In the implementation block
@property (nonatomic,retain) UIPrintInfo * printInfo;                                                                    //@synthesize printInfo=_printInfo - In the implementation block
@property (assign,nonatomic,__weak) id<UIPrintInteractionControllerDelegate> delegate;                                   //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL showsPageRange;                                                                        //@synthesize showsPageRange=_showsPageRange - In the implementation block
@property (assign,nonatomic) BOOL showsNumberOfCopies;                                                                   //@synthesize showsNumberOfCopies=_showsNumberOfCopies - In the implementation block
@property (assign,nonatomic) BOOL showsPaperSelectionForLoadedPapers;                                                    //@synthesize showsPaperSelectionForLoadedPapers=_showsPaperSelectionForLoadedPapers - In the implementation block
@property (nonatomic,readonly) UIPrintPaper * printPaper;                                                                //@synthesize printPaper=_printPaper - In the implementation block
@property (nonatomic,retain) UIPrintPageRenderer * printPageRenderer;                                                    //@synthesize printPageRenderer=_printPageRenderer - In the implementation block
@property (nonatomic,retain) UIPrintFormatter * printFormatter;                                                          //@synthesize printFormatter=_printFormatter - In the implementation block
@property (nonatomic,copy) id printingItem;                                                                              //@synthesize printingItem=_printingItem - In the implementation block
@property (nonatomic,copy) NSArray * printingItems;                                                                      //@synthesize printingItems=_printingItems - In the implementation block
+(BOOL)isPrintingAvailable;
+(id)printableUTIs;
+(BOOL)canPrintData:(id)arg1 ;
+(id)sharedPrintController;
+(BOOL)canPrintURL:(id)arg1 ;
-(UIPrintPaper *)paper;
-(BOOL)isContentManaged;
-(id)init;
-(PKPrinter *)printer;
-(id<UIPrintInteractionControllerDelegate>)delegate;
-(UIWindowScene *)hostingWindowScene;
-(void)setHostingWindowScene:(UIWindowScene *)arg1 ;
-(long long)pageCount;
-(void)setPrintInfoState:(int)arg1 ;
-(void)setPrintPageRenderer:(UIPrintPageRenderer *)arg1 ;
-(UIPrintPageRenderer *)printPageRenderer;
-(id)_printItem:(id)arg1 ;
-(void)_cleanPrintState;
-(BOOL)_setupPrintPanel:(/*^block*/id)arg1 forPDFGenerationOnly:(BOOL)arg2 ;
-(id)printingItem;
-(void)_updatePrintInfoWithAnnotations;
-(void)_endPrintJob:(BOOL)arg1 error:(id)arg2 ;
-(BOOL)printStateActive;
-(void)_ensurePDFIsUnlockedFirstAttempt:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)_presentAnimated:(BOOL)arg1 hostingScene:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setPrintStateActive:(BOOL)arg1 ;
-(void)set_completionHandler:(id)arg1 ;
-(void)setPrintFormatter:(UIPrintFormatter *)arg1 ;
-(BOOL)_printingItemIsReallyTallPDF;
-(void)_setPrintInfoState:(int)arg1 ;
-(BOOL)_canPrintPDFURL:(id)arg1 ;
-(BOOL)_canPrintPDFData:(id)arg1 ;
-(id)_paperForPDFItem:(id)arg1 withDuplexMode:(long long)arg2 ;
-(BOOL)_canShowAnnotations;
-(void)_updatePrintPaper;
-(NSURL *)saveFileURL;
-(void)setTempPreviewFileURL:(NSURL *)arg1 ;
-(id)_newPDFPreviewURLWithPath:(id)arg1 isContentManaged:(BOOL)arg2 ;
-(CGContextRef)_newSaveContext:(id)arg1 withMediaRect:(CGRect)arg2 ;
-(void)_updateCutterBehavior;
-(void)_startPrinting;
-(UIPrintInfo *)activePrintInfo;
-(void)_preparePrintInfo;
-(CGSize)_printablePDFURLSize:(id)arg1 ;
-(CGSize)_printablePDFDataSize:(id)arg1 ;
-(id)_printPageRenderer:(id)arg1 ;
-(double)_getCutLengthFromDelegateForPaper:(id)arg1 ;
-(id)_paperForContentType:(long long)arg1 ;
-(void)_completePrintPageWithError:(id)arg1 ;
-(id)_getChosenPaperFromDelegateForPaperList:(id)arg1 ;
-(UIPrintPaper *)printPaper;
-(void)_printPageWithDelay:(double)arg1 ;
-(void)_printItemAsync:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setPrintingItem:(id)arg1 ;
-(NSURL *)tempPreviewFileURL;
-(long long)pagesDrawn;
-(BOOL)presentFromRect:(CGRect)arg1 inView:(id)arg2 animated:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)_setupPrintPanel:(/*^block*/id)arg1 ;
-(BOOL)presentFromBarButtonItem:(id)arg1 animated:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)_canShowPunch;
-(BOOL)printToPrinter:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setPrintInfo:(UIPrintInfo *)arg1 ;
-(BOOL)showsPageRange;
-(void)setShowsPageRange:(BOOL)arg1 ;
-(BOOL)showsNumberOfCopies;
-(void)setShowsNumberOfCopies:(BOOL)arg1 ;
-(BOOL)showsPaperSelectionForLoadedPapers;
-(void)setPrintingItems:(NSArray *)arg1 ;
-(NSMutableSet *)previewStates;
-(void)setShowsPaperSelectionForLoadedPapers:(BOOL)arg1 ;
-(NSArray *)printingItems;
-(void)setPagesDrawn:(long long)arg1 ;
-(long long)pageCountWithRanges;
-(void)setPageCountWithRanges:(long long)arg1 ;
-(void)setPreviewStates:(NSMutableSet *)arg1 ;
-(void)setCurrentRange:(NSRange)arg1 ;
-(UIPrintPanelViewController *)printPanelViewController;
-(UIPrintingProgress *)printingProgress;
-(void)setPrintPanelViewController:(UIPrintPanelViewController *)arg1 ;
-(void)setPrintingProgress:(UIPrintingProgress *)arg1 ;
-(PKPrintSettings *)printSettings;
-(void)setPrintSettings:(PKPrintSettings *)arg1 ;
-(void)setActivePrintInfo:(UIPrintInfo *)arg1 ;
-(int)printInfoState;
-(void)setSaveFileURL:(NSURL *)arg1 ;
-(BOOL)supressNotifyDismissed;
-(void)setSupressNotifyDismissed:(BOOL)arg1 ;
-(UIPrintPageRenderer *)formatterRenderer;
-(void)setFormatterRenderer:(UIPrintPageRenderer *)arg1 ;
-(BOOL)manualPrintPageEnabled;
-(BOOL)showPrintingProgress;
-(void)setManualPrintPageEnabled:(BOOL)arg1 ;
-(void)setShowPrintingProgress:(BOOL)arg1 ;
-(void)setPrintActivityDelegate:(id<UIPrintInteractionControllerActivityDelegate>)arg1 ;
-(long long)currentPage;
-(void)_enableManualPrintPage:(BOOL)arg1 ;
-(BOOL)savePDFToURL:(id)arg1 showProgress:(BOOL)arg2 hostingScene:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_manualPrintPage;
-(void)_cancelManualPrintPage;
-(BOOL)savePDFToURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)savePDFToURL:(id)arg1 showProgress:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)presentAnimated:(BOOL)arg1 hostingScene:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(UIPrintInfo *)printInfo;
-(void)setDelegate:(id<UIPrintInteractionControllerDelegate>)arg1 ;
-(void)setPaper:(UIPrintPaper *)arg1 ;
-(void)setIsContentManaged:(BOOL)arg1 ;
-(void)setCurrentPage:(long long)arg1 ;
-(NSArray *)pageRanges;
-(void)setPageCount:(long long)arg1 ;
-(void)_printPage;
-(id)_completionHandler;
-(void)setPrinter:(PKPrinter *)arg1 ;
-(void)setPageRanges:(NSArray *)arg1 ;
-(void)dismissAnimated:(BOOL)arg1 ;
-(BOOL)_canShowColor;
-(id)_currentPrintInfo;
-(void)_printPanelDidPresent;
-(void)_generatePrintPreview:(/*^block*/id)arg1 ;
-(void)_updatePageCount;
-(void)_printPanelWillDismiss:(BOOL)arg1 ;
-(void)_printPanelDidDismiss;
-(id<UIPrintInteractionControllerActivityDelegate>)printActivityDelegate;
-(void)_cancelAllPreviewGeneration;
-(UIPrintFormatter *)printFormatter;
-(CGSize)_printItemContentSize;
-(BOOL)_canShowDuplex;
-(BOOL)_canShowPageRange;
-(BOOL)_canShowCopies;
-(BOOL)_canShowPaperList;
-(BOOL)_canShowPreview;
-(BOOL)_canShowStaple;
-(NSRange)currentRange;
-(void)dealloc;
-(BOOL)presentAnimated:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

