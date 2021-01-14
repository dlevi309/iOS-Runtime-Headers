/*
* Generated on Thursday, January 14, 2021 at 2:28:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
*/

#import <Preferences/PSTableCell.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class UILongPressGestureRecognizer, NSString;

@interface STRotatingDisclosureCell : PSTableCell <UIGestureRecognizerDelegate> {

	UILongPressGestureRecognizer* _longPressGestureRecognizer;

}

@property (readonly) UILongPressGestureRecognizer * longPressGestureRecognizer;              //@synthesize longPressGestureRecognizer=_longPressGestureRecognizer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setSpecifier:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2 ;
-(void)layoutSubviews;
-(UILongPressGestureRecognizer *)longPressGestureRecognizer;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)_userPressed:(id)arg1 ;
@end

