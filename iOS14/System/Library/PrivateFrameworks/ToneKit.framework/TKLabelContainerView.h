/*
* Generated on Thursday, January 14, 2021 at 2:28:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
*/

#import <ToneKit/ToneKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, NSString, UIFont, UIColor;

@interface TKLabelContainerView : UIView {

	UILabel* _label;
	UIEdgeInsets _labelPaddingInsets;

}

@property (nonatomic,copy) NSString * labelText; 
@property (nonatomic,retain) UIFont * labelFont; 
@property (nonatomic,retain) UIColor * labelTextColor; 
@property (nonatomic,retain) UIColor * labelShadowColor; 
@property (assign,nonatomic) UIOffset labelShadowOffset; 
@property (assign,nonatomic) UIEdgeInsets labelPaddingInsets;              //@synthesize labelPaddingInsets=_labelPaddingInsets - In the implementation block
-(UIFont *)labelFont;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setLabelFont:(UIFont *)arg1 ;
-(UIColor *)labelTextColor;
-(void)setLabelTextColor:(UIColor *)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)labelText;
-(void)setLabelText:(NSString *)arg1 ;
-(UIEdgeInsets)labelPaddingInsets;
-(UIColor *)labelShadowColor;
-(void)setLabelShadowColor:(UIColor *)arg1 ;
-(UIOffset)labelShadowOffset;
-(void)setLabelShadowOffset:(UIOffset)arg1 ;
-(void)setLabelPaddingInsets:(UIEdgeInsets)arg1 ;
@end

