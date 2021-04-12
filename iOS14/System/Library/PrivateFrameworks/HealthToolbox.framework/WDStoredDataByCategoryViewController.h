/*
* Generated on Thursday, January 14, 2021 at 2:27:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setProfile:(WDProfile *)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)init;
-(void)setBodyFont:(UIFont *)arg1 ;
-(id)initWithStyle:(long long)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)setQueryReturned:(BOOL)arg1 ;
-(BOOL)queryReturned;
-(WDProfile *)profile;
-(void)viewDidLoad;
-(UIFont *)bodyFont;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
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

