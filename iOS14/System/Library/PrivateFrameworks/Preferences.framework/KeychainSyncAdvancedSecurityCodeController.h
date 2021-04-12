/*
* Generated on Thursday, January 14, 2021 at 2:20:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(id)specifiers;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)nextPressed;
-(void)setShowsDisableRecoveryOption:(BOOL)arg1 ;
-(BOOL)tableView:(id)arg1 shouldDrawTopSeparatorForSection:(long long)arg2 ;
-(void)viewDidLoad;
-(void)_finishedWithSpecifier:(id)arg1 ;
-(BOOL)showsDisableRecoveryOption;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
@end

