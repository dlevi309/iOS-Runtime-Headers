/*
* Generated on Monday, March 1, 2021 at 2:34:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
*/

#import <DocumentManagerUICore/DocumentManagerUICore-Structs.h>
#import <UIKitCore/UIVisualEffectView.h>

@class UILabel, NSString, UIColor, UIFont;

@interface DOCVisualEffectLabel : UIVisualEffectView {

	UILabel* _label;

}

@property (nonatomic,copy) NSString * text; 
@property (nonatomic,copy) UIColor * textColor; 
@property (nonatomic,copy) UIFont * font; 
@property (assign,nonatomic) long long lineBreakMode; 
@property (assign,nonatomic) BOOL adjustsFontForContentSizeCategory; 
@property (assign,nonatomic) long long numberOfLines; 
@property (assign,nonatomic) long long textAlignment; 
@property (nonatomic,retain) UILabel * label;                                     //@synthesize label=_label - In the implementation block
-(long long)lineBreakMode;
-(void)setLineBreakMode:(long long)arg1 ;
-(void)setLabel:(UILabel *)arg1 ;
-(UILabel *)label;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(void)setNumberOfLines:(long long)arg1 ;
-(void)setTextAlignment:(long long)arg1 ;
-(id)initWithEffect:(id)arg1 ;
-(UIFont *)font;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 ;
-(id)viewForLastBaselineLayout;
-(long long)numberOfLines;
-(UIColor *)textColor;
-(void)setAdjustsFontForContentSizeCategory:(BOOL)arg1 ;
-(long long)textAlignment;
-(BOOL)adjustsFontForContentSizeCategory;
@end

