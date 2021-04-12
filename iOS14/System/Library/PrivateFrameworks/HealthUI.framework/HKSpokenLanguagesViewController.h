/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <UIKitCore/UITableViewController.h>
#import <UIKit/UISearchResultsUpdating.h>

@protocol HKSpokenLanguagesViewControllerDelegate;
@class NSArray, HKSpokenLanguage, HKSpokenLanguageDiffableDataSource, UISearchController, NSString;

@interface HKSpokenLanguagesViewController : UITableViewController <UISearchResultsUpdating> {

	id<HKSpokenLanguagesViewControllerDelegate> _pickerDelegate;
	NSArray* _mostLikelyLanguages;
	NSArray* _allSpokenLanguages;
	HKSpokenLanguage* _currentLanguage;
	HKSpokenLanguageDiffableDataSource* _dataSource;
	UISearchController* _searchController;

}

@property (nonatomic,retain) NSArray * mostLikelyLanguages;                                                  //@synthesize mostLikelyLanguages=_mostLikelyLanguages - In the implementation block
@property (nonatomic,retain) NSArray * allSpokenLanguages;                                                   //@synthesize allSpokenLanguages=_allSpokenLanguages - In the implementation block
@property (nonatomic,retain) HKSpokenLanguage * currentLanguage;                                             //@synthesize currentLanguage=_currentLanguage - In the implementation block
@property (nonatomic,retain) HKSpokenLanguageDiffableDataSource * dataSource;                                //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) UISearchController * searchController;                                          //@synthesize searchController=_searchController - In the implementation block
@property (assign,nonatomic,__weak) id<HKSpokenLanguagesViewControllerDelegate> pickerDelegate;              //@synthesize pickerDelegate=_pickerDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultCheckmarkImage;
-(void)updateSearchResultsForSearchController:(id)arg1 ;
-(void)setSearchController:(UISearchController *)arg1 ;
-(UISearchController *)searchController;
-(void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(HKSpokenLanguageDiffableDataSource *)dataSource;
-(void)configureDataSource;
-(id<HKSpokenLanguagesViewControllerDelegate>)pickerDelegate;
-(void)setPickerDelegate:(id<HKSpokenLanguagesViewControllerDelegate>)arg1 ;
-(void)setDataSource:(HKSpokenLanguageDiffableDataSource *)arg1 ;
-(void)cancelAction;
-(void)viewDidLoad;
-(void)doneAction;
-(void)configureCancelButton;
-(void)configureSearchController;
-(id)snapshotForCurrentState;
-(void)handleSearchSelection;
-(void)setConfirmButtonEnabledIfNeeded;
-(id)snapshotForSearchResults:(id)arg1 ;
-(id)initWithCurrentLanguage:(id)arg1 preferredLanguages:(id)arg2 andAllSpokenLanguages:(id)arg3 ;
-(NSArray *)mostLikelyLanguages;
-(void)setMostLikelyLanguages:(NSArray *)arg1 ;
-(NSArray *)allSpokenLanguages;
-(void)setAllSpokenLanguages:(NSArray *)arg1 ;
-(HKSpokenLanguage *)currentLanguage;
-(void)setCurrentLanguage:(HKSpokenLanguage *)arg1 ;
@end

