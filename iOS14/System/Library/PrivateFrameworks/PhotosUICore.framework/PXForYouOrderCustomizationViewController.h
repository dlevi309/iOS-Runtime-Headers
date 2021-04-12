/*
* Generated on Thursday, January 14, 2021 at 2:22:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <UIKitCore/UITableViewController.h>

@class PXForYouGadgetRankStorage;

@interface PXForYouOrderCustomizationViewController : UITableViewController {

	PXForYouGadgetRankStorage* _storage;

}
-(id)initWithStorage:(id)arg1 ;
-(BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)_handleDone;
-(long long)_rankForItem:(long long)arg1 ;
-(id)_currentGadgetTypesInOrderOfRank;
-(void)_persistRanksOfGadgetTypes:(id)arg1 ;
-(void)_fillDefaultRanks;
-(void)viewDidLoad;
-(void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
@end

