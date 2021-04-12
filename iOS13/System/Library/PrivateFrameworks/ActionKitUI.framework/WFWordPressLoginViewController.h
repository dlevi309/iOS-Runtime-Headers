/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
*/

#import <ActionKitUI/WFPasswordAccountLoginViewController.h>

@class UITextField;

@interface WFWordPressLoginViewController : WFPasswordAccountLoginViewController {

	UITextField* _blogField;

}

@property (nonatomic,__weak,readonly) UITextField * blogField;              //@synthesize blogField=_blogField - In the implementation block
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(id)loginURL;
-(id)initWithAccountClass:(Class)arg1 ;
-(void)loginWithUsername:(id)arg1 password:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)configureTextField:(id)arg1 forKey:(id)arg2 ;
-(BOOL)canAttemptLogin;
-(UITextField *)blogField;
@end

