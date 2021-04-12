/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@class UITableView, _SBModifierTimelineModifierDetailViewController, _SBModifierTimelineTextViewController, SBSwitcherModifierTimelineEntry, NSString;

@interface _SBModifierTimelineDetailViewController : UIViewController <UITableViewDelegate, UITableViewDataSource> {

	UITableView* _tableView;
	_SBModifierTimelineModifierDetailViewController* _modifierDetailViewController;
	_SBModifierTimelineTextViewController* _actionDetailViewController;
	SBSwitcherModifierTimelineEntry* _entry;

}

@property (nonatomic,retain) SBSwitcherModifierTimelineEntry * entry;              //@synthesize entry=_entry - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_done;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(SBSwitcherModifierTimelineEntry *)entry;
-(void)setEntry:(SBSwitcherModifierTimelineEntry *)arg1 ;
-(long long)_numberOfModifiersInStackSnapshot:(id)arg1 ;
-(id)_stackSnapshotAtIndex:(long long)arg1 ;
@end

