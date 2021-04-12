/*
* Generated on Thursday, January 14, 2021 at 2:24:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
*/

@class UIView;


@protocol SiriUISiriStatusViewProtocol <NSObject>
@property (assign,nonatomic) long long mode; 
@property (assign,nonatomic) double flamesViewWidth; 
@property (assign,nonatomic) double disabledMicOpacity; 
@property (assign,nonatomic,__weak) id<SiriUISiriStatusViewDelegate> delegate; 
@property (nonatomic,readonly) UIView * flamesContainerView; 
@property (assign,nonatomic) BOOL flamesViewDeferred; 
@property (assign,getter=isInUITrackingMode,nonatomic) BOOL inUITrackingMode; 
@property (assign,nonatomic) BOOL paused; 
@property (nonatomic,readonly) double statusViewHeight; 
@required
-(long long)mode;
-(void)fadeOutCurrentAura;
-(id<SiriUISiriStatusViewDelegate>)delegate;
-(void)setPaused:(BOOL)arg1;
-(void)setMode:(long long)arg1;
-(void)setDelegate:(id)arg1;
-(BOOL)paused;
-(double)flamesViewWidth;
-(void)setupOrbIfNeeded;
-(void)forceMicVisible:(BOOL)arg1;
-(void)setFlamesViewWidth:(double)arg1;
-(double)disabledMicOpacity;
-(void)setDisabledMicOpacity:(double)arg1;
-(UIView *)flamesContainerView;
-(BOOL)flamesViewDeferred;
-(void)setFlamesViewDeferred:(BOOL)arg1;
-(BOOL)isInUITrackingMode;
-(void)setInUITrackingMode:(BOOL)arg1;
-(double)statusViewHeight;

@end

