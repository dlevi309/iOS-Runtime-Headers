/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
*/

#import <UIKitCore/UITableViewController.h>
#import <libobjc.A.dylib/PSStateRestoration.h>

@class MCUIProfile, LSApplicationProxy, NSString;

@interface MCManagedAppDetailsViewController : UITableViewController <PSStateRestoration> {

	MCUIProfile* _UIProfile;
	LSApplicationProxy* _managedAppProxy;

}

@property (nonatomic,retain) MCUIProfile * UIProfile;                           //@synthesize UIProfile=_UIProfile - In the implementation block
@property (nonatomic,retain) LSApplicationProxy * managedAppProxy;              //@synthesize managedAppProxy=_managedAppProxy - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)_setup;
-(void)viewDidLoad;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(void)didReceiveMemoryWarning;
-(BOOL)canBeShownFromSuspendedState;
-(void)contentSizeCategoryDidChangeNotification:(id)arg1 ;
-(MCUIProfile *)UIProfile;
-(void)setUIProfile:(MCUIProfile *)arg1 ;
-(void)_profileChanged:(id)arg1 ;
-(LSApplicationProxy *)managedAppProxy;
-(id)initWithUIProfile:(id)arg1 managedApp:(id)arg2 ;
-(id)initWithUIProfile:(id)arg1 managedAppID:(id)arg2 ;
-(void)setManagedAppProxy:(LSApplicationProxy *)arg1 ;
@end

