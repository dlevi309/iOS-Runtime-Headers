/*
* Generated on Thursday, January 14, 2021 at 2:28:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_updateTitle;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(id)initWithSettings:(id)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(BOOL)_canShowWhileLocked;
-(PTSettings *)settings;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)module:(id)arg1 didInsertRows:(id)arg2 deleteRows:(id)arg3 ;
-(void)moduleDidReload:(id)arg1 ;
-(void)module:(id)arg1 didInsertSections:(id)arg2 deleteSections:(id)arg3 ;
-(id)_initWithModule:(id)arg1 presentingRow:(id)arg2 ;
-(id)initWithSettings:(id)arg1 presentingRow:(id)arg2 ;
-(void)_reloadWithModule:(id)arg1 ;
-(void)showActionsForRowTableViewCell:(id)arg1 ;
@end

