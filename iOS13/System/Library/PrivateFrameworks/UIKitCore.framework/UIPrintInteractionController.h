/*
* Generated on Monday, March 1, 2021 at 2:30:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol OS_dispatch_queue, UIPrintInteractionControllerDelegate, UIPrintInteractionControllerActivityDelegate;
#import <UIKitCore/UIKitCore-Structs.h>
@class NSObject, UIPrintInfo, UIPrintPaper, UIPrintPageRenderer, UIPrintFormatter, NSArray, UIWindowScene, PKPrinter;

@interface UIPrintInteractionController : NSObject {

	BOOL _hidesNumberOfCopies;
	BOOL _isContentManaged;
	/*^block*/id _completionHandler;
	unsigned long long _backgroundTaskIdentifier;
	NSObject*<OS_dispatch_queue> _previewQueue;
	id _printState;
	id _temporaryRetainCycle;
	BOOL _showsPageRange;
	BOOL _showsPaperSelectionForLoadedPapers;
	UIPrintInfo* _printInfo;
	id<UIPrintInteractionControllerDelegate> _delegate;
	UIPrintPaper* _printPaper;
	UIPrintPageRenderer* _printPageRenderer;
	UIPrintFormatter* _printFormatter;
	id _printingItem;
	NSArray* _printingItems;
	UIWindowScene* _hostingWindowScene;
	id<UIPrintInteractionControllerActivityDelegate> _printActivityDelegate;

}

