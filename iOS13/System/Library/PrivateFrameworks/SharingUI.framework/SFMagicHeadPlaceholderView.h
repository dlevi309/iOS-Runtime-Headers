/*
* Generated on Monday, March 1, 2021 at 2:35:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(double)alpha;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setAlpha:(double)arg1 ;
-(void)layoutSubviews;
-(void)setTiltedTooFarColor:(BOOL)arg1 useRaiseLabel:(BOOL)arg2 useNoUWBCapableLabel:(BOOL)arg3 ;
-(void)updateForCurrentState;
@end

