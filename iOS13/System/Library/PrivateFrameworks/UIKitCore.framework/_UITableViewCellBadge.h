/*
* Generated on Monday, March 1, 2021 at 2:30:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, NSString;

@interface _UITableViewCellBadge : UIView {

	BOOL _selected;
	UILabel* _badgeTextLabel;

}

@property (nonatomic,retain) UILabel * badgeTextLabel;                     //@synthesize badgeTextLabel=_badgeTextLabel - In the implementation block
@property (assign,getter=isSelected,nonatomic) BOOL selected;              //@synthesize selected=_selected - In the implementation block
@property (nonatomic,copy) NSString * text; 
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(double)minHeight;
-(BOOL)isSelected;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)isHighlighted;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)setBadgeTextLabel:(UILabel *)arg1 ;
-(UILabel *)badgeTextLabel;
-(void)_sizeToFit;
@end

