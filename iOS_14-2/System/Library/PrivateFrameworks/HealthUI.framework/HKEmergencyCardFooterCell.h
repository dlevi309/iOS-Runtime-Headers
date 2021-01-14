/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <UIKitCore/UITableViewCell.h>
#import <UIKit/UITextViewDelegate.h>

@class UITextView, NSAttributedString, NSString;

@interface HKEmergencyCardFooterCell : UITableViewCell <UITextViewDelegate> {

	UITextView* _footerTextView;
	NSAttributedString* _footerTextViewString;

}

@property (nonatomic,retain) UITextView * footerTextView;                            //@synthesize footerTextView=_footerTextView - In the implementation block
@property (nonatomic,retain) NSAttributedString * footerTextViewString;              //@synthesize footerTextViewString=_footerTextViewString - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setTextViewDelegate:(id)arg1 ;
-(void)tintColorDidChange;
-(void)_updateTextColor;
-(void)setFooterText:(id)arg1 ;
-(void)_dynamicUserInterfaceTraitDidChange;
-(UITextView *)footerTextView;
-(void)setupViews;
-(BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 interaction:(long long)arg4 ;
-(void)setupConstraints;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setFooterTextView:(UITextView *)arg1 ;
-(NSAttributedString *)footerTextViewString;
-(void)setFooterTextViewString:(NSAttributedString *)arg1 ;
@end

