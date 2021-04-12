/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
*/

#import <UIKitCore/UITableViewController.h>
#import <libobjc.A.dylib/PSStateRestoration.h>

@protocol MCInstallationWarningDelegate;
@class NSArray, NSString;

@interface MCInstallationWarningViewController : UITableViewController <PSStateRestoration> {

	BOOL _isMDMInstall;
	NSArray* _warnings;
	id<MCInstallationWarningDelegate> _warningDelegate;

}

@property (assign,nonatomic) BOOL isMDMInstall;                                                     //@synthesize isMDMInstall=_isMDMInstall - In the implementation block
@property (nonatomic,retain) NSArray * warnings;                                                    //@synthesize warnings=_warnings - In the implementation block
@property (assign,nonatomic,__weak) id<MCInstallationWarningDelegate> warningDelegate;              //@synthesize warningDelegate=_warningDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_setup;
-(id)initWithStyle:(long long)arg1 ;
-(void)viewDidLoad;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(void)didReceiveMemoryWarning;
-(NSArray *)warnings;
-(void)setWarnings:(NSArray *)arg1 ;
-(BOOL)canBeShownFromSuspendedState;
-(void)_installProfile;
-(void)setIsMDMInstall:(BOOL)arg1 ;
-(void)setWarningDelegate:(id<MCInstallationWarningDelegate>)arg1 ;
-(void)_cancelInstallProfile;
-(void)_confirmInstallProfileIfNeeded;
-(id<MCInstallationWarningDelegate>)warningDelegate;
-(BOOL)isMDMInstall;
@end

