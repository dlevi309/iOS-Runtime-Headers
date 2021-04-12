/*
* Generated on Monday, March 1, 2021 at 2:30:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/

#import <Preferences/PSListController.h>
#import <libobjc.A.dylib/KeychainSyncViewController.h>

@protocol KeychainSyncViewControllerDelegate;
@class PSKeychainSyncHeaderView, PSSpecifier;

@interface PSKeychainSyncViewController : PSListController <KeychainSyncViewController> {

	PSKeychainSyncHeaderView* _headerView;
	PSSpecifier* _groupSpecifier;
	id<KeychainSyncViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<KeychainSyncViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<KeychainSyncViewControllerDelegate>)delegate;
-(void)setDelegate:(id<KeychainSyncViewControllerDelegate>)arg1 ;
-(void)setTitle:(id)arg1 ;
-(id)headerView;
-(double)heightForHeaderInTableView:(id)arg1 ;
-(id)viewForHeaderInTableView:(id)arg1 ;
-(id)specifiers;
-(id)groupSpecifier;
@end

