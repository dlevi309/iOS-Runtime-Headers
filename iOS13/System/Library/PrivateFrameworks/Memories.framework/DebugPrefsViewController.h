/*
* Generated on Monday, March 1, 2021 at 2:35:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <UIKitCore/UITableViewController.h>

@class NSArray, NSMutableDictionary;

@interface DebugPrefsViewController : UITableViewController {

	NSArray* _sections;
	NSMutableDictionary* _extraObjects;

}

@property (nonatomic,retain) NSMutableDictionary * extraObjects;              //@synthesize extraObjects=_extraObjects - In the implementation block
@property (nonatomic,retain) NSArray * sections;                              //@synthesize sections=_sections - In the implementation block
+(BOOL)hasDebugPrefs;
+(BOOL)isDebugPrefs:(id)arg1 ;
-(id)init;
-(void)viewWillAppear:(BOOL)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(NSArray *)sections;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(void)setSections:(NSArray *)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)presentOverViewController:(id)arg1 ;
-(void)debugPrefsStop:(id)arg1 ;
-(NSMutableDictionary *)extraObjects;
-(void)restoreDefaultsInSections:(id)arg1 ;
-(void)restoreDefaults:(id)arg1 ;
-(void)loadDebugMenu;
-(void)switchChanged:(id)arg1 ;
-(void)setExtraObjects:(NSMutableDictionary *)arg1 ;
-(void)addAccessory:(id)arg1 forMenuItem:(id)arg2 ;
@end

