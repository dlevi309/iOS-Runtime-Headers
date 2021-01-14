/*
* Generated on Thursday, January 14, 2021 at 2:25:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)viewWillLayoutSubviews;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(SBSwitcherModifierTimelineEntry *)entry;
-(void)setEntry:(SBSwitcherModifierTimelineEntry *)arg1 ;
-(void)viewDidLoad;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(long long)_numberOfModifiersInStackSnapshot:(id)arg1 ;
-(id)_stackSnapshotAtIndex:(long long)arg1 ;
@end

