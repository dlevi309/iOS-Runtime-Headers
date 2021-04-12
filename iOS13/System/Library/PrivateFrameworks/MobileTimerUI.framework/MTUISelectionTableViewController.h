/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileTimerUI.framework/MobileTimerUI
*/

#import <UIKitCore/UITableViewController.h>

@protocol MTUISelectionTableViewControllerDelegate;
@class NSArray, NSIndexPath;

@interface MTUISelectionTableViewController : UITableViewController {

	BOOL _allowsNone;
	NSArray* _selectionData;
	id<MTUISelectionTableViewControllerDelegate> _delegate;
	NSIndexPath* _parentIndexPath;

}

@property (nonatomic,retain) NSArray * selectionData;                                                   //@synthesize selectionData=_selectionData - In the implementation block
@property (assign,nonatomic,__weak) id<MTUISelectionTableViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSIndexPath * parentIndexPath;                                             //@synthesize parentIndexPath=_parentIndexPath - In the implementation block
@property (assign,nonatomic) BOOL allowsNone;                                                           //@synthesize allowsNone=_allowsNone - In the implementation block
-(id<MTUISelectionTableViewControllerDelegate>)delegate;
-(void)setDelegate:(id<MTUISelectionTableViewControllerDelegate>)arg1 ;
-(void)viewDidLoad;
-(BOOL)_canShowWhileLocked;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)setSelectionData:(NSArray *)arg1 ;
-(void)setParentIndexPath:(NSIndexPath *)arg1 ;
-(void)setAllowsNone:(BOOL)arg1 ;
-(NSArray *)selectionData;
-(BOOL)allowsNone;
-(void)deselectRowsExcluding:(unsigned long long)arg1 ;
-(NSIndexPath *)parentIndexPath;
-(id)initWithStyle:(long long)arg1 title:(id)arg2 selectionData:(id)arg3 parentIndexPath:(id)arg4 allowsMultiple:(BOOL)arg5 allowsNone:(BOOL)arg6 delegate:(id)arg7 ;
@end

