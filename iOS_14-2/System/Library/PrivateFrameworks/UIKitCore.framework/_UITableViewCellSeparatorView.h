/*
* Generated on Thursday, January 14, 2021 at 2:20:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
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
-(void)setSeparatorEffect:(UIVisualEffect *)arg1 ;
-(UIVisualEffect *)separatorEffect;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)drawsWithVibrantLightMode;
-(void)layoutSubviews;
-(void)setDrawsWithVibrantLightMode:(BOOL)arg1 ;
@end

