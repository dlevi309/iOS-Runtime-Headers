/*
* Generated on Thursday, January 14, 2021 at 2:25:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UITableViewCell.h>
#import <UIKit/UITextViewDelegate.h>

@class UIView, UILabel, UITextView, NSString;

@interface SKUIGiftTextTableViewCell : UITableViewCell <UITextViewDelegate> {

	UIView* _bottomBorderView;
	UILabel* _label;
	long long _maximumCharacterCount;
	UILabel* _placeholderLabel;
	UITextView* _textView;
	UIView* _topBorderView;
	BOOL _leftToRight;

}

@property (assign,nonatomic) BOOL leftToRight;                             //@synthesize leftToRight=_leftToRight - In the implementation block
@property (nonatomic,copy) NSString * label; 
@property (assign,nonatomic) long long maximumCharacterCount;              //@synthesize maximumCharacterCount=_maximumCharacterCount - In the implementation block
@property (nonatomic,copy) NSString * placeholder; 
@property (nonatomic,retain) UITextView * textView;                        //@synthesize textView=_textView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newTextView;
-(UITextView *)textView;
-(void)setTextView:(UITextView *)arg1 ;
-(void)layoutSubviews;
-(void)setPlaceholder:(NSString *)arg1 ;
-(void)setLeftToRight:(BOOL)arg1 ;
-(void)textViewDidBeginEditing:(id)arg1 ;
-(NSString *)placeholder;
-(void)textViewDidEndEditing:(id)arg1 ;
-(BOOL)textView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(void)setLabel:(NSString *)arg1 ;
-(BOOL)leftToRight;
-(NSString *)label;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)dealloc;
-(void)setMaximumCharacterCount:(long long)arg1 ;
-(long long)maximumCharacterCount;
@end

