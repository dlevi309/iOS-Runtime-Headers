/*
* Generated on Thursday, January 14, 2021 at 2:26:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKitCore/UIControl.h>

@class UIView, CAShapeLayer;

@interface NTKCFaceContainerView : UIControl {

	BOOL _active;
	long long _style;
	UIView* _faceView;
	UIView* _backgroundView;
	CAShapeLayer* _outline;
	UIView* _faceContainer;
	UIView* _highlightView;
	CGSize _faceSize;

}

@property (nonatomic,retain) UIView * backgroundView;              //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) CAShapeLayer * outline;               //@synthesize outline=_outline - In the implementation block
@property (nonatomic,retain) UIView * faceContainer;               //@synthesize faceContainer=_faceContainer - In the implementation block
@property (nonatomic,retain) UIView * highlightView;               //@synthesize highlightView=_highlightView - In the implementation block
@property (assign,nonatomic) CGSize faceSize;                      //@synthesize faceSize=_faceSize - In the implementation block
@property (assign,nonatomic) long long style;                      //@synthesize style=_style - In the implementation block
@property (nonatomic,retain) UIView * faceView;                    //@synthesize faceView=_faceView - In the implementation block
@property (assign,nonatomic) BOOL active;                          //@synthesize active=_active - In the implementation block
+(CGSize)sizeForFaceSize:(CGSize)arg1 style:(long long)arg2 ;
+(double)_insetPaddingForStyle:(long long)arg1 ;
+(CGSize)faceSizeForSize:(CGSize)arg1 style:(long long)arg2 ;
-(CAShapeLayer *)outline;
-(CGSize)intrinsicContentSize;
-(BOOL)active;
-(void)setActive:(BOOL)arg1 ;
-(void)setHighlightView:(UIView *)arg1 ;
-(UIView *)highlightView;
-(void)setBackgroundView:(UIView *)arg1 ;
-(UIView *)backgroundView;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setFaceSize:(CGSize)arg1 ;
-(void)setOutline:(CAShapeLayer *)arg1 ;
-(void)setStyle:(long long)arg1 ;
-(CGSize)faceSize;
-(void)traitCollectionDidChange:(id)arg1 ;
-(long long)style;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setFaceView:(UIView *)arg1 ;
-(UIView *)faceView;
-(id)initWithFaceSize:(CGSize)arg1 style:(long long)arg2 ;
-(void)setFaceContainer:(UIView *)arg1 ;
-(UIView *)faceContainer;
-(double)_outlineLineWidth;
-(void)_updateOutlineColor;
-(CGAffineTransform)_transformForFaceView;
@end

