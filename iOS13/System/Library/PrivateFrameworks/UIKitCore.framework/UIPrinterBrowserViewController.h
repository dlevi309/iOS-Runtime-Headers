/*
* Generated on Monday, March 1, 2021 at 2:30:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UITableViewController.h>
#import <libobjc.A.dylib/PKPrinterBrowserDelegate.h>

@protocol UIPrinterBrowserOwner;
@class PKPrinterBrowser, NSMutableArray, NSArray, PKPrinter, UIPrinterSearchingView, NSString;

@interface UIPrinterBrowserViewController : UITableViewController <PKPrinterBrowserDelegate> {

	id<UIPrinterBrowserOwner> _ownerPanelViewController;
	PKPrinterBrowser* _printerBrowser;
	NSMutableArray* _preferredPrinters;
	NSMutableArray* _otherPrinters;
	NSMutableArray* _filteredOutPrinters;
	NSArray* _lastUsedPrinters;
	PKPrinter* _lockedPrinter;
	BOOL _loaded;
	UIPrinterSearchingView* _searchingView;
	BOOL _searchingViewConstraintsSet;
	BOOL _shouldFilterPrinters;
	double _rowHeight;
	double _maximumPopoverHeight;

}

@property (assign) double maximumPopoverHeight;                     //@synthesize maximumPopoverHeight=_maximumPopoverHeight - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)willEnterForeground;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)updateViewConstraints;
-(void)showCancelButton;
-(id)initWithOwnerViewController:(id)arg1 ;
-(void)setMaximumPopoverHeight:(double)arg1 ;
-(void)adjustPopoverSize;
-(void)printerInfoButtonTapped:(id)arg1 ;
-(void)stopPrinterBrowser;
-(void)didChangePreferredContentSize;
-(double)maximumPopoverHeight;
-(void)startPrinterBrowser;
-(void)updateSearching;
-(id)printerAtIndexPath:(id)arg1 ;
-(void)addPrinter:(id)arg1 moreComing:(BOOL)arg2 ;
-(void)removePrinter:(id)arg1 moreGoing:(BOOL)arg2 ;
-(void)selectPrinter:(id)arg1 ;
@end

