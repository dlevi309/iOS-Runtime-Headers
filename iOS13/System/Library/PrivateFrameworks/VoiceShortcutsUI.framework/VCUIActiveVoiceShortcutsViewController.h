/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcutsUI.framework/VoiceShortcutsUI
*/

#import <UIKitCore/UITableViewController.h>
#import <libobjc.A.dylib/VCUIShortcutViewControllerDelegate.h>

@class VCVoiceShortcutClient, UISearchController, NSArray, VCUIVoiceShortcutCell, NSString;

@interface VCUIActiveVoiceShortcutsViewController : UITableViewController <VCUIShortcutViewControllerDelegate> {

	VCVoiceShortcutClient* _voiceShortcutClient;
	UISearchController* _searchController;
	NSArray* _voiceShortcuts;
	VCUIVoiceShortcutCell* _prototypeCell;

}

@property (nonatomic,retain) UISearchController * searchController;                      //@synthesize searchController=_searchController - In the implementation block
@property (nonatomic,retain) NSArray * voiceShortcuts;                                   //@synthesize voiceShortcuts=_voiceShortcuts - In the implementation block
@property (nonatomic,retain) VCUIVoiceShortcutCell * prototypeCell;                      //@synthesize prototypeCell=_prototypeCell - In the implementation block
@property (nonatomic,readonly) VCVoiceShortcutClient * voiceShortcutClient;              //@synthesize voiceShortcutClient=_voiceShortcutClient - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)viewDidLoad;
-(UISearchController *)searchController;
-(void)setSearchController:(UISearchController *)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(VCVoiceShortcutClient *)voiceShortcutClient;
-(void)didTapCancel;
-(void)shortcutViewController:(id)arg1 didSaveShortcut:(id)arg2 ;
-(void)shortcutViewController:(id)arg1 didDeleteShortcut:(id)arg2 ;
-(void)shortcutViewControllerDidCancel:(id)arg1 ;
-(VCUIVoiceShortcutCell *)prototypeCell;
-(void)setPrototypeCell:(VCUIVoiceShortcutCell *)arg1 ;
-(id)initWithVoiceShortcutClient:(id)arg1 ;
-(void)reloadVoiceShortcuts;
-(void)launchExtensionToRunVoiceShortcut:(id)arg1 ;
-(void)showConfirmationWithTitle:(id)arg1 message:(id)arg2 confirmationHandler:(/*^block*/id)arg3 ;
-(void)showHandleIntentResponse:(id)arg1 ;
-(NSArray *)voiceShortcuts;
-(void)setVoiceShortcuts:(NSArray *)arg1 ;
@end

