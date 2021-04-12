/*
* Generated on Thursday, January 14, 2021 at 2:24:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
*/

#import <libobjc.A.dylib/AMSUINotificationInAppSettingsTableViewCellDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@protocol AMSUINotificationSettingsViewModelDelegate;
@class NSArray, NSString;

@interface AMSUINotificationSettingsViewModel : NSObject <AMSUINotificationInAppSettingsTableViewCellDelegate, UITableViewDataSource> {

	BOOL _showAllowNotificationsButton;
	id<AMSUINotificationSettingsViewModelDelegate> _delegate;
	NSArray* _sections;

}

@property (assign,nonatomic,__weak) id<AMSUINotificationSettingsViewModelDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSArray * sections;                                                          //@synthesize sections=_sections - In the implementation block
@property (assign,nonatomic) BOOL showAllowNotificationsButton;                                           //@synthesize showAllowNotificationsButton=_showAllowNotificationsButton - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setSections:(NSArray *)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id<AMSUINotificationSettingsViewModelDelegate>)delegate;
-(NSArray *)sections;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)setDelegate:(id<AMSUINotificationSettingsViewModelDelegate>)arg1 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(void)notificationInAppSettingsTableViewCellDidToggleValue:(id)arg1 forItem:(id)arg2 ;
-(void)setShowAllowNotificationsButton:(BOOL)arg1 ;
-(BOOL)showAllowNotificationsButton;
@end

