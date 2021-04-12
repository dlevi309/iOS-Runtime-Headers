/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/

#import <HealthUI/HKTableViewController.h>

@class WDProfile, NSArray, UIFont, NSPredicate, NSString;

@interface WDStoredDataByCategoryViewController : HKTableViewController {

	BOOL _queryReturned;
	WDProfile* _profile;
	NSArray* _capturedSampleTypes;
	UIFont* _bodyFont;
	NSArray* _savedCategories;

}

@property (nonatomic,retain) UIFont * bodyFont;                                 //@synthesize bodyFont=_bodyFont - In the implementation block
@property (nonatomic,retain) NSArray * capturedSampleTypes;                     //@synthesize capturedSampleTypes=_capturedSampleTypes - In the implementation block
@property (retain) NSArray * savedCategories;                                   //@synthesize savedCategories=_savedCategories - In the implementation block
@property (assign,nonatomic) BOOL queryReturned;                                //@synthesize queryReturned=_queryReturned - In the implementation block
@property (nonatomic,retain) WDProfile * profile;                               //@synthesize profile=_profile - In the implementation block
@property (nonatomic,readonly) NSPredicate * storedDataPredicate; 
@property (nonatomic,readonly) NSString * storedDataDisplayName; 
@property (nonatomic,readonly) BOOL shouldShowDeleteAllDataButton; 
-(id)init;
-(WDProfile *)profile;
-(void)setProfile:(WDProfile *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 ;
-(void)viewDidLoad;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(UIFont *)bodyFont;
-(void)setQueryReturned:(BOOL)arg1 ;
-(BOOL)queryReturned;
-(void)setBodyFont:(UIFont *)arg1 ;
-(void)_displayTypeStringsChanged:(id)arg1 ;
-(NSArray *)capturedSampleTypes;
-(NSPredicate *)storedDataPredicate;
-(NSString *)storedDataDisplayName;
-(BOOL)shouldShowDeleteAllDataButton;
-(void)deleteAllStoredData;
-(void)handleSamplesQueryResults:(id)arg1 ;
-(void)setCapturedSampleTypes:(NSArray *)arg1 ;
-(id)reduceCategoriesForCapturedSampleTypes:(id)arg1 ;
-(void)setSavedCategories:(NSArray *)arg1 ;
-(NSArray *)savedCategories;
-(void)selectSourceStoredDataTableViewCell:(id)arg1 ;
-(void)presentDeleteConfirmation;
@end

