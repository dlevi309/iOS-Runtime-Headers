/*
* Generated on Thursday, January 14, 2021 at 2:26:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setInactive:(BOOL)arg1 ;
-(void)setPulsing:(BOOL)arg1 ;
-(int)_exposureBiasSide;
-(BOOL)isInactive;
-(BOOL)isPulsing;
-(void)_updateTintColor;
-(CGSize)intrinsicContentSize;
-(float)exposureBiasMaximum;
-(void)_commonCAMFocusIndicatorViewInitialization;
-(id<CAMFocusIndicatorViewDelegate>)delegate;
-(void)setStyle:(long long)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithStyle:(long long)arg1 ;
-(void)startScalingWithExpansionWidth:(double)arg1 duration:(double)arg2 repeatCount:(unsigned long long)arg3 ;
-(float)exposureBiasMinimum;
-(void)_createExposureBiasSlider;
-(void)set_exposureBiasSide:(int)arg1 ;
-(void)setDelegate:(id<CAMFocusIndicatorViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(void)_layoutExposureBiasSlider;
-(void)setCenter:(CGPoint)arg1 ;
-(void)setExposureBiasMaximum:(float)arg1 ;
-(CAMFocusIndicatorRectView *)_rectView;
-(float)exposureBiasValue;
-(void)_layoutRectView:(id)arg1 ;
-(void)setExposureBiasValue:(float)arg1 ;
-(CGRect)boundsIncludingExposureBiasSlider;
-(void)setExposureBiasMinimum:(float)arg1 ;
-(void)_createRectViewAndUpdateBounds;
-(void)setStyle:(long long)arg1 ;
-(CAMExposureBiasSlider *)_exposureBiasSlider;
-(void)setExposureBiasSide:(int)arg1 animated:(BOOL)arg2 ;
-(BOOL)showExposureBias;
-(long long)style;
-(void)setShowExposureBias:(BOOL)arg1 ;
@end

