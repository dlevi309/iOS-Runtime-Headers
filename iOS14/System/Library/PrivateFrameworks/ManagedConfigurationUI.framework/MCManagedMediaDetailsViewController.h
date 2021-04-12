/*
* Generated on Thursday, January 14, 2021 at 2:26:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
*/

#import <ManagedConfigurationUI/MCUITableViewController.h>

@class MCUIProfile, MCBook;

@interface MCManagedMediaDetailsViewController : MCUITableViewController {

	MCUIProfile* _UIProfile;
	MCBook* _managedBook;

}

@property (nonatomic,retain) MCUIProfile * UIProfile;              //@synthesize UIProfile=_UIProfile - In the implementation block
@property (nonatomic,retain) MCBook * managedBook;                 //@synthesize managedBook=_managedBook - In the implementation block
-(void)_setup;
-(id)initWithStyle:(long long)arg1 ;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(MCUIProfile *)UIProfile;
-(void)setUIProfile:(MCUIProfile *)arg1 ;
-(void)setManagedBook:(MCBook *)arg1 ;
-(void)_profileChanged:(id)arg1 ;
-(MCBook *)managedBook;
-(id)initWithUIProfile:(id)arg1 managedBook:(id)arg2 ;
@end

