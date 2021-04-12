/*
* Generated on Thursday, January 14, 2021 at 2:26:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
*/

#import <ManagedConfigurationUI/MCUITableViewController.h>

@protocol MCInstallationWarningDelegate;
@class NSArray;

@interface MCInstallationWarningViewController : MCUITableViewController {

	BOOL _isMDMInstall;
	NSArray* _warnings;
	id<MCInstallationWarningDelegate> _warningDelegate;

}

@property (assign,nonatomic) BOOL isMDMInstall;                                                     //@synthesize isMDMInstall=_isMDMInstall - In the implementation block
@property (nonatomic,retain) NSArray * warnings;                                                    //@synthesize warnings=_warnings - In the implementation block
@property (assign,nonatomic,__weak) id<MCInstallationWarningDelegate> warningDelegate;              //@synthesize warningDelegate=_warningDelegate - In the implementation block
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)_setup;
-(void)setWarnings:(NSArray *)arg1 ;
-(id)initWithStyle:(long long)arg1 ;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(NSArray *)warnings;
-(void)_cancelInstallProfile;
-(void)_confirmInstallProfileIfNeeded;
-(void)_installProfile;
-(id<MCInstallationWarningDelegate>)warningDelegate;
-(BOOL)isMDMInstall;
-(void)setIsMDMInstall:(BOOL)arg1 ;
-(void)setWarningDelegate:(id<MCInstallationWarningDelegate>)arg1 ;
@end

