/*
* Generated on Thursday, January 14, 2021 at 2:20:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIVisualEffect.h>

@class NSArray;

@interface _UICompoundEffect : UIVisualEffect {

	NSArray* _effects;

}
+(BOOL)supportsSecureCoding;
-(BOOL)_needsUpdateForTransitionFromEnvironment:(id)arg1 toEnvironment:(id)arg2 usage:(long long)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_allEffects;
-(id)description;
-(long long)_expectedUsage;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)_enumerateEffects:(/*^block*/id)arg1 ;
-(id)initWithEffects:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

