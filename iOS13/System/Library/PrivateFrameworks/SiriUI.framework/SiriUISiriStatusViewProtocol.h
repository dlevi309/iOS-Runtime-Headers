/*
* Generated on Monday, March 1, 2021 at 2:33:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id<SiriUISiriStatusViewDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)setMode:(long long)arg1;
-(long long)mode;
-(BOOL)paused;
-(void)setPaused:(BOOL)arg1;
-(void)fadeOutCurrentAura;
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

