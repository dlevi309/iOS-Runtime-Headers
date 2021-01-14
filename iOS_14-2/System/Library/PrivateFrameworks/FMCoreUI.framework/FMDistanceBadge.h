/*
* Generated on Thursday, January 14, 2021 at 2:27:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CGSize)intrinsicContentSize;
-(void)setBackgroundColor:(id)arg1 ;
-(void)_commonSetup;
-(void)drawRect:(CGRect)arg1 ;
-(void)drawTextInRect:(CGRect)arg1 ;
-(UIColor *)badgeColor;
-(void)prepareForInterfaceBuilder;
-(void)awakeFromNib;
-(UIEdgeInsets)insets;
-(void)setInsets:(UIEdgeInsets)arg1 ;
-(void)setBadgeColor:(UIColor *)arg1 ;
@end

