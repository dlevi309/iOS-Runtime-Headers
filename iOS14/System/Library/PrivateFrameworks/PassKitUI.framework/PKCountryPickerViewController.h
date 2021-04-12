/*
* Generated on Thursday, January 14, 2021 at 2:24:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <UIKitCore/UITableViewController.h>

@protocol PKCountryPickerViewControllerDelegate;
@class UILocalizedIndexedCollation, NSArray;

@interface PKCountryPickerViewController : UITableViewController {

	id<PKCountryPickerViewControllerDelegate> _delegate;
	UILocalizedIndexedCollation* _collation;
	NSArray* _countries;
	NSArray* _sections;
	long long _style;

}

@property (nonatomic,retain) UILocalizedIndexedCollation * collation;                                //@synthesize collation=_collation - In the implementation block
@property (nonatomic,retain) NSArray * countries;                                                    //@synthesize countries=_countries - In the implementation block
@property (nonatomic,retain) NSArray * sections;                                                     //@synthesize sections=_sections - In the implementation block
@property (assign,nonatomic) long long style;                                                        //@synthesize style=_style - In the implementation block
@property (assign,nonatomic,__weak) id<PKCountryPickerViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setSections:(NSArray *)arg1 ;
-(UILocalizedIndexedCollation *)collation;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(NSArray *)countries;
-(id<PKCountryPickerViewControllerDelegate>)delegate;
-(id)initWithStyle:(long long)arg1 ;
-(NSArray *)sections;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)setCountries:(NSArray *)arg1 ;
-(void)_loadCountryCodes;
-(void)_configureSections;
-(void)setDelegate:(id<PKCountryPickerViewControllerDelegate>)arg1 ;
-(void)setCollation:(UILocalizedIndexedCollation *)arg1 ;
-(void)viewDidLoad;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)setStyle:(long long)arg1 ;
-(long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)sectionIndexTitlesForTableView:(id)arg1 ;
-(long long)style;
@end

