/*
* Generated on Thursday, January 14, 2021 at 2:22:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <UIKitCore/UITableViewController.h>
#import <libobjc.A.dylib/PXSettingsConfigurationsSourceObserver.h>

@class PXSettings, PXSettingsConfigurationsSource, UITextField, UIAlertAction;

@interface PXSettingsConfigurationsViewController : UITableViewController <PXSettingsConfigurationsSourceObserver> {

	BOOL _areAllActionsAvailable;
	PXSettings* _settings;
	PXSettingsConfigurationsSource* _source;
	UITextField* _promptTextField;
	UIAlertAction* _promptConfirmAction;

}

@property (nonatomic,readonly) PXSettingsConfigurationsSource * source;              //@synthesize source=_source - In the implementation block
@property (assign,nonatomic) BOOL areAllActionsAvailable;                            //@synthesize areAllActionsAvailable=_areAllActionsAvailable - In the implementation block
@property (nonatomic,retain) UITextField * promptTextField;                          //@synthesize promptTextField=_promptTextField - In the implementation block
@property (nonatomic,retain) UIAlertAction * promptConfirmAction;                    //@synthesize promptConfirmAction=_promptConfirmAction - In the implementation block
@property (nonatomic,readonly) PXSettings * settings;                                //@synthesize settings=_settings - In the implementation block
-(id)initWithSettings:(id)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)initWithStyle:(long long)arg1 ;
-(void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)viewDidLoad;
-(PXSettings *)settings;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)settingsConfigurationSource:(id)arg1 performChanges:(/*^block*/id)arg2 ;
-(void)settingsConfigurationSource:(id)arg1 didChange:(id)arg2 ;
-(void)_handleDone:(id)arg1 ;
-(void)_updateAvailableActions;
-(id)_titleForSettings:(id)arg1 ;
-(void)setAreAllActionsAvailable:(BOOL)arg1 ;
-(void)_promptNameWithAlertTitle:(id)arg1 message:(id)arg2 proposedNamed:(id)arg3 confirmationButtonTitle:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)_promptedNameDidChange:(id)arg1 ;
-(id)_untitledName;
-(void)_shareConfigurations:(id)arg1 ;
-(BOOL)areAllActionsAvailable;
-(UITextField *)promptTextField;
-(void)setPromptTextField:(UITextField *)arg1 ;
-(UIAlertAction *)promptConfirmAction;
-(void)setPromptConfirmAction:(UIAlertAction *)arg1 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(PXSettingsConfigurationsSource *)source;
@end

