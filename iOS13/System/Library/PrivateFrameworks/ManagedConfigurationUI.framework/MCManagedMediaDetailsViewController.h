/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
*/

#import <UIKitCore/UITableViewController.h>
#import <libobjc.A.dylib/PSStateRestoration.h>

@class MCUIProfile, MCBook, NSString;

@interface MCManagedMediaDetailsViewController : UITableViewController <PSStateRestoration> {

	MCUIProfile* _UIProfile;
	MCBook* _managedBook;

}

@property (nonatomic,retain) MCUIProfile * UIProfile;               //@synthesize UIProfile=_UIProfile - In the implementation block
@property (nonatomic,retain) MCBook * managedBook;                  //@synthesize managedBook=_managedBook - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)_setup;
-(id)initWithStyle:(long long)arg1 ;
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
-(void)setManagedBook:(MCBook *)arg1 ;
-(void)_profileChanged:(id)arg1 ;
-(MCBook *)managedBook;
-(id)initWithUIProfile:(id)arg1 managedBook:(id)arg2 ;
@end

