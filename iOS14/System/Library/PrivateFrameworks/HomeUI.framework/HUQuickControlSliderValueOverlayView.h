/*
* Generated on Thursday, January 14, 2021 at 2:24:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIColor, CAShapeLayer, UIView;

@interface HUQuickControlSliderValueOverlayView : UIView {

	BOOL _off;
	BOOL _hasSecondGrabber;
	BOOL _showGrabbers;
	UIColor* _layerColor;
	unsigned long long _primaryGrabberLocation;
	unsigned long long _controlSize;
	CAShapeLayer* _primaryGrabberShadowLayer;
	CAShapeLayer* _secondaryGrabberShadowLayer;
	UIView* _topBorder;

}

@property (nonatomic,readonly) CAShapeLayer * layer; 
@property (nonatomic,retain) CAShapeLayer * primaryGrabberShadowLayer;                       //@synthesize primaryGrabberShadowLayer=_primaryGrabberShadowLayer - In the implementation block
@property (assign,nonatomic,__weak) CAShapeLayer * secondaryGrabberShadowLayer;              //@synthesize secondaryGrabberShadowLayer=_secondaryGrabberShadowLayer - In the implementation block
@property (nonatomic,retain) UIView * topBorder;                                             //@synthesize topBorder=_topBorder - In the implementation block
@property (assign,getter=isOff,nonatomic) BOOL off;                                          //@synthesize off=_off - In the implementation block
@property (assign,nonatomic) BOOL hasSecondGrabber;                                          //@synthesize hasSecondGrabber=_hasSecondGrabber - In the implementation block
@property (assign,nonatomic) BOOL showGrabbers;                                              //@synthesize showGrabbers=_showGrabbers - In the implementation block
@property (assign,nonatomic) unsigned long long primaryGrabberLocation;                      //@synthesize primaryGrabberLocation=_primaryGrabberLocation - In the implementation block
@property (assign,nonatomic) unsigned long long controlSize;                                 //@synthesize controlSize=_controlSize - In the implementation block
@property (nonatomic,retain) UIColor * layerColor;                                           //@synthesize layerColor=_layerColor - In the implementation block
+(Class)layerClass;
-(void)setControlSize:(unsigned long long)arg1 ;
-(unsigned long long)controlSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(BOOL)isOff;
-(void)layoutSubviews;
-(void)setOff:(BOOL)arg1 ;
-(UIView *)topBorder;
-(void)setTopBorder:(UIView *)arg1 ;
-(BOOL)showGrabbers;
-(void)setShowGrabbers:(BOOL)arg1 ;
-(void)setHasSecondGrabber:(BOOL)arg1 ;
-(void)setPrimaryGrabberLocation:(unsigned long long)arg1 ;
-(void)setLayerColor:(UIColor *)arg1 ;
-(void)_updateBlendMode;
-(void)_updateShape;
-(UIColor *)layerColor;
-(unsigned long long)primaryGrabberLocation;
-(CAShapeLayer *)primaryGrabberShadowLayer;
-(id)_createGrabberShadowLayer;
-(void)setPrimaryGrabberShadowLayer:(CAShapeLayer *)arg1 ;
-(BOOL)hasSecondGrabber;
-(CAShapeLayer *)secondaryGrabberShadowLayer;
-(void)setSecondaryGrabberShadowLayer:(CAShapeLayer *)arg1 ;
@end

