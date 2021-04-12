/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <UIKitCore/UITableViewCell.h>
#import <UIKit/UITextViewDelegate.h>

@class UITextView, NSAttributedString, NSString;

@interface HKEmergencyCardSOSDetailsCell : UITableViewCell <UITextViewDelegate> {

	UITextView* _footerTextView;

}

@property (nonatomic,retain) UITextView * footerTextView;                              //@synthesize footerTextView=_footerTextView - In the implementation block
@property (nonatomic,readonly) NSAttributedString * footerTextViewString; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)tintColorDidChange;
-(void)_dynamicUserInterfaceTraitDidChange;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 interaction:(long long)arg4 ;
-(UITextView *)footerTextView;
-(void)setupViews;
-(void)setupConstraints;
-(void)_updateTextColor;
-(void)setFooterTextView:(UITextView *)arg1 ;
-(NSAttributedString *)footerTextViewString;
@end

