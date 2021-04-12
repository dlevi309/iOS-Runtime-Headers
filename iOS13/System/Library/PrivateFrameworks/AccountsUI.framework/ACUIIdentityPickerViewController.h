/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AccountsUI.framework/AccountsUI
*/

#import <AccountsUI/AccountsUI-Structs.h>
#import <Preferences/PSListController.h>

@protocol ACUIIdentityPickerViewControllerDelegate;
@class NSString, NSArray;

@interface ACUIIdentityPickerViewController : PSListController {

	id<ACUIIdentityPickerViewControllerDelegate> _delegate;
	NSString* _property;
	NSArray* _identities;
	NSArray* _emailAddresses;
	BOOL _userInteractiveSwitch;
	BOOL _userInteractiveIdentityList;
	BOOL _allowIdentitySelectionForDisabledSwitch;

}

@property (nonatomic,readonly) NSString * property;              //@synthesize property=_property - In the implementation block
-(void)viewDidLoad;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(NSString *)property;
-(id)specifiers;
-(void)_finishedFetchingIdentities:(id)arg1 ;
-(SecIdentityRef)_selectedIdentity;
-(BOOL)_isPropertyEnabled;
-(void)_setValue:(id)arg1 forSwitchSpecifier:(id)arg2 ;
-(id)_valueForSwitchSpecifier:(id)arg1 ;
-(id)_specifiersForIdentities:(id)arg1 ;
-(SecIdentityRef)_identityToAutoselectWithEnabled:(BOOL)arg1 ;
-(void)_setPropertyEnabled:(BOOL)arg1 identity:(SecIdentityRef)arg2 ;
-(void)_updateCell:(id)arg1 selected:(BOOL)arg2 ;
-(BOOL)_allowIdentitySelection;
-(id)_identitySpecifiers;
@end

