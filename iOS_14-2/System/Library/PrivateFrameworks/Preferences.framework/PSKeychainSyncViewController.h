/*
* Generated on Thursday, January 14, 2021 at 2:20:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)specifiers;
-(id<KeychainSyncViewControllerDelegate>)delegate;
-(id)groupSpecifier;
-(void)setTitle:(id)arg1 ;
-(void)setDelegate:(id<KeychainSyncViewControllerDelegate>)arg1 ;
-(id)headerView;
-(id)viewForHeaderInTableView:(id)arg1 ;
-(double)heightForHeaderInTableView:(id)arg1 ;
@end

