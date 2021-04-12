/*
* Generated on Thursday, January 14, 2021 at 2:26:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
*/

#import <ManagedConfigurationUI/MCUITableViewController.h>

@class MCUIProfile, LSApplicationProxy;

@interface MCManagedAppDetailsViewController : MCUITableViewController {

	MCUIProfile* _UIProfile;
	LSApplicationProxy* _managedAppProxy;

}

@property (nonatomic,retain) MCUIProfile * UIProfile;                           //@synthesize UIProfile=_UIProfile - In the implementation block
@property (nonatomic,retain) LSApplicationProxy * managedAppProxy;              //@synthesize managedAppProxy=_managedAppProxy - In the implementation block
-(void)_setup;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(MCUIProfile *)UIProfile;
-(void)setUIProfile:(MCUIProfile *)arg1 ;
-(void)_profileChanged:(id)arg1 ;
-(LSApplicationProxy *)managedAppProxy;
-(id)initWithUIProfile:(id)arg1 managedApp:(id)arg2 ;
-(id)initWithUIProfile:(id)arg1 managedAppID:(id)arg2 ;
-(void)setManagedAppProxy:(LSApplicationProxy *)arg1 ;
@end

