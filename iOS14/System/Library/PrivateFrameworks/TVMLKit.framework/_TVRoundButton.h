/*
* Generated on Thursday, January 14, 2021 at 2:28:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setImageView:(id)arg1 ;
-(void)setAccessoryView:(id)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)didMoveToWindow;
-(void)setCornerRadius:(double)arg1 ;
-(void)dealloc;
-(void)setTextContentView:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 blurEffectStyle:(long long)arg2 blurEnabled:(BOOL)arg3 ;
-(void)_updateBackgroundColorForState:(unsigned long long)arg1 ;
-(void)_updateFocusStateWithCoordinator:(id)arg1 ;
-(void)_updateFloaingViewFocusState:(BOOL)arg1 coordinator:(id)arg2 ;
-(void)_imageViewDidLoadImage:(id)arg1 ;
-(void)_updateFloatingViewFocusStateIfNeeded;
-(void)_updateImageMask;
-(BOOL)shouldPunchThroughImage;
-(void)setShouldPunchThroughImage:(BOOL)arg1 ;
@end

