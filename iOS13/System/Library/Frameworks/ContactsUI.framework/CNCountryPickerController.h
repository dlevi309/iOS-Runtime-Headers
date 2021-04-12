/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <UIKitCore/UINavigationController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class NSString, UITableViewController, UILocalizedIndexedCollation, NSArray, NSIndexPath;

@interface CNCountryPickerController : UINavigationController <UITableViewDataSource, UITableViewDelegate> {

	NSString* _selectedCountryCode;
	UITableViewController* _tableViewController;
	UILocalizedIndexedCollation* _collation;
	NSArray* _countries;
	NSArray* _sections;
	NSIndexPath* _selectedIndexPath;

}

@property (nonatomic,retain) UITableViewController * tableViewController;                        //@synthesize tableViewController=_tableViewController - In the implementation block
@property (nonatomic,retain) UILocalizedIndexedCollation * collation;                            //@synthesize collation=_collation - In the implementation block
@property (nonatomic,copy) NSArray * countries;                                                  //@synthesize countries=_countries - In the implementation block
@property (nonatomic,copy) NSArray * sections;                                                   //@synthesize sections=_sections - In the implementation block
@property (nonatomic,retain) NSIndexPath * selectedIndexPath;                                    //@synthesize selectedIndexPath=_selectedIndexPath - In the implementation block
@property (nonatomic,copy) NSString * selectedCountryCode;                                       //@synthesize selectedCountryCode=_selectedCountryCode - In the implementation block
@property (assign,nonatomic,__weak) id<CNCountryPickerControllerDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(NSArray *)sections;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)sectionIndexTitlesForTableView:(id)arg1 ;
-(long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3 ;
-(void)setSections:(NSArray *)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)windowDidRotate:(id)arg1 ;
-(void)setSelectedIndexPath:(NSIndexPath *)arg1 ;
-(NSIndexPath *)selectedIndexPath;
-(UITableViewController *)tableViewController;
-(void)cancelPicker:(id)arg1 ;
-(void)setTableViewController:(UITableViewController *)arg1 ;
-(void)_loadCountryCodes;
-(void)_configureSections;
-(NSString *)selectedCountryCode;
-(void)setSelectedCountryCode:(NSString *)arg1 ;
-(UILocalizedIndexedCollation *)collation;
-(void)setCollation:(UILocalizedIndexedCollation *)arg1 ;
-(NSArray *)countries;
-(void)setCountries:(NSArray *)arg1 ;
@end

