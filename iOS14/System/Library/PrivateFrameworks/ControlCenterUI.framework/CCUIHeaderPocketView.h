/*
* Generated on Thursday, January 14, 2021 at 2:24:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
*/

#import <ControlCenterUI/ControlCenterUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol CCUIStatusBarDelegate;
@class UIView, SBUIChevronView, CCUISensorStatusView, CCUIStatusBar;

@interface CCUIHeaderPocketView : UIView {

	UIView* _headerBackgroundView;
	UIView* _headerLineView;
	SBUIChevronView* _headerChevronView;
	CCUISensorStatusView* _sensorStatusView;
	CCUIStatusBar* _statusBar;
	id<CCUIStatusBarDelegate> _statusBarDelegate;
	unsigned long long _mode;
	double _backgroundAlpha;
	UIView* _customBackgroundView;
	double _chevronAlpha;
	double _statusBarAlpha;
	double _sensorStatusViewAlpha;
	double _contentAlphaMultiplier;
	double _verticalContentTranslation;
	long long _interfaceOrientation;
	UIView* _statusLabelView;
	UIEdgeInsets _edgeInsets;
	CGAffineTransform _contentTransform;

}

@property (nonatomic,readonly) CGRect contentBounds; 
@property (nonatomic,readonly) CCUIStatusBar * statusBar;                                     //@synthesize statusBar=_statusBar - In the implementation block
@property (assign,nonatomic,__weak) id<CCUIStatusBarDelegate> statusBarDelegate;              //@synthesize statusBarDelegate=_statusBarDelegate - In the implementation block
@property (nonatomic,retain) UIView * statusLabelView;                                        //@synthesize statusLabelView=_statusLabelView - In the implementation block
@property (nonatomic,readonly) CCUISensorStatusView * sensorStatusView;                       //@synthesize sensorStatusView=_sensorStatusView - In the implementation block
@property (assign,nonatomic) unsigned long long mode;                                         //@synthesize mode=_mode - In the implementation block
@property (assign,nonatomic) UIEdgeInsets edgeInsets;                                         //@synthesize edgeInsets=_edgeInsets - In the implementation block
@property (assign,nonatomic) double backgroundAlpha;                                          //@synthesize backgroundAlpha=_backgroundAlpha - In the implementation block
@property (assign,nonatomic) UIView * customBackgroundView;                                   //@synthesize customBackgroundView=_customBackgroundView - In the implementation block
@property (assign,nonatomic) double chevronAlpha;                                             //@synthesize chevronAlpha=_chevronAlpha - In the implementation block
@property (assign,nonatomic) double statusBarAlpha;                                           //@synthesize statusBarAlpha=_statusBarAlpha - In the implementation block
@property (assign,nonatomic) double sensorStatusViewAlpha;                                    //@synthesize sensorStatusViewAlpha=_sensorStatusViewAlpha - In the implementation block
@property (assign,nonatomic) double contentAlphaMultiplier;                                   //@synthesize contentAlphaMultiplier=_contentAlphaMultiplier - In the implementation block
@property (assign,nonatomic) double verticalContentTranslation;                               //@synthesize verticalContentTranslation=_verticalContentTranslation - In the implementation block
@property (assign,nonatomic) long long interfaceOrientation;                                  //@synthesize interfaceOrientation=_interfaceOrientation - In the implementation block
@property (assign,nonatomic) CGAffineTransform contentTransform;                              //@synthesize contentTransform=_contentTransform - In the implementation block
@property (assign,nonatomic) CGAffineTransform compactScaleTransform; 
@property (assign,nonatomic) unsigned long long chevronState; 
-(CGRect)contentBounds;
-(void)setEdgeInsets:(UIEdgeInsets)arg1 ;
-(UIView *)customBackgroundView;
-(unsigned long long)mode;
-(id)_newDefaultBackgroundView;
-(void)setCustomBackgroundView:(UIView *)arg1 ;
-(UIEdgeInsets)edgeInsets;
-(CCUIStatusBar *)statusBar;
-(void)setContentAlphaMultiplier:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setStatusBarDelegate:(id<CCUIStatusBarDelegate>)arg1 ;
-(void)setStatusLabelView:(UIView *)arg1 ;
-(void)setStatusBarAlpha:(double)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)addSensorStatusForStatusType:(unsigned long long)arg1 sensorActivityData:(id)arg2 ;
-(void)setBackgroundAlpha:(double)arg1 ;
-(void)setVerticalContentTranslation:(double)arg1 ;
-(void)setInterfaceOrientation:(long long)arg1 ;
-(double)chevronAlpha;
-(void)setChevronState:(unsigned long long)arg1 ;
-(void)setMode:(unsigned long long)arg1 ;
-(double)verticalContentTranslation;
-(double)statusBarAlpha;
-(void)_updateAlpha;
-(double)additionalHeightForOrientation:(long long)arg1 ;
-(double)backgroundAlpha;
-(void)setCompactScaleTransform:(CGAffineTransform)arg1 ;
-(void)layoutSubviews;
-(UIView *)statusLabelView;
-(void)setChevronAlpha:(double)arg1 ;
-(void)_setHeaderBackgroundView:(id)arg1 ;
-(void)setSensorStatusViewAlpha:(double)arg1 ;
-(long long)interfaceOrientation;
-(unsigned long long)chevronState;
-(void)removeSensorStatusForSensorType:(unsigned long long)arg1 ;
-(double)sensorStatusViewAlpha;
-(CGAffineTransform)compactScaleTransform;
-(CGAffineTransform)contentTransform;
-(CCUISensorStatusView *)sensorStatusView;
-(void)setContentTransform:(CGAffineTransform)arg1 ;
-(id<CCUIStatusBarDelegate>)statusBarDelegate;
-(void)_updateContentTransform;
-(double)contentAlphaMultiplier;
@end

