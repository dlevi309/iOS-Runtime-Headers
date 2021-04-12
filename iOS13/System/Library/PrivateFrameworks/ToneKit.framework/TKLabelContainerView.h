/*
* Generated on Monday, March 1, 2021 at 2:34:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)setLabelFont:(UIFont *)arg1 ;
-(UIFont *)labelFont;
-(void)setLabelText:(NSString *)arg1 ;
-(NSString *)labelText;
-(UIColor *)labelTextColor;
-(void)setLabelTextColor:(UIColor *)arg1 ;
-(UIEdgeInsets)labelPaddingInsets;
-(UIColor *)labelShadowColor;
-(void)setLabelShadowColor:(UIColor *)arg1 ;
-(UIOffset)labelShadowOffset;
-(void)setLabelShadowOffset:(UIOffset)arg1 ;
-(void)setLabelPaddingInsets:(UIEdgeInsets)arg1 ;
@end

