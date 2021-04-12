/*
* Generated on Monday, March 1, 2021 at 2:31:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(UITextView *)textView;
-(void)setTextView:(UITextView *)arg1 ;
-(void)layoutSubviews;
-(void)setPlaceholder:(NSString *)arg1 ;
-(NSString *)placeholder;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setLeftToRight:(BOOL)arg1 ;
-(BOOL)leftToRight;
-(void)textViewDidBeginEditing:(id)arg1 ;
-(void)textViewDidEndEditing:(id)arg1 ;
-(BOOL)textView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(void)setMaximumCharacterCount:(long long)arg1 ;
-(long long)maximumCharacterCount;
@end

