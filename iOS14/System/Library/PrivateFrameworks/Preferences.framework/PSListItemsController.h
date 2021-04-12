/*
* Generated on Thursday, January 14, 2021 at 2:20:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)specifiers;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)didLock;
-(void)scrollToSelectedCell;
-(void)setValueForSpecifier:(id)arg1 defaultValue:(id)arg2 ;
-(void)setRowToSelect;
-(void)listItemSelected:(id)arg1 ;
-(void)_addStaticText:(id)arg1 ;
-(id)itemsFromParent;
-(id)itemsFromDataSource;
-(BOOL)isRestrictionList;
-(void)setIsRestrictionList:(BOOL)arg1 ;
-(void)willEnterForeground;
-(void)viewDidLoad;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)prepareSpecifiersMetadata;
-(void)dealloc;
@end