@property (nonatomic,readonly) long long pageCount; 
@property (nonatomic,retain) NSArray * pageRanges; 
@property (nonatomic,retain) PKPrinter * printer; 
@property (nonatomic,retain) UIWindowScene * hostingWindowScene;                                                         //@synthesize hostingWindowScene=_hostingWindowScene - In the implementation block
@property (nonatomic,retain) UIPrintPaper * paper; 
@property (assign,nonatomic) BOOL isContentManaged;                                                                      //@synthesize isContentManaged=_isContentManaged - In the implementation block
@property (assign,nonatomic,__weak) id<UIPrintInteractionControllerActivityDelegate> printActivityDelegate;              //@synthesize printActivityDelegate=_printActivityDelegate - In the implementation block
@property (nonatomic,retain) UIPrintInfo * printInfo;                                                                    //@synthesize printInfo=_printInfo - In the implementation block
@property (assign,nonatomic,__weak) id<UIPrintInteractionControllerDelegate> delegate;                                   //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL showsPageRange;                                                                        //@synthesize showsPageRange=_showsPageRange - In the implementation block
@property (assign,nonatomic) BOOL showsNumberOfCopies; 
@property (assign,nonatomic) BOOL showsPaperSelectionForLoadedPapers;                                                    //@synthesize showsPaperSelectionForLoadedPapers=_showsPaperSelectionForLoadedPapers - In the implementation block
@property (nonatomic,readonly) UIPrintPaper * printPaper;                                                                //@synthesize printPaper=_printPaper - In the implementation block
@property (nonatomic,retain) UIPrintPageRenderer * printPageRenderer;                                                    //@synthesize printPageRenderer=_printPageRenderer - In the implementation block
@property (nonatomic,retain) UIPrintFormatter * printFormatter;                                                          //@synthesize printFormatter=_printFormatter - In the implementation block
@property (nonatomic,copy) id printingItem;                                                                              //@synthesize printingItem=_printingItem - In the implementation block
@property (nonatomic,copy) NSArray * printingItems;                                                                      //@synthesize printingItems=_printingItems - In the implementation block
+(BOOL)isPrintingAvailable;
+(id)printableUTIs;
+(BOOL)canPrintURL:(id)arg1 ;
+(BOOL)canPrintData:(id)arg1 ;
+(id)sharedPrintController;
-(id)init;
-(void)dealloc;
-(id<UIPrintInteractionControllerDelegate>)delegate;
-(void)setDelegate:(id<UIPrintInteractionControllerDelegate>)arg1 ;
-(BOOL)isContentManaged;
-(void)dismissAnimated:(BOOL)arg1 ;
-(long long)pageCount;
-(void)setIsContentManaged:(BOOL)arg1 ;
-(PKPrinter *)printer;
-(UIPrintPaper *)paper;
-(void)setPageRanges:(NSArray *)arg1 ;
-(id)_currentPrintInfo;
-(void)setPrinter:(PKPrinter *)arg1 ;
-(BOOL)_canShowColor;
-(void)_printPanelDidPresent;
-(void)_generatePrintPreview:(/*^block*/id)arg1 ;
-(void)_printPanelWillDismiss:(BOOL)arg1 ;
-(void)_printPanelDidDismiss;
-(void)_cancelAllPreviewGeneration;
-(void)_updatePageCount;
-(NSArray *)pageRanges;
-(CGSize)_printItemContentSize;
-(void)setPaper:(UIPrintPaper *)arg1 ;
-(BOOL)_canShowDuplex;
-(BOOL)_canShowPageRange;
-(BOOL)_canShowCopies;
-(BOOL)_canShowPaperList;
-(BOOL)_canShowPreview;
-(BOOL)_canShowStaple;
-(BOOL)_canShowAnnotations;
-(UIPrintInfo *)printInfo;
-(UIWindowScene *)hostingWindowScene;
-(void)setHostingWindowScene:(UIWindowScene *)arg1 ;
-(void)setPrintPageRenderer:(UIPrintPageRenderer *)arg1 ;
-(UIPrintPageRenderer *)printPageRenderer;
-(void)_cleanPrintState;
-(BOOL)_setupPrintPanel:(/*^block*/id)arg1 ;
-(void)_endPrintJob:(BOOL)arg1 error:(id)arg2 ;
-(void)_ensurePDFIsUnlockedFirstAttempt:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)_presentAnimated:(BOOL)arg1 hostingScene:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)presentAnimated:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)_printingItemIsReallyTallPDF;
-(void)setPrintFormatter:(UIPrintFormatter *)arg1 ;
-(UIPrintFormatter *)printFormatter;
-(void)_setPrintInfoState:(int)arg1 ;
-(BOOL)savePDFToURL:(id)arg1 showProgress:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)_canPrintPDFURL:(id)arg1 ;
-(BOOL)_canPrintPDFData:(id)arg1 ;
-(id)printingItem;
-(id)_paperForPDFItem:(id)arg1 withDuplexMode:(long long)arg2 ;
-(void)_updatePrintPaper;
-(id)_newPDFPreviewURLWithPath:(id)arg1 isContentManaged:(BOOL)arg2 ;
-(CGContextRef)_newSaveContext:(id)arg1 withMediaRect:(CGRect)arg2 ;
-(void)_startPrinting;
-(void)_updateCutterBehavior;
-(CGSize)_printablePDFURLSize:(id)arg1 ;
-(CGSize)_printablePDFDataSize:(id)arg1 ;
-(double)_getCutLengthFromDelegateForPaper:(id)arg1 ;
-(id)_getChosenPaperFromDelegateForPaperList:(id)arg1 ;
-(id)_paperForContentType:(long long)arg1 ;
-(void)_preparePrintInfo;
-(void)_printPage;
-(id)_printPageRenderer:(id)arg1 ;
-(id)_printItem:(id)arg1 ;
-(void)setPrintingItem:(id)arg1 ;
-(BOOL)presentFromRect:(CGRect)arg1 inView:(id)arg2 animated:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)presentFromBarButtonItem:(id)arg1 animated:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)printToPrinter:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)savePDFToURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)showsNumberOfCopies;
-(void)setShowsNumberOfCopies:(BOOL)arg1 ;
-(BOOL)_canShowPunch;
-(void)setPrintInfo:(UIPrintInfo *)arg1 ;
-(BOOL)showsPageRange;
-(void)setShowsPageRange:(BOOL)arg1 ;
-(BOOL)showsPaperSelectionForLoadedPapers;
-(void)setShowsPaperSelectionForLoadedPapers:(BOOL)arg1 ;
-(UIPrintPaper *)printPaper;
-(NSArray *)printingItems;
-(void)setPrintingItems:(NSArray *)arg1 ;
-(id<UIPrintInteractionControllerActivityDelegate>)printActivityDelegate;
-(void)setPrintActivityDelegate:(id<UIPrintInteractionControllerActivityDelegate>)arg1 ;
-(void)_enableManualPrintPage:(BOOL)arg1 ;
-(void)_manualPrintPage;
-(void)_cancelManualPrintPage;
@end

