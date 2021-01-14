/*
* Generated on Thursday, January 14, 2021 at 2:25:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
*/

#import <SpringBoardUI/SpringBoardUI-Structs.h>
#import <SpringBoardUI/SBLockScreenPluginAppearanceContext.h>
#import <libobjc.A.dylib/SBLockScreenPluginMutableAppearance.h>

@class NSArray, SBLockScreenLegibilitySettings, NSString;

@interface SBLockScreenPluginMutableAppearanceContext : SBLockScreenPluginAppearanceContext <SBLockScreenPluginMutableAppearance>

@property (assign,getter=isHidden,nonatomic) BOOL hidden; 
@property (assign,nonatomic) unsigned long long restrictedCapabilities; 
@property (assign,nonatomic) long long backgroundStyle; 
@property (assign,nonatomic) long long presentationStyle; 
@property (assign,nonatomic) long long notificationBehavior; 
@property (nonatomic,copy) NSArray * elementOverrides; 
@property (nonatomic,retain) SBLockScreenLegibilitySettings * legibilitySettings; 
@property (assign,nonatomic) CGRect presentationRegion; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)copyWithZone:(NSZone*)arg1 ;
@end

