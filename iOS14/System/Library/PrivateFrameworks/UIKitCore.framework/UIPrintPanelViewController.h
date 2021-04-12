/*
* Generated on Thursday, January 14, 2021 at 2:20:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIPrinterBrowserOwner.h>
#import <UIKit/UIPrintPanelAppearanceDelegate.h>

@class PKPrinter, UIPrintInteractionController, UINavigationController, UIPrintPanelTableViewController, UIViewController, UIPopoverController, UIWindow, NSArray, UIPrintPaper, NSString;

@interface UIPrintPanelViewController : NSObject <UIPrinterBrowserOwner, UIPrintPanelAppearanceDelegate> {

	UIPrintInteractionController* _printInteractionController;
	int _lastUsedPrinterIndex;
	UINavigationController* _navigationController;
	UIPrintPanelTableViewController* _tableViewController;
	UIViewController* _parentController;
	UIPopoverController* _poverController;
	UIWindow* _window;
	PKPrinter* _printer;
	BOOL _dismissed;
	BOOL _animated;
	BOOL _observingRotation;
	BOOL _canShowColor;
	/*^block*/id _previewCompletionHandler;
	BOOL _contentLargerThanRollPaper;
	NSArray* _lastUsedPrinterArray;

}

@property (nonatomic,retain) PKPrinter * printer;                            //@synthesize printer=_printer - In the implementation block
@property (nonatomic,readonly) long long pageCount; 
@property (nonatomic,retain) NSArray * pageRanges; 
@property (assign,nonatomic) BOOL duplex; 
@property (assign,nonatomic) BOOL grayscale; 
@property (assign,nonatomic) BOOL staple; 
@property (assign,nonatomic) BOOL punch; 
@property (nonatomic,readonly) NSArray * paperList; 
@property (nonatomic,retain) UIPrintPaper * paper; 
@property (assign,nonatomic) long long copies; 
@property (assign,nonatomic) BOOL scaleUpDocument; 
@property (assign,nonatomic) BOOL annotationsImaged; 
@property (nonatomic,retain) NSString * jobAccountID; 
@property (nonatomic,readonly) BOOL showDuplex; 
@property (nonatomic,readonly) BOOL showColor; 
@property (nonatomic,readonly) BOOL showPageRange; 
@property (nonatomic,readonly) BOOL showCopies; 
@property (nonatomic,readonly) BOOL showPaper; 
@property (nonatomic,readonly) BOOL showPaperSelection; 
@property (nonatomic,readonly) BOOL showPreview; 
@property (nonatomic,readonly) BOOL showMoreOptions; 
@property (nonatomic,readonly) BOOL showStaple; 
@property (nonatomic,readonly) BOOL showPunch; 
@property (nonatomic,readonly) BOOL showScaleUp; 
@property (nonatomic,readonly) BOOL contentLargerThanRollPaper;              //@synthesize contentLargerThanRollPaper=_contentLargerThanRollPaper - In the implementation block
@property (nonatomic,readonly) BOOL showJobAccountID; 
@property (nonatomic,readonly) BOOL isJobAccountIDRequired; 
@property (nonatomic,readonly) BOOL hasJobAccountID; 
@property (nonatomic,readonly) BOOL showAnnotationSwitch; 
@property (retain) NSArray * lastUsedPrinterArray;                           //@synthesize lastUsedPrinterArray=_lastUsedPrinterArray - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)grayscale;
-(BOOL)punch;
-(UIPrintPaper *)paper;
-(void)setGrayscale:(BOOL)arg1 ;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(BOOL)staple;
-(BOOL)duplex;
-(long long)copies;
-(PKPrinter *)printer;
-(long long)pageCount;
-(unsigned long long)supportedInterfaceOrientations;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(id)printInfo;
-(BOOL)showStaple;
-(void)setStaple:(BOOL)arg1 ;
-(BOOL)showCopies;
-(BOOL)showDuplex;
-(BOOL)showColor;
-(BOOL)showPunch;
-(BOOL)showPaper;
-(void)setPunch:(BOOL)arg1 ;
-(void)setPaper:(UIPrintPaper *)arg1 ;
-(NSArray *)paperList;
-(void)setCopies:(long long)arg1 ;
-(void)setDuplex:(BOOL)arg1 ;
-(NSArray *)pageRanges;
-(void)setPrinter:(PKPrinter *)arg1 ;
-(void)printMoreOptionsViewDidDisappear;
-(void)cancelPrinting;
-(BOOL)scaleUpDocument;
-(BOOL)annotationsImaged;
-(BOOL)showPageRange;
-(void)printPanelDidDisappear;
-(BOOL)showAnnotationSwitch;
-(BOOL)showJobAccountID;
-(id)localizedPageRangeText;
-(BOOL)showPaperSelection;
-(BOOL)isJobAccountIDRequired;
-(void)setPageRanges:(NSArray *)arg1 ;
-(void)startPrinting;
-(void)setAnnotationsImaged:(BOOL)arg1 ;
-(void)setJobAccountID:(NSString *)arg1 ;
-(BOOL)showPreview;
-(BOOL)showScaleUp;
-(void)dismissAnimated:(BOOL)arg1 ;
-(BOOL)hasJobAccountID;
-(void)printNavigationConrollerDidDismiss;
-(void)lookupLastUsedPrinter;
-(void)_keyWindowWillRotate:(id)arg1 ;
-(void)_presentInParentAnimated:(BOOL)arg1 ;
-(void)presentPrintPanelAnimated:(BOOL)arg1 hostingScene:(id)arg2 ;
-(void)dismissPrintPanel:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)contentLargerThanRollPaper;
-(id)_removeRollsFrom:(id)arg1 ;
-(BOOL)testIfContentLargerThanRollPaper:(id)arg1 ;
-(NSArray *)lastUsedPrinterArray;
-(void)setLastUsedPrinterArray:(NSArray *)arg1 ;
-(BOOL)filtersPrinters;
-(void)printerBrowserViewDidDisappear;
-(void)printPaperViewDidDisappear;
-(void)setScaleUpDocument:(BOOL)arg1 ;
-(void)printRangeViewDidDisappear;
-(id)initWithPrintInterationController:(id)arg1 inParentController:(id)arg2 ;
-(void)presentPrintPanelFromRect:(CGRect)arg1 inView:(id)arg2 animated:(BOOL)arg3 ;
-(void)presentPrintPanelFromBarButtonItem:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)showMoreOptions;
-(NSString *)jobAccountID;
-(void)dealloc;
@end

