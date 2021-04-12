/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BatteryCenterUI.framework/BatteryCenterUI
*/

@class UIImage, NSString;


@protocol BCUIBatteryDeviceDisplaying <NSObject>
@property (assign,nonatomic) long long percentCharge; 
@property (assign,getter=isCharging,nonatomic) BOOL charging; 
@property (assign,getter=isLowCharge,nonatomic) BOOL lowCharge; 
@property (assign,getter=isLowPowerModeEnabled,nonatomic) BOOL lowPowerModeEnabled; 
@property (nonatomic,retain) UIImage * glyph; 
@property (nonatomic,copy) NSString * name; 
@property (assign,getter=isEmpty,nonatomic) BOOL empty; 
@property (assign,nonatomic,__weak) id<UIViewControllerTransitionCoordinator> transitionCoordinator; 
@optional
-(NSString *)name;
-(id<UIViewControllerTransitionCoordinator>)transitionCoordinator;
-(void)setName:(id)arg1;
-(BOOL)isEmpty;
-(void)setEmpty:(BOOL)arg1;
-(void)setTransitionCoordinator:(id)arg1;

@required
-(void)setLowPowerModeEnabled:(BOOL)arg1;
-(UIImage *)glyph;
-(BOOL)isLowPowerModeEnabled;
-(void)setGlyph:(id)arg1;
-(void)setPercentCharge:(long long)arg1;
-(BOOL)isCharging;
-(void)setCharging:(BOOL)arg1;
-(long long)percentCharge;
-(BOOL)isLowCharge;
-(void)setLowCharge:(BOOL)arg1;

@end

