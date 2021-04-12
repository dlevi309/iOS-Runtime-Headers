/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <UIKitCore/UITableViewController.h>
#import <UIKit/UISearchResultsUpdating.h>
#import <UIKit/UISearchControllerDelegate.h>

@protocol WFDynamicResolveViewControllerDelegate;
@class WFDynamicResolveParameter, NSArray, WFDebouncer, NSString;

@interface WFDynamicResolveViewController : UITableViewController <UISearchResultsUpdating, UISearchControllerDelegate> {

	WFDynamicResolveParameter* _parameter;
	id<WFDynamicResolveViewControllerDelegate> _delegate;
	NSArray* _results;
	WFDebouncer* _inputDebouncer;

}

@property (nonatomic,retain) NSArray * results;                                                       //@synthesize results=_results - In the implementation block
@property (nonatomic,retain) WFDebouncer * inputDebouncer;                                            //@synthesize inputDebouncer=_inputDebouncer - In the implementation block
@property (nonatomic,readonly) WFDynamicResolveParameter * parameter;                                 //@synthesize parameter=_parameter - In the implementation block
@property (assign,nonatomic,__weak) id<WFDynamicResolveViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<WFDynamicResolveViewControllerDelegate>)delegate;
-(void)setDelegate:(id<WFDynamicResolveViewControllerDelegate>)arg1 ;
-(void)failWithError:(id)arg1 ;
-(NSArray *)results;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)cancelButtonPressed:(id)arg1 ;
-(void)didPresentSearchController:(id)arg1 ;
-(void)willDismissSearchController:(id)arg1 ;
-(void)updateSearchResultsForSearchController:(id)arg1 ;
-(void)setResults:(NSArray *)arg1 ;
-(WFDynamicResolveParameter *)parameter;
-(id)initWithParameter:(id)arg1 delegate:(id)arg2 ;
-(void)updateSearchResultsFromCurrentUserInput;
-(void)succeedWithResolvedObject:(id)arg1 ;
-(WFDebouncer *)inputDebouncer;
-(void)setInputDebouncer:(WFDebouncer *)arg1 ;
@end

