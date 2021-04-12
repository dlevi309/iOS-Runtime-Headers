/*
* Generated on Thursday, January 14, 2021 at 2:26:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
*/

#import <ManagedConfigurationUI/MCUITableViewController.h>

@protocol MCInstallationConsentDelegate;
@class MCProfile;

@interface MCInstallationConsentViewController : MCUITableViewController {

	BOOL _showInstall;
	MCProfile* _profile;
	id<MCInstallationConsentDelegate> _consentDelegate;

}

@property (nonatomic,retain) MCProfile * profile;                                                   //@synthesize profile=_profile - In the implementation block
@property (assign,nonatomic,__weak) id<MCInstallationConsentDelegate> consentDelegate;              //@synthesize consentDelegate=_consentDelegate - In the implementation block
@property (assign,nonatomic) BOOL showInstall;                                                      //@synthesize showInstall=_showInstall - In the implementation block
-(void)setProfile:(MCProfile *)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)_setup;
-(id)initWithStyle:(long long)arg1 ;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(MCProfile *)profile;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id<MCInstallationConsentDelegate>)consentDelegate;
-(void)setConsentDelegate:(id<MCInstallationConsentDelegate>)arg1 ;
-(void)_cancelInstallProfile;
-(void)_installProfile;
-(void)setShowInstall:(BOOL)arg1 ;
-(BOOL)showInstall;
@end

