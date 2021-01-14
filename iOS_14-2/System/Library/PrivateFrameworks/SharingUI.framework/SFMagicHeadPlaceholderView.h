/*
* Generated on Thursday, January 14, 2021 at 2:28:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SharingUI.framework/SharingUI
*/

#import <SharingUI/SharingUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIVisualEffectView, SFMagicHeadCircleView, UILabel, UIImageView;

@interface SFMagicHeadPlaceholderView : UIView {

	UIVisualEffectView* _backgroundVisualEffectView;
	SFMagicHeadCircleView* _backgroundView;
	UIVisualEffectView* _contentVisualEffectView;
	UILabel* _label;
	UIImageView* _imageView;
	BOOL _useNoUWBCapableLabel;
	BOOL _useRaiseLabel;
	BOOL _titledTooFarColor;
	BOOL _canShowArrow;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(double)alpha;
-(void)layoutSubviews;
-(void)setAlpha:(double)arg1 ;
-(void)setTiltedTooFarColor:(BOOL)arg1 useRaiseLabel:(BOOL)arg2 useNoUWBCapableLabel:(BOOL)arg3 ;
-(void)updateForCurrentState;
@end

