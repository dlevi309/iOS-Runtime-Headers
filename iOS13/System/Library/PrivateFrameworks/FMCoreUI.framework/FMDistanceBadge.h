/*
* Generated on Monday, March 1, 2021 at 2:34:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FMCoreUI.framework/FMCoreUI
*/

#import <FMCoreUI/FMCoreUI-Structs.h>
#import <UIKitCore/UILabel.h>

@class UIColor;

@interface FMDistanceBadge : UILabel {

	UIColor* _badgeColor;
	UIEdgeInsets _insets;

}

@property (assign,nonatomic) UIEdgeInsets insets;               //@synthesize insets=_insets - In the implementation block
@property (nonatomic,retain) UIColor * badgeColor;              //@synthesize badgeColor=_badgeColor - In the implementation block
-(void)setBackgroundColor:(id)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)drawRect:(CGRect)arg1 ;
-(void)setBadgeColor:(UIColor *)arg1 ;
-(UIColor *)badgeColor;
-(void)awakeFromNib;
-(void)prepareForInterfaceBuilder;
-(UIEdgeInsets)insets;
-(void)setInsets:(UIEdgeInsets)arg1 ;
-(void)drawTextInRect:(CGRect)arg1 ;
-(void)_commonSetup;
@end

