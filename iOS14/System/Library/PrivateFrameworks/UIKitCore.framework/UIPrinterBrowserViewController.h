/*
* Generated on Thursday, January 14, 2021 at 2:20:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)updateViewConstraints;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)printerInfoButtonTapped:(id)arg1 ;
-(void)stopPrinterBrowser;
-(void)didChangePreferredContentSize;
-(double)maximumPopoverHeight;
-(void)updateSearching;
-(void)startPrinterBrowser;
-(id)printerAtIndexPath:(id)arg1 ;
-(void)addPrinter:(id)arg1 moreComing:(BOOL)arg2 ;
-(void)removePrinter:(id)arg1 moreGoing:(BOOL)arg2 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)willEnterForeground;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)loadView;
-(void)showCancelButton;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)initWithOwnerViewController:(id)arg1 ;
-(void)setMaximumPopoverHeight:(double)arg1 ;
-(void)adjustPopoverSize;
-(void)selectPrinter:(id)arg1 ;
-(void)dealloc;
@end

