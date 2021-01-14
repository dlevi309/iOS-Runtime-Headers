/*
* Generated on Thursday, January 14, 2021 at 2:27:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setAdjustsFontForContentSizeCategory:(BOOL)arg1 ;
-(long long)lineBreakMode;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 ;
-(BOOL)adjustsFontForContentSizeCategory;
-(id)viewForLastBaselineLayout;
-(CGSize)intrinsicContentSize;
-(UIColor *)textColor;
-(void)setLineBreakMode:(long long)arg1 ;
-(void)setNumberOfLines:(long long)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(long long)textAlignment;
-(void)setTextColor:(UIColor *)arg1 ;
-(NSString *)text;
-(id)initWithEffect:(id)arg1 ;
-(void)setTextAlignment:(long long)arg1 ;
-(void)setLabel:(UILabel *)arg1 ;
-(long long)numberOfLines;
-(UILabel *)label;
-(UIFont *)font;
@end

