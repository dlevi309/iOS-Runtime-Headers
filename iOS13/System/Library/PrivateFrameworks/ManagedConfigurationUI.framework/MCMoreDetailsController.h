/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
*/

#import <Preferences/PSListController.h>

@class UIImage;

@interface MCMoreDetailsController : PSListController {

	UIImage* _iconImage;

}

@property (nonatomic,retain) UIImage * iconImage;              //@synthesize iconImage=_iconImage - In the implementation block
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(UIImage *)iconImage;
-(id)loadSpecifiersFromPlistName:(id)arg1 target:(id)arg2 ;
-(void)setIconImage:(UIImage *)arg1 ;
-(id)_specifierForPayload:(id)arg1 ;
@end

