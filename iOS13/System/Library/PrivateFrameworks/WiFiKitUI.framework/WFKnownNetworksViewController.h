/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
*/

#import <UIKitCore/UITableViewController.h>

@protocol WFKnownNetworksViewControllerDelegate;
@class NSMutableArray;

@interface WFKnownNetworksViewController : UITableViewController {

	id<WFKnownNetworksViewControllerDelegate> _knownNetworksDelegate;
	NSMutableArray* _knownNetworksArray;

}

@property (nonatomic,retain) NSMutableArray * knownNetworksArray;                                                 //@synthesize knownNetworksArray=_knownNetworksArray - In the implementation block
@property (assign,nonatomic,__weak) id<WFKnownNetworksViewControllerDelegate> knownNetworksDelegate;              //@synthesize knownNetworksDelegate=_knownNetworksDelegate - In the implementation block
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(BOOL)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2 ;
-(void)setKnownNetworksDelegate:(id<WFKnownNetworksViewControllerDelegate>)arg1 ;
-(id<WFKnownNetworksViewControllerDelegate>)knownNetworksDelegate;
-(void)setKnownNetworksArray:(NSMutableArray *)arg1 ;
-(NSMutableArray *)knownNetworksArray;
@end

