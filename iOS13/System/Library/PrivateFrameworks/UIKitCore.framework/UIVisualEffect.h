/*
* Generated on Monday, March 1, 2021 at 2:30:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class _UIBackdropViewSettings, _UIVisualEffectConfig;

@interface UIVisualEffect : NSObject <NSCopying, NSSecureCoding>

@property (nonatomic,readonly) _UIBackdropViewSettings * effectSettings; 
@property (nonatomic,readonly) BOOL _isATVStyle; 
@property (nonatomic,readonly) BOOL _isAutomaticStyle; 
@property (nonatomic,readonly) _UIVisualEffectConfig * effectConfig; 
+(BOOL)supportsSecureCoding;
+(id)emptyEffect;
+(id)effectCompositingImage:(id)arg1 withMode:(long long)arg2 alpha:(double)arg3 ;
+(id)effectCompositingColor:(id)arg1 withMode:(long long)arg2 alpha:(double)arg3 ;
+(id)effectCombiningEffects:(id)arg1 ;
+(id)effectCompositingImage:(id)arg1 ;
+(id)effectCompositingColor:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(_UIBackdropViewSettings *)effectSettings;
-(void)_updateEffectDescriptor:(id)arg1 forEnvironment:(id)arg2 usage:(long long)arg3 ;
-(BOOL)_needsUpdateForTransitionFromEnvironment:(id)arg1 toEnvironment:(id)arg2 usage:(long long)arg3 ;
-(id)effectForUserInterfaceStyle:(long long)arg1 ;
-(long long)_expectedUsage;
-(BOOL)_isATVStyle;
-(BOOL)_isAutomaticStyle;
-(_UIVisualEffectConfig *)effectConfig;
-(id)effectConfigForQuality:(long long)arg1 ;
-(BOOL)_selectorOverridden:(SEL)arg1 ;
-(id)_allEffects;
-(void)_enumerateEffects:(/*^block*/id)arg1 ;
@end

