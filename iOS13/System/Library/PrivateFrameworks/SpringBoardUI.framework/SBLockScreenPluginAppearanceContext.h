/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
*/

#import <SpringBoardUI/SpringBoardUI-Structs.h>
#import <libobjc.A.dylib/SBLockScreenPluginMutableAppearance.h>
#import <libobjc.A.dylib/SBLockScreenPluginAppearance.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSArray, SBLockScreenLegibilitySettings, NSString;

@interface SBLockScreenPluginAppearanceContext : NSObject <SBLockScreenPluginMutableAppearance, SBLockScreenPluginAppearance, NSCopying, NSMutableCopying> {

	BOOL hidden;
	unsigned long long restrictedCapabilities;
	long long backgroundStyle;
	long long presentationStyle;
	long long notificationBehavior;
	SBLockScreenLegibilitySettings* legibilitySettings;
	NSArray* elementOverrides;
	CGRect presentationRegion;

}

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
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(BOOL)isHidden;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)setHidden:(BOOL)arg1 ;
-(void)setPresentationStyle:(long long)arg1 ;
-(long long)presentationStyle;
-(void)setBackgroundStyle:(long long)arg1 ;
-(SBLockScreenLegibilitySettings *)legibilitySettings;
-(void)setLegibilitySettings:(SBLockScreenLegibilitySettings *)arg1 ;
-(long long)backgroundStyle;
-(unsigned long long)restrictedCapabilities;
-(void)setRestrictedCapabilities:(unsigned long long)arg1 ;
-(long long)notificationBehavior;
-(void)setNotificationBehavior:(long long)arg1 ;
-(NSArray *)elementOverrides;
-(void)setElementOverrides:(NSArray *)arg1 ;
-(CGRect)presentationRegion;
-(void)setPresentationRegion:(CGRect)arg1 ;
-(id)initWithAppearance:(id)arg1 ;
@end

