/*
* Generated on Thursday, January 14, 2021 at 2:28:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(BOOL)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2 ;
-(void)viewDidLoad;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2 ;
-(void)setKnownNetworksDelegate:(id<WFKnownNetworksViewControllerDelegate>)arg1 ;
-(id<WFKnownNetworksViewControllerDelegate>)knownNetworksDelegate;
-(void)setKnownNetworksArray:(NSMutableArray *)arg1 ;
-(NSMutableArray *)knownNetworksArray;
@end

