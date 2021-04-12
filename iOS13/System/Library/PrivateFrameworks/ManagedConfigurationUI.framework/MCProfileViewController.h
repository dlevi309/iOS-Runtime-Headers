/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
*/

#import <UIKitCore/UITableViewController.h>
#import <libobjc.A.dylib/PSStateRestoration.h>

@protocol MCProfileViewControllerDelegate;
@class MCUIProfile, NSString;

@interface MCProfileViewController : UITableViewController <PSStateRestoration> {

	BOOL _installingFromPurgatory;
	BOOL _installComplete;
	BOOL _profileOffersReenroll;
	BOOL _profileRemovable;
	id<MCProfileViewControllerDelegate> _profileViewControllerDelegate;
	long long _profileViewMode;
	MCUIProfile* _UIProfile;

}

@property (assign,nonatomic) BOOL profileOffersReenroll;                                                            //@synthesize profileOffersReenroll=_profileOffersReenroll - In the implementation block
@property (assign,nonatomic) BOOL profileRemovable;                                                                 //@synthesize profileRemovable=_profileRemovable - In the implementation block
@property (nonatomic,retain) MCUIProfile * UIProfile;                                                               //@synthesize UIProfile=_UIProfile - In the implementation block
@property (assign,nonatomic,__weak) id<MCProfileViewControllerDelegate> profileViewControllerDelegate;              //@synthesize profileViewControllerDelegate=_profileViewControllerDelegate - In the implementation block
@property (assign,nonatomic) long long profileViewMode;                                                             //@synthesize profileViewMode=_profileViewMode - In the implementation block
@property (assign,nonatomic) BOOL installingFromPurgatory;                                                          //@synthesize installingFromPurgatory=_installingFromPurgatory - In the implementation block
@property (assign,nonatomic) BOOL installComplete;                                                                  //@synthesize installComplete=_installComplete - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)setProfile:(id)arg1 ;
-(void)_setup;
-(id)initWithStyle:(long long)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(BOOL)canBeShownFromSuspendedState;
-(void)contentSizeCategoryDidChangeNotification:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 profile:(id)arg2 profileViewMode:(long long)arg3 ;
-(void)setInstallingFromPurgatory:(BOOL)arg1 ;
-(void)setProfileViewControllerDelegate:(id<MCProfileViewControllerDelegate>)arg1 ;
-(void)setInstallComplete:(BOOL)arg1 ;
-(MCUIProfile *)UIProfile;
-(BOOL)installingFromPurgatory;
-(void)setUIProfile:(MCUIProfile *)arg1 ;
-(void)_profileChanged:(id)arg1 ;
-(void)_removeProfile;
-(void)_updateProfile;
-(void)setProfileOffersReenroll:(BOOL)arg1 ;
-(void)setProfileRemovable:(BOOL)arg1 ;
-(BOOL)profileOffersReenroll;
-(long long)profileViewMode;
-(BOOL)profileRemovable;
-(BOOL)installComplete;
-(id<MCProfileViewControllerDelegate>)profileViewControllerDelegate;
-(BOOL)_shouldShowUpdateButton;
-(BOOL)_shouldShowRemoveButton;
-(void)setProfileViewMode:(long long)arg1 ;
@end

