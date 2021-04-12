/*
* Generated on Monday, March 1, 2021 at 2:35:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
*/

#import <PodcastsKit/PodcastsKit-Structs.h>
#import <UIKitCore/UIControl.h>

@class UIButton, MTMPUTransportButtonEventHandler, UIImage, UIColor, UIImageView;

@interface MTMPUHalfTintedTransportButton : UIControl {

	UIButton* _regularButton;
	UIButton* _tintedButton;
	MTMPUTransportButtonEventHandler* _transportButtonEventHandler;
	UIImage* _regularImage;
	UIColor* _regularImageColor;
	UIImage* _tintedImage;

}

@property (getter=_regularButton,nonatomic,readonly) UIButton * regularButton; 
@property (getter=_tintedButton,nonatomic,readonly) UIButton * tintedButton; 
@property (nonatomic,retain) UIImage * regularImage;                                        //@synthesize regularImage=_regularImage - In the implementation block
@property (assign,nonatomic) double regularImageAlpha; 
@property (nonatomic,retain) UIColor * regularImageColor;                                   //@synthesize regularImageColor=_regularImageColor - In the implementation block
@property (nonatomic,readonly) UIImageView * regularImageView; 
@property (nonatomic,retain) UIImage * tintedImage;                                         //@synthesize tintedImage=_tintedImage - In the implementation block
@property (assign,nonatomic) double tintedImageAlpha; 
@property (nonatomic,retain) UIColor * tintedImageColor; 
@property (nonatomic,readonly) UIImageView * tintedImageView; 
+(id)transportButton;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(void)prepareForReuse;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(id)_newButton;
-(void)setAdjustsImageWhenHighlighted:(BOOL)arg1 ;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)adjustsImageWhenHighlighted;
-(void)cancelTrackingWithEvent:(id)arg1 ;
-(BOOL)shouldTrack;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)applyTransportButtonLayoutAttributes:(SCD_Struct_MT7)arg1 ;
-(BOOL)wantsCustomHighlightAppearance;
-(id)transportButtonEventHandler;
-(long long)transportButtonImageViewContentMode;
-(void)setTransportButtonImageViewContentMode:(long long)arg1 ;
-(BOOL)_shouldForwardSelectedState;
-(void)setRegularImage:(UIImage *)arg1 ;
-(void)setTintedImage:(UIImage *)arg1 ;
-(void)_updateRegularImage;
-(void)_applyImage:(id)arg1 toButton:(id)arg2 ;
-(double)regularImageAlpha;
-(UIImageView *)regularImageView;
-(void)setRegularImageAlpha:(double)arg1 ;
-(void)setRegularImageColor:(UIColor *)arg1 ;
-(void)setTintedImageAlpha:(double)arg1 ;
-(void)setTintedImageColor:(UIColor *)arg1 ;
-(double)tintedImageAlpha;
-(UIColor *)tintedImageColor;
-(UIImageView *)tintedImageView;
-(id)_regularButton;
-(id)_tintedButton;
-(UIImage *)regularImage;
-(UIColor *)regularImageColor;
-(UIImage *)tintedImage;
-(id)_handleButtonHitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
@end

