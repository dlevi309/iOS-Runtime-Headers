/*
* Generated on Monday, March 1, 2021 at 2:30:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/

#import <Preferences/PSListController.h>

@class PSSpecifier;

@interface PSListItemsController : PSListController {

	long long _rowToSelect;
	BOOL _deferItemSelection;
	BOOL _restrictionList;
	PSSpecifier* _lastSelectedSpecifier;
	id _retainedTarget;

}
-(void)suspend;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)specifiers;
-(void)didLock;
-(void)prepareSpecifiersMetadata;
-(void)scrollToSelectedCell;
-(void)setValueForSpecifier:(id)arg1 defaultValue:(id)arg2 ;
-(void)setRowToSelect;
-(void)listItemSelected:(id)arg1 ;
-(void)_addStaticText:(id)arg1 ;
-(id)itemsFromParent;
-(id)itemsFromDataSource;
-(BOOL)isRestrictionList;
-(void)setIsRestrictionList:(BOOL)arg1 ;
@end

