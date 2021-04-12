/*
* Generated on Monday, March 1, 2021 at 2:30:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIView.h>

@class UIView, UIVisualEffect, UIVisualEffectView;

@interface _UITableViewCellSeparatorView : UIView {

	UIView* _backgroundView;
	UIView* _overlayView;
	UIVisualEffect* _separatorEffect;
	UIVisualEffectView* _effectView;
	BOOL _drawsWithVibrantLightMode;

}

@property (assign,nonatomic) BOOL drawsWithVibrantLightMode;                //@synthesize drawsWithVibrantLightMode=_drawsWithVibrantLightMode - In the implementation block
@property (nonatomic,retain) UIVisualEffect * separatorEffect;              //@synthesize separatorEffect=_separatorEffect - In the implementation block
-(void)layoutSubviews;
-(UIVisualEffect *)separatorEffect;
-(void)setSeparatorEffect:(UIVisualEffect *)arg1 ;
-(void)setDrawsWithVibrantLightMode:(BOOL)arg1 ;
-(BOOL)drawsWithVibrantLightMode;
@end

