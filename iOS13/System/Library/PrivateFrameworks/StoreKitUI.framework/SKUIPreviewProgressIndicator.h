/*
* Generated on Monday, March 1, 2021 at 2:31:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(float)progress;
-(BOOL)isIndeterminate;
-(void)setProgress:(float)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)tintColorDidChange;
-(void)setProgress:(float)arg1 animated:(BOOL)arg2 ;
-(void)endIndeterminateAnimation;
-(void)beginIndeterminateAnimation;
-(void)reloadWithPlayerStatus:(id)arg1 animated:(BOOL)arg2 ;
-(void)_beginIndeterminateAnimation;
-(id)_newShapeViewWithBounds:(CGRect)arg1 lineWidth:(double)arg2 ;
@end

