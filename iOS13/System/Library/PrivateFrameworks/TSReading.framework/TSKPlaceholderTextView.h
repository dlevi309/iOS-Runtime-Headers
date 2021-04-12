/*
* Generated on Monday, March 1, 2021 at 2:33:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <UIKitCore/UITextView.h>

@class UILabel, NSString;

@interface TSKPlaceholderTextView : UITextView {

	UILabel* mPlaceholderView;

}

@property (nonatomic,retain) NSString * placeholder; 
-(void)dealloc;
-(void)setText:(id)arg1 ;
-(void)removeFromSuperview;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTextColor:(id)arg1 ;
-(void)setFont:(id)arg1 ;
-(void)setTextAlignment:(long long)arg1 ;
-(void)setPlaceholder:(NSString *)arg1 ;
-(BOOL)becomeFirstResponder;
-(void)didMoveToSuperview;
-(void)setContentOffset:(CGPoint)arg1 ;
-(NSString *)placeholder;
-(void)p_textDidChange:(id)arg1 ;
@end

