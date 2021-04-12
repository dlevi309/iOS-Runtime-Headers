/*
* Generated on Thursday, January 14, 2021 at 2:25:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)property;
-(id)specifiers;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2 ;
-(void)viewDidLoad;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
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

