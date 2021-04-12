/*
* Generated on Monday, March 1, 2021 at 2:35:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <TVMLKit/TVButton.h>

@class CALayer;

@interface _TVRoundButton : TVButton {

	CALayer* _imageMask;
	/*^block*/id _updateFloatingViewFocusStateBlock;
	BOOL _shouldPunchThroughImage;

}

@property (assign,nonatomic) BOOL shouldPunchThroughImage;              //@synthesize shouldPunchThroughImage=_shouldPunchThroughImage - In the implementation block
+(id)_buttonContentWithFrame:(CGRect)arg1 blurEffectStyle:(long long)arg2 blurEnabled:(BOOL)arg3 ;
-(void)dealloc;
-(void)setBounds:(CGRect)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(void)layoutSubviews;
-(void)didMoveToWindow;
-(void)setAccessoryView:(id)arg1 ;
-(void)setImageView:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 blurEffectStyle:(long long)arg2 blurEnabled:(BOOL)arg3 ;
-(void)_updateBackgroundColorForState:(unsigned long long)arg1 ;
-(void)setTextContentView:(id)arg1 ;
-(void)_updateFocusStateWithCoordinator:(id)arg1 ;
-(void)_updateFloaingViewFocusState:(BOOL)arg1 coordinator:(id)arg2 ;
-(void)_imageViewDidLoadImage:(id)arg1 ;
-(void)_updateFloatingViewFocusStateIfNeeded;
-(void)_updateImageMask;
-(BOOL)shouldPunchThroughImage;
-(void)setShouldPunchThroughImage:(BOOL)arg1 ;
@end

