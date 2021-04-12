/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/

#import <HealthToolbox/WDSourceStoredDataViewController.h>

@class UILabel;

@interface WDWatchStoredDataViewController : WDSourceStoredDataViewController {

	UILabel* _messageLabel;
	BOOL _watchPaired;

}

@property (assign) BOOL watchPaired;              //@synthesize watchPaired=_watchPaired - In the implementation block
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)_updateFont;
-(void)updateTableHeaderViewForUnpairedWatch;
-(void)handlePairedDevicesSnapshot:(id)arg1 ;
-(void)addUnpairedWatchHeaderView;
-(BOOL)watchPaired;
-(void)setWatchPaired:(BOOL)arg1 ;
@end

