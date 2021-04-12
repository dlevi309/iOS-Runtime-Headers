/*
* Generated on Thursday, January 14, 2021 at 2:22:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MKVibrantView.h>

@class UILabel, UIColor, NSString, NSAttributedString, UIFont;

@interface MKVibrantLabel : MKVibrantView {

	UILabel* _label;
	UIColor* _textColor;

}

@property (nonatomic,copy) NSString * text; 
@property (nonatomic,copy) UIColor * textColor;                              //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,copy) NSAttributedString * attributedText; 
@property (nonatomic,retain) UIFont * font; 
@property (assign,nonatomic) long long numberOfLines; 
@property (assign,nonatomic) long long textAlignment; 
-(NSAttributedString *)attributedText;
-(id)viewForLastBaselineLayout;
-(UIColor *)textColor;
-(void)setAttributedText:(NSAttributedString *)arg1 ;
-(id)viewForFirstBaselineLayout;
-(void)setNumberOfLines:(long long)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(id)initWithStyle:(long long)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(long long)textAlignment;
-(void)setTextColor:(UIColor *)arg1 ;
-(NSString *)text;
-(void)setTextAlignment:(long long)arg1 ;
-(long long)numberOfLines;
-(UIFont *)font;
@end

