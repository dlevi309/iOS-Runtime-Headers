/*
* Generated on Monday, March 1, 2021 at 2:30:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/

#import <Preferences/PSKeychainSyncViewController.h>
#import <UIKit/UIAlertViewDelegate.h>

@class UIFont, NSString;

@interface KeychainSyncAdvancedSecurityCodeController : PSKeychainSyncViewController <UIAlertViewDelegate> {

	double _cellTextWidth;
	UIFont* _cellFont;
	BOOL _showsDisableRecoveryOption;

}

@property (assign,nonatomic) BOOL showsDisableRecoveryOption;              //@synthesize showsDisableRecoveryOption=_showsDisableRecoveryOption - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidLoad;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldDrawTopSeparatorForSection:(long long)arg2 ;
-(id)specifiers;
-(void)nextPressed;
-(void)setShowsDisableRecoveryOption:(BOOL)arg1 ;
-(void)_finishedWithSpecifier:(id)arg1 ;
-(BOOL)showsDisableRecoveryOption;
@end

