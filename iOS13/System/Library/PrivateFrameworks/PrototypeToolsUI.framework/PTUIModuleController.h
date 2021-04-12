/*
* Generated on Monday, March 1, 2021 at 2:35:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PrototypeToolsUI.framework/PrototypeToolsUI
*/

#import <UIKitCore/UITableViewController.h>
#import <libobjc.A.dylib/PTModuleObserver.h>

@class PTModule, NSString, PTSettings;

@interface PTUIModuleController : UITableViewController <PTModuleObserver> {

	PTModule* _module;
	NSString* _title;
	NSString* _rowTitle;

}

@property (nonatomic,readonly) PTSettings * settings; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithSettings:(id)arg1 ;
-(PTSettings *)settings;
-(void)viewDidLayoutSubviews;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2 ;
-(void)_updateTitle;
-(void)module:(id)arg1 didInsertRows:(id)arg2 deleteRows:(id)arg3 ;
-(void)moduleDidReload:(id)arg1 ;
-(void)module:(id)arg1 didInsertSections:(id)arg2 deleteSections:(id)arg3 ;
-(id)_initWithModule:(id)arg1 presentingRow:(id)arg2 ;
-(id)initWithSettings:(id)arg1 presentingRow:(id)arg2 ;
-(void)_reloadWithModule:(id)arg1 ;
-(void)showActionsForRowTableViewCell:(id)arg1 ;
@end

