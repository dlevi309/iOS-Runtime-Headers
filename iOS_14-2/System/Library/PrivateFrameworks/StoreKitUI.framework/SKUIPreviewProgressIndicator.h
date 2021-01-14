/*
* Generated on Thursday, January 14, 2021 at 2:25:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIControl.h>

@class SKUIShapeView, UIImageView;

@interface SKUIPreviewProgressIndicator : UIControl {

	SKUIShapeView* _backgroundView;
	UIImageView* _cancelImageView;
	SKUIShapeView* _foregroundView;
	BOOL _isIndeterminate;
	float _progress;

}

@property (getter=isIndeterminate,nonatomic,readonly) BOOL indeterminate;              //@synthesize isIndeterminate=_isIndeterminate - In the implementation block
@property (assign,nonatomic) float progress;                                           //@synthesize progress=_progress - In the implementation block
-(void)tintColorDidChange;
-(id)initWithFrame:(CGRect)arg1 ;
-(float)progress;
-(void)_beginIndeterminateAnimation;
-(id)_newShapeViewWithBounds:(CGRect)arg1 lineWidth:(double)arg2 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)endIndeterminateAnimation;
-(void)beginIndeterminateAnimation;
-(void)setProgress:(float)arg1 ;
-(BOOL)isIndeterminate;
-(void)setProgress:(float)arg1 animated:(BOOL)arg2 ;
-(void)reloadWithPlayerStatus:(id)arg1 animated:(BOOL)arg2 ;
@end

