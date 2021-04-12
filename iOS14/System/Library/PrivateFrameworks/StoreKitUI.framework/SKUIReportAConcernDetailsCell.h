/*
* Generated on Thursday, January 14, 2021 at 2:25:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <UIKitCore/UITableViewCell.h>
#import <UIKit/UITextViewDelegate.h>

@class NSString, UITextView;

@interface SKUIReportAConcernDetailsCell : UITableViewCell <UITextViewDelegate> {

	NSString* _placeholderText;
	UITextView* _textView;

}

@property (nonatomic,retain) UITextView * textView;                 //@synthesize textView=_textView - In the implementation block
@property (nonatomic,copy) NSString * placeholderText;              //@synthesize placeholderText=_placeholderText - In the implementation block
@property (nonatomic,copy,readonly) NSString * text; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UITextView *)textView;
-(NSString *)placeholderText;
-(void)setTextView:(UITextView *)arg1 ;
-(void)layoutSubviews;
-(NSString *)text;
-(void)textViewDidBeginEditing:(id)arg1 ;
-(void)textViewDidEndEditing:(id)arg1 ;
-(void)setPlaceholderText:(NSString *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)updatePlaceholderText:(BOOL)arg1 ;
@end

