/*
* Generated on Thursday, January 14, 2021 at 2:20:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIVisualEffect.h>

@class _UIVisualEffectViewBackdropCaptureGroup;

@interface _UICopyEffect : UIVisualEffect {

	_UIVisualEffectViewBackdropCaptureGroup* _captureGroup;

}
+(id)copyEffectWithCaptureGroup:(id)arg1 ;
-(void)_updateEffectDescriptor:(id)arg1 forEnvironment:(id)arg2 usage:(long long)arg3 ;
-(BOOL)_needsUpdateForTransitionFromEnvironment:(id)arg1 toEnvironment:(id)arg2 usage:(long long)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(long long)_expectedUsage;
@end

