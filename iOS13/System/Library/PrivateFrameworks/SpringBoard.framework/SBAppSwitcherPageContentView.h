/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setShowingIconOverlayView:(BOOL)arg1;

@required
-(void)invalidate;
-(BOOL)isActive;
-(void)setActive:(BOOL)arg1;
-(long long)orientation;
-(void)setOrientation:(long long)arg1;
-(void)setVisible:(BOOL)arg1;
-(BOOL)isVisible;
-(void)setCornerRadius:(double)arg1;
-(double)cornerRadius;
-(BOOL)contentRequiresGroupOpacity;

@end

