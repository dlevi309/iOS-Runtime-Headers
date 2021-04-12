/*
* Generated on Thursday, January 14, 2021 at 2:28:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <UIKitCore/UITableViewController.h>
#import <UIKit/UISearchResultsUpdating.h>

@protocol WFMapSearchTableViewControllerDelegate;
@class NSArray, NSString;

@interface WFMapSearchTableViewController : UITableViewController <UISearchResultsUpdating> {

	id<WFMapSearchTableViewControllerDelegate> _delegate;
	NSArray* _mapItems;

}

@property (nonatomic,retain) NSArray * mapItems;                                                      //@synthesize mapItems=_mapItems - In the implementation block
@property (assign,nonatomic,__weak) id<WFMapSearchTableViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updateSearchResultsForSearchController:(id)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id<WFMapSearchTableViewControllerDelegate>)delegate;
-(NSArray *)mapItems;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)setDelegate:(id<WFMapSearchTableViewControllerDelegate>)arg1 ;
-(void)viewDidLoad;
-(void)setMapItems:(NSArray *)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
@end

