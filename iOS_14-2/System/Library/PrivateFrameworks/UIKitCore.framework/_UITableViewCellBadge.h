/*
* Generated on Thursday, January 14, 2021 at 2:20:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, UIFont, UIColor, NSString;

@interface _UITableViewCellBadge : UIView {

	BOOL _selected;
	UILabel* _badgeTextLabel;

}

@property (nonatomic,retain) UILabel * badgeTextLabel;                     //@synthesize badgeTextLabel=_badgeTextLabel - In the implementation block
@property (assign,getter=isSelected,nonatomic) BOOL selected;              //@synthesize selected=_selected - In the implementation block
@property (nonatomic,retain) UIFont * font; 
@property (nonatomic,retain) UIColor * color; 
@property (nonatomic,copy) NSString * text; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(UIColor *)color;
-(BOOL)isSelected;
-(void)setText:(NSString *)arg1 ;
-(void)_sizeToFit;
-(void)setSelected:(BOOL)arg1 ;
-(UILabel *)badgeTextLabel;
-(void)setBadgeTextLabel:(UILabel *)arg1 ;
-(void)layoutSubviews;
-(void)setColor:(UIColor *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)text;
-(BOOL)isHighlighted;
-(double)minHeight;
-(UIFont *)font;
-(void)setHighlighted:(BOOL)arg1 ;
@end

