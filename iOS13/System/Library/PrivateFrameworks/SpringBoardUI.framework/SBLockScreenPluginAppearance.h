/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isHidden;
-(long long)presentationStyle;
-(SBLockScreenLegibilitySettings *)legibilitySettings;
-(long long)backgroundStyle;
-(unsigned long long)restrictedCapabilities;
-(long long)notificationBehavior;
-(NSArray *)elementOverrides;
-(CGRect)presentationRegion;

@end

