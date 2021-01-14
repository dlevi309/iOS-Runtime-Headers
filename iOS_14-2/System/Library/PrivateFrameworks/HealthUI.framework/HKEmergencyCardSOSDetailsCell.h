/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <UIKitCore/UITableViewCell.h>
#import <UIKit/UITextViewDelegate.h>

@class NSAttributedString, UITextView, NSString;

@interface HKEmergencyCardSOSDetailsCell : UITableViewCell <UITextViewDelegate> {

	NSAttributedString* _footerAttributedText;
	UITextView* _footerTextView;

}

@property (nonatomic,retain) UITextView * footerTextView;                          //@synthesize footerTextView=_footerTextView - In the implementation block
@property (nonatomic,copy) NSAttributedString * footerAttributedText;              //@synthesize footerAttributedText=_footerAttributedText - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_setupConstraints;
-(void)tintColorDidChange;
-(void)_updateText;
-(void)_dynamicUserInterfaceTraitDidChange;
-(UITextView *)footerTextView;
-(void)_setupViews;
-(BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 interaction:(long long)arg4 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setFooterTextView:(UITextView *)arg1 ;
-(void)setFooterAttributedText:(NSAttributedString *)arg1 ;
-(NSAttributedString *)footerAttributedText;
@end

