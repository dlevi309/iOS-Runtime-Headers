/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
*/

#import <SpringBoardUI/SpringBoardUI-Structs.h>
#import <SpringBoardUI/SBLockScreenPluginAppearanceContext.h>
#import <libobjc.A.dylib/SBLockScreenPluginMutableAppearance.h>

@class NSString, NSArray, SBLockScreenLegibilitySettings;

@interface SBLockScreenPluginMutableAppearanceContext : SBLockScreenPluginAppearanceContext <SBLockScreenPluginMutableAppearance>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isHidden,nonatomic,readonly) BOOL hidden; 
@property (nonatomic,readonly) unsigned long long restrictedCapabilities; 
@property (nonatomic,readonly) long long backgroundStyle; 
@property (nonatomic,readonly) long long presentationStyle; 
@property (nonatomic,readonly) long long notificationBehavior; 
@property (nonatomic,copy,readonly) NSArray * elementOverrides; 
@property (nonatomic,retain,readonly) SBLockScreenLegibilitySettings * legibilitySettings; 
@property (nonatomic,readonly) CGRect presentationRegion; 
-(id)copyWithZone:(NSZone*)arg1 ;
@end

