/*
* Generated on Thursday, January 14, 2021 at 2:25:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBAppSwitcherPageContentView <NSObject>
@property (assign,nonatomic) double cornerRadius; 
@property (assign,nonatomic) long long orientation; 
@property (nonatomic,readonly) BOOL contentRequiresGroupOpacity; 
@property (assign,getter=isActive,nonatomic) BOOL active; 
@property (assign,getter=isVisible,nonatomic) BOOL visible; 
@optional
-(void)setShouldUseBrightMaterial:(BOOL)arg1;
-(BOOL)hasSceneOverlayView;
-(void)setShowingIconOverlayView:(BOOL)arg1;

@required
-(void)setActive:(BOOL)arg1;
-(BOOL)contentRequiresGroupOpacity;
-(BOOL)isActive;
-(void)setVisible:(BOOL)arg1;
-(double)cornerRadius;
-(BOOL)isVisible;
-(long long)orientation;
-(void)invalidate;
-(void)setCornerRadius:(double)arg1;
-(void)setOrientation:(long long)arg1;

@end

