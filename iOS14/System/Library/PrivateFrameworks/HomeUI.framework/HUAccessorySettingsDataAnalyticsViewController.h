/*
* Generated on Thursday, January 14, 2021 at 2:24:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <HomeUI/HUAccessorySettingsDetailsViewController.h>
#import <UIKit/UITextViewDelegate.h>

@class UIView, NSString;

@interface HUAccessorySettingsDataAnalyticsViewController : HUAccessorySettingsDetailsViewController <UITextViewDelegate> {

	UIView* _linkFooterView;

}

@property (nonatomic,readonly) UIView * linkFooterView;              //@synthesize linkFooterView=_linkFooterView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 interaction:(long long)arg4 ;
-(void)dismissPrivacyController;
-(UIView *)linkFooterView;
@end

