/*
* Generated on Thursday, January 14, 2021 at 2:25:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(long long)presentationStyle;
-(BOOL)isHidden;
-(void)setRestrictedCapabilities:(unsigned long long)arg1;
-(void)setPresentationStyle:(long long)arg1;
-(long long)backgroundStyle;
-(void)setHidden:(BOOL)arg1;
-(long long)notificationBehavior;
-(void)setLegibilitySettings:(id)arg1;
-(void)setNotificationBehavior:(long long)arg1;
-(void)setBackgroundStyle:(long long)arg1;
-(SBLockScreenLegibilitySettings *)legibilitySettings;
-(unsigned long long)restrictedCapabilities;
-(CGRect)presentationRegion;
-(void)setPresentationRegion:(CGRect)arg1;
-(NSArray *)elementOverrides;
-(void)setElementOverrides:(id)arg1;

@end

