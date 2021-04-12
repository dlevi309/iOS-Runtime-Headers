/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <UIKitCore/UITableViewHeaderFooterView.h>
#import <UIKit/UITextViewDelegate.h>

@class UITextView, NSString;

@interface HKFooterViewWithLink : UITableViewHeaderFooterView <UITextViewDelegate> {

	UITextView* _footerTextView;

}

@property (nonatomic,retain) UITextView * footerTextView;              //@synthesize footerTextView=_footerTextView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultReuseIdentifier;
-(void)_setupConstraints;
-(id)initWithReuseIdentifier:(id)arg1 fullText:(id)arg2 linkRange:(NSRange)arg3 link:(id)arg4 ;
-(UITextView *)footerTextView;
-(BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 interaction:(long long)arg4 ;
-(void)_setUpFooterTextViewWithFullText:(id)arg1 linkRange:(NSRange)arg2 link:(id)arg3 ;
-(void)_setUpFooterTextViewWithBodyText:(id)arg1 linkText:(id)arg2 link:(id)arg3 ;
-(void)setFooterTextView:(UITextView *)arg1 ;
-(id)initWithReuseIdentifier:(id)arg1 bodyText:(id)arg2 linkText:(id)arg3 link:(id)arg4 ;
@end

