/*
* Generated on Thursday, January 14, 2021 at 2:23:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <UIKitCore/UIButton.h>

@class UIColor;

@interface GKGenericRoundButton : UIButton {

	UIColor* _fillColor;
	UIColor* _highlightedFillColor;

}

@property (nonatomic,retain) UIColor * fillColor;                         //@synthesize fillColor=_fillColor - In the implementation block
@property (nonatomic,retain) UIColor * highlightedFillColor;              //@synthesize highlightedFillColor=_highlightedFillColor - In the implementation block
-(void)setFillColor:(UIColor *)arg1 ;
-(UIColor *)fillColor;
-(void)drawRect:(CGRect)arg1 ;
-(UIColor *)highlightedFillColor;
-(void)setHighlightedFillColor:(UIColor *)arg1 ;
@end

