/*
* Generated on Thursday, January 14, 2021 at 2:25:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
*/

@class NSArray, SBLockScreenLegibilitySettings;


@protocol SBLockScreenPluginAppearance <NSObject>
@property (getter=isHidden,nonatomic,readonly) BOOL hidden; 
@property (nonatomic,readonly) unsigned long long restrictedCapabilities; 
@property (nonatomic,readonly) long long backgroundStyle; 
@property (nonatomic,readonly) long long presentationStyle; 
@property (nonatomic,readonly) long long notificationBehavior; 
@property (nonatomic,copy,readonly) NSArray * elementOverrides; 
@property (nonatomic,retain,readonly) SBLockScreenLegibilitySettings * legibilitySettings; 
@property (nonatomic,readonly) CGRect presentationRegion; 
@required
-(long long)presentationStyle;
-(BOOL)isHidden;
-(long long)backgroundStyle;
-(long long)notificationBehavior;
-(SBLockScreenLegibilitySettings *)legibilitySettings;
-(unsigned long long)restrictedCapabilities;
-(CGRect)presentationRegion;
-(NSArray *)elementOverrides;

@end

