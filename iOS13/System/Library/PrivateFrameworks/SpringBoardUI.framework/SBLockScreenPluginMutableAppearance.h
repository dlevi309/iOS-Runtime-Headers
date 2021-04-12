/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
*/

@class NSArray, SBLockScreenLegibilitySettings;


@protocol SBLockScreenPluginMutableAppearance <SBLockScreenPluginAppearance>
@property (assign,getter=isHidden,nonatomic) BOOL hidden; 
@property (assign,nonatomic) unsigned long long restrictedCapabilities; 
@property (assign,nonatomic) long long backgroundStyle; 
@property (assign,nonatomic) long long presentationStyle; 
@property (assign,nonatomic) long long notificationBehavior; 
@property (nonatomic,copy) NSArray * elementOverrides; 
@property (nonatomic,retain) SBLockScreenLegibilitySettings * legibilitySettings; 
@property (assign,nonatomic) CGRect presentationRegion; 
@required
-(BOOL)isHidden;
-(void)setHidden:(BOOL)arg1;
-(void)setPresentationStyle:(long long)arg1;
-(long long)presentationStyle;
-(void)setBackgroundStyle:(long long)arg1;
-(SBLockScreenLegibilitySettings *)legibilitySettings;
-(void)setLegibilitySettings:(id)arg1;
-(long long)backgroundStyle;
-(unsigned long long)restrictedCapabilities;
-(void)setRestrictedCapabilities:(unsigned long long)arg1;
-(long long)notificationBehavior;
-(void)setNotificationBehavior:(long long)arg1;
-(NSArray *)elementOverrides;
-(void)setElementOverrides:(id)arg1;
-(CGRect)presentationRegion;
-(void)setPresentationRegion:(CGRect)arg1;

@end

