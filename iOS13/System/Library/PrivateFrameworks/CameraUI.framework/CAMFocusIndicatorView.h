/*
* Generated on Monday, March 1, 2021 at 2:33:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol CAMFocusIndicatorViewDelegate;
@class CAMFocusIndicatorRectView, CAMExposureBiasSlider;

@interface CAMFocusIndicatorView : UIView {

	BOOL _inactive;
	BOOL _showExposureBias;
	float _exposureBiasMaximum;
	float _exposureBiasMinimum;
	float _exposureBiasValue;
	int __exposureBiasSide;
	long long _style;
	id<CAMFocusIndicatorViewDelegate> _delegate;
	CAMFocusIndicatorRectView* __rectView;
	CAMExposureBiasSlider* __exposureBiasSlider;

}

@property (nonatomic,readonly) CAMFocusIndicatorRectView * _rectView;                        //@synthesize _rectView=__rectView - In the implementation block
@property (nonatomic,readonly) CAMExposureBiasSlider * _exposureBiasSlider;                  //@synthesize _exposureBiasSlider=__exposureBiasSlider - In the implementation block
@property (assign,nonatomic) int _exposureBiasSide;                                          //@synthesize _exposureBiasSide=__exposureBiasSide - In the implementation block
@property (assign,nonatomic) long long style;                                                //@synthesize style=_style - In the implementation block
@property (assign,nonatomic,__weak) id<CAMFocusIndicatorViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isInactive,nonatomic) BOOL inactive;                                //@synthesize inactive=_inactive - In the implementation block
@property (assign,getter=isPulsing,nonatomic) BOOL pulsing; 
@property (assign,nonatomic) BOOL showExposureBias;                                          //@synthesize showExposureBias=_showExposureBias - In the implementation block
@property (assign,nonatomic) float exposureBiasMaximum;                                      //@synthesize exposureBiasMaximum=_exposureBiasMaximum - In the implementation block
@property (assign,nonatomic) float exposureBiasMinimum;                                      //@synthesize exposureBiasMinimum=_exposureBiasMinimum - In the implementation block
@property (assign,nonatomic) float exposureBiasValue;                                        //@synthesize exposureBiasValue=_exposureBiasValue - In the implementation block
-(id<CAMFocusIndicatorViewDelegate>)delegate;
-(void)setDelegate:(id<CAMFocusIndicatorViewDelegate>)arg1 ;
-(long long)style;
-(void)setStyle:(long long)arg1 ;
-(void)setCenter:(CGPoint)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 ;
-(void)_updateTintColor;
-(void)setPulsing:(BOOL)arg1 ;
-(void)setInactive:(BOOL)arg1 ;
-(BOOL)isInactive;
-(BOOL)isPulsing;
-(void)setStyle:(long long)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)setExposureBiasValue:(float)arg1 ;
-(float)exposureBiasValue;
-(void)startScalingWithExpansionWidth:(double)arg1 duration:(double)arg2 repeatCount:(unsigned long long)arg3 ;
-(void)_createRectViewAndUpdateBounds;
-(void)_commonCAMFocusIndicatorViewInitialization;
-(void)_layoutRectView:(id)arg1 ;
-(void)_layoutExposureBiasSlider;
-(CAMFocusIndicatorRectView *)_rectView;
-(void)_createExposureBiasSlider;
-(void)setShowExposureBias:(BOOL)arg1 ;
-(void)setExposureBiasMaximum:(float)arg1 ;
-(void)setExposureBiasMinimum:(float)arg1 ;
-(void)setExposureBiasSide:(int)arg1 animated:(BOOL)arg2 ;
-(BOOL)showExposureBias;
-(float)exposureBiasMaximum;
-(float)exposureBiasMinimum;
-(CAMExposureBiasSlider *)_exposureBiasSlider;
-(int)_exposureBiasSide;
-(void)set_exposureBiasSide:(int)arg1 ;
@end

