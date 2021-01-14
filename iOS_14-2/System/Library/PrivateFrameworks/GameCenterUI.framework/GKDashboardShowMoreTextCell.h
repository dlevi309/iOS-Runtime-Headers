/*
* Generated on Thursday, January 14, 2021 at 2:23:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <GameCenterUI/GKRectShadowCell.h>

@class UILabel;

@interface GKDashboardShowMoreTextCell : GKRectShadowCell {

	UILabel* _label;

}

@property (assign,nonatomic) UILabel * label;              //@synthesize label=_label - In the implementation block
+(CGSize)defaultSize;
-(void)awakeFromNib;
-(void)setLabel:(UILabel *)arg1 ;
-(UILabel *)label;
@end

