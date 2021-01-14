/*
* Generated on Thursday, January 14, 2021 at 2:25:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)succinctDescription;
-(long long)presentationStyle;
-(BOOL)isHidden;
-(void)setRestrictedCapabilities:(unsigned long long)arg1 ;
-(void)setPresentationStyle:(long long)arg1 ;
-(long long)backgroundStyle;
-(void)setHidden:(BOOL)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(long long)notificationBehavior;
-(void)setLegibilitySettings:(SBLockScreenLegibilitySettings *)arg1 ;
-(void)setNotificationBehavior:(long long)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)initWithAppearance:(id)arg1 ;
-(NSString *)description;
-(void)setBackgroundStyle:(long long)arg1 ;
-(SBLockScreenLegibilitySettings *)legibilitySettings;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)restrictedCapabilities;
-(CGRect)presentationRegion;
-(void)setPresentationRegion:(CGRect)arg1 ;
-(NSArray *)elementOverrides;
-(void)setElementOverrides:(NSArray *)arg1 ;
@end

