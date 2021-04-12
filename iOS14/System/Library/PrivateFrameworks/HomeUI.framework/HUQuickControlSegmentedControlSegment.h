/*
* Generated on Thursday, January 14, 2021 at 2:24:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, NSString;

@interface HUQuickControlSegmentedControlSegment : UIView {

	BOOL _highlighted;
	BOOL _selected;
	unsigned long long _roundedCorners;
	UILabel* _titleLabel;

}

@property (nonatomic,retain) UILabel * titleLabel;                               //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,copy) NSString * title; 
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted;              //@synthesize highlighted=_highlighted - In the implementation block
@property (assign,getter=isSelected,nonatomic) BOOL selected;                    //@synthesize selected=_selected - In the implementation block
@property (assign,nonatomic) unsigned long long roundedCorners;                  //@synthesize roundedCorners=_roundedCorners - In the implementation block
+(id)selectedColor;
+(id)highlightedColor;
+(double)borderInset;
-(void)_setupConstraints;
-(UILabel *)titleLabel;
-(void)_updateBackgroundColor;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)isSelected;
-(void)setTitle:(NSString *)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)layoutSubviews;
-(BOOL)isHighlighted;
-(void)setRoundedCorners:(unsigned long long)arg1 ;
-(unsigned long long)roundedCorners;
-(NSString *)title;
-(void)setHighlighted:(BOOL)arg1 ;
@end

