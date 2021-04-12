/*
* Generated on Monday, March 1, 2021 at 2:33:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <UIKitCore/UIView.h>

@class UITextView, UILabel, NSString;

@interface TSKCellEditorField : UIView {

	UITextView* mTextView;
	UILabel* mLeftSymbolView;
	UILabel* mRightSymbolView;

}

@property (nonatomic,retain) UILabel * leftSymbolView; 
@property (nonatomic,retain) UILabel * rightSymbolView; 
@property (nonatomic,retain) UITextView * textView; 
@property (nonatomic,retain) NSString * text; 
@property (nonatomic,retain) NSString * leftSymbol; 
@property (nonatomic,retain) NSString * rightSymbol; 
-(void)dealloc;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(UITextView *)textView;
-(void)setTextView:(UITextView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)p_symbolContainerBackgroundColor;
-(UILabel *)leftSymbolView;
-(UILabel *)rightSymbolView;
-(NSString *)leftSymbol;
-(void)setLeftSymbol:(NSString *)arg1 ;
-(NSString *)rightSymbol;
-(void)setRightSymbol:(NSString *)arg1 ;
-(void)setLeftSymbolView:(UILabel *)arg1 ;
-(void)setRightSymbolView:(UILabel *)arg1 ;
@end

