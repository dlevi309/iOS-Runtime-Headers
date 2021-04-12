/*
* Generated on Thursday, January 14, 2021 at 2:20:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)effectCompositingImage:(id)arg1 withMode:(long long)arg2 alpha:(double)arg3 ;
+(id)effectCompositingColor:(id)arg1 withMode:(long long)arg2 alpha:(double)arg3 ;
+(id)emptyEffect;
+(id)_effectCopyingFromCaptureGroup:(id)arg1 ;
+(id)effectCombiningEffects:(id)arg1 ;
+(id)effectCompositingImage:(id)arg1 ;
+(id)effectCompositingColor:(id)arg1 ;
-(void)_updateEffectDescriptor:(id)arg1 forEnvironment:(id)arg2 usage:(long long)arg3 ;
-(BOOL)_needsUpdateForTransitionFromEnvironment:(id)arg1 toEnvironment:(id)arg2 usage:(long long)arg3 ;
-(id)effectForUserInterfaceStyle:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)_isATVStyle;
-(id)_allEffects;
-(long long)_expectedUsage;
-(_UIVisualEffectConfig *)effectConfig;
-(id)initWithCoder:(id)arg1 ;
-(_UIBackdropViewSettings *)effectSettings;
-(void)_enumerateEffects:(/*^block*/id)arg1 ;
-(BOOL)_isAutomaticStyle;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)effectConfigForQuality:(long long)arg1 ;
-(BOOL)_selectorOverridden:(SEL)arg1 ;
@end

