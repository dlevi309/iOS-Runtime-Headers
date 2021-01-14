/*
* Generated on Thursday, January 14, 2021 at 2:20:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIVisualEffectViewEntry.h>

@class UIColor;

@interface _UITintColorViewEntry : _UIVisualEffectViewEntry {

	UIColor* _tintColor;

}

@property (nonatomic,copy) UIColor * tintColor;              //@synthesize tintColor=_tintColor - In the implementation block
-(BOOL)canTransitionToEffect:(id)arg1 ;
-(void)setTintColor:(UIColor *)arg1 ;
-(void)removeEffectFromView:(id)arg1 ;
-(id)description;
-(void)applyIdentityEffectToView:(id)arg1 ;
-(void)applyRequestedEffectToView:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIColor *)tintColor;
@end

